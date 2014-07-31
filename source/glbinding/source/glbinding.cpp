
#include <glbinding/glbinding.h>
#include "glbinding_private.h"

#include <glbinding/FunctionObjects.h>

#include <unordered_map>
#include <mutex>
#include <cassert>

#ifdef _MSC_VER
#define THREAD_LOCAL  __declspec(thread)
#else
#define THREAD_LOCAL __thread
#endif

namespace glbinding {

namespace {

THREAD_LOCAL ContextId g_currentContextId = 0;
THREAD_LOCAL FunctionObjects * g_currentFunctionObjects = nullptr;

std::mutex mutex;
std::unordered_map<ContextId, FunctionObjects*> g_FunctionObjectsMap;

}


void initialize()
{
    initialize(getCurrentContextId());
}

void initialize(ContextId contextId, bool _useContext, bool _resolveFunctions)
{
    mutex.lock(); // TODO: use read lock
    if (g_FunctionObjectsMap.find(contextId) != g_FunctionObjectsMap.end())
    {
        mutex.unlock();
        return;
    }
    mutex.unlock();

    FunctionObjects * functions = new FunctionObjects();

    mutex.lock(); // TODO: use write lock
    g_FunctionObjectsMap[contextId] = functions;
    mutex.unlock();

    if (_useContext)
        useContext(contextId);

    if (_resolveFunctions)
        resolveFunctions();
}

void resolveFunctions()
{
    for (AbstractFunction * function : currentFunctionObjects())
    {
        function->resolveAddress();
    }
}

void useCurrentContext()
{
    useContext(getCurrentContextId());
}

void useContext(ContextId contextId)
{
    g_currentContextId = contextId;

    mutex.lock(); // TODO: use read lock
    if (g_FunctionObjectsMap.find(g_currentContextId) == g_FunctionObjectsMap.end())
        initialize(g_currentContextId);
    mutex.unlock();

    mutex.lock(); // TODO: use read lock
    g_currentFunctionObjects = g_FunctionObjectsMap[g_currentContextId];
    mutex.unlock();
}


FunctionObjects & currentFunctionObjects()
{
    assert(g_currentFunctionObjects != nullptr);

    return *g_currentFunctionObjects;
}

void finalizeCurrentContext()
{
    finalizeContext(getCurrentContextId());
}

void finalizeContext(ContextId contextId)
{
    mutex.lock(); // TODO: use read lock
    delete g_FunctionObjectsMap[contextId];
    mutex.unlock();

    mutex.lock(); // TODO: use write lock
    g_FunctionObjectsMap.erase(contextId);
    mutex.unlock();

    if (g_currentContextId == contextId)
    {
        g_currentFunctionObjects = nullptr;
        g_currentContextId = 0;
    }
}

} // namespace glbinding
