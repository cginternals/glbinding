
#include <glbinding/Binding.h>

#include <unordered_map>
#include <mutex>
#include <cassert>

namespace
{
    THREAD_LOCAL glbinding::ContextHandle t_context = 0;

    std::recursive_mutex g_mutex;
    std::unordered_map<glbinding::ContextHandle, int> g_bindings;
}

namespace glbinding 
{

const Binding::array_t & Binding::functions() 
{
    return s_functions;
}

void Binding::initialize(const bool resolveFunctions)
{
    initialize(getCurrentContext(), true, resolveFunctions);
}

void Binding::initialize(
    const ContextHandle context
,   const bool _useContext
,   const bool _resolveFunctions)
{
    g_mutex.lock();
    if (g_bindings.find(context) != g_bindings.end())
    {
        g_mutex.unlock();
        return;
    }
    g_mutex.unlock();

    const int pos = static_cast<int>(g_bindings.size());

    g_mutex.lock();
    g_bindings[context] = pos;
    g_mutex.unlock();

    g_mutex.lock();
    AbstractFunction::provideState(pos);
    g_mutex.unlock();

    if (_useContext)
        useContext(context);

    if (_resolveFunctions)
        resolveFunctions();
}

void Binding::resolveFunctions()
{
    for (AbstractFunction * function : Binding::functions())
        function->resolveAddress();
}

void Binding::useCurrentContext()
{
    useContext(getCurrentContext());
}

void Binding::useContext(const ContextHandle context)
{
    t_context = context;

    g_mutex.lock();
    if (g_bindings.find(t_context) == g_bindings.end())
    {
        g_mutex.unlock();

        initialize(t_context);
    }
    else
    {
        g_mutex.unlock();
    }

    g_mutex.lock();
    AbstractFunction::setStatePos(g_bindings[t_context]);
    g_mutex.unlock();
}

void Binding::releaseCurrentContext()
{
    releaseContext(getCurrentContext());
}

void Binding::releaseContext(const ContextHandle context)
{
    g_mutex.lock();
    AbstractFunction::neglectState(g_bindings[context]);
    g_mutex.unlock();

    g_mutex.lock();
    g_bindings.erase(context);
    g_mutex.unlock();
}

} // namespace glbinding
