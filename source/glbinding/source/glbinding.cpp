
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

void initialize(ContextId contextId, bool use)
{
    if (g_FunctionObjectsMap.find(contextId) != g_FunctionObjectsMap.end())
        return;

    FunctionObjects * functions = new FunctionObjects();

    for (AbstractFunction * function : functions->functions())
    {
        function->initialize();
    }

    mutex.lock();
    g_FunctionObjectsMap[contextId] = functions;
    mutex.unlock();

    if (use)
        useContext(contextId);
}

void useContext(ContextId contextId)
{
    g_currentContextId = contextId;

    if (g_FunctionObjectsMap.find(g_currentContextId) == g_FunctionObjectsMap.end())
        initialize(g_currentContextId);

    g_currentFunctionObjects = g_FunctionObjectsMap[g_currentContextId];
}

//void releaseContext()
//{

//}

FunctionObjects & currentFunctionObjects()
{
    assert(g_currentFunctionObjects != nullptr);

    return *g_currentFunctionObjects;
}

} // namespace glbinding
