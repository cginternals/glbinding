
#include <glbinding/glbinding.h>

#include <glbinding/Binding.h>

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
THREAD_LOCAL Binding * g_currentBinding = nullptr;

std::mutex mutex;
std::unordered_map<ContextId, Binding*> g_Bindings;

}


void initialize()
{
    initialize(getCurrentContextId());
}

void initialize(ContextId contextId, bool _useContext, bool _resolveFunctions)
{
    mutex.lock(); // TODO: use read lock
    if (g_Bindings.find(contextId) != g_Bindings.end())
    {
        mutex.unlock();
        return;
    }
    mutex.unlock();

    Binding * functions = new Binding();

    mutex.lock(); // TODO: use write lock
    g_Bindings[contextId] = functions;
    mutex.unlock();

    if (_useContext)
        useContext(contextId);

    if (_resolveFunctions)
        resolveFunctions();
}

void resolveFunctions()
{
    for (AbstractFunction * function : currentBinding())
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
    if (g_Bindings.find(g_currentContextId) == g_Bindings.end())
        initialize(g_currentContextId);
    mutex.unlock();

    mutex.lock(); // TODO: use read lock
    g_currentBinding = g_Bindings[g_currentContextId];
    mutex.unlock();
}


Binding & currentBinding()
{
    assert(g_currentBinding != nullptr);

    return *g_currentBinding;
}

void finalizeCurrentContext()
{
    finalizeContext(getCurrentContextId());
}

void finalizeContext(ContextId contextId)
{
    mutex.lock(); // TODO: use read lock
    delete g_Bindings[contextId];
    mutex.unlock();

    mutex.lock(); // TODO: use write lock
    g_Bindings.erase(contextId);
    mutex.unlock();

    if (g_currentContextId == contextId)
    {
        g_currentBinding = nullptr;
        g_currentContextId = 0;
    }
}

} // namespace glbinding
