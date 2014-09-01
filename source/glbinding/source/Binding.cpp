
#include <glbinding/Binding.h>

#include <unordered_map>
#include <mutex>
#include <cassert>

namespace
{
    THREAD_LOCAL glbinding::ContextHandle g_context = 0;

    std::recursive_mutex mutex;
    std::unordered_map<glbinding::ContextHandle, int> bindings;
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
    mutex.lock();
    if (bindings.find(context) != bindings.end())
    {
        mutex.unlock();
        return;
    }
    mutex.unlock();

    const int pos = static_cast<int>(bindings.size());

    mutex.lock();
    bindings[context] = pos;
    mutex.unlock();

    mutex.lock();
    AbstractFunction::provideState(pos);
    mutex.unlock();

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
    g_context = context;

    mutex.lock();
    if (bindings.find(g_context) == bindings.end())
    {
        mutex.unlock();

        initialize(g_context);
    }
    else
    {
        mutex.unlock();
    }

    mutex.lock();
    AbstractFunction::setStatePos(bindings[g_context]);
    mutex.unlock();
}

void Binding::releaseCurrentContext()
{
    releaseContext(getCurrentContext());
}

void Binding::releaseContext(const ContextHandle context)
{
    mutex.lock();
    AbstractFunction::neglectState(bindings[context]);
    mutex.unlock();

    mutex.lock();
    bindings.erase(context);
    mutex.unlock();
}

} // namespace glbinding
