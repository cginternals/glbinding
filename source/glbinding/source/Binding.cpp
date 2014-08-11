
#include <glbinding/Binding.h>

#include <unordered_map>
#include <mutex>
#include <cassert>


#include "thread_local.h"


namespace glbinding 
{

namespace
{
THREAD_LOCAL ContextHandle g_context = 0;

std::recursive_mutex mutex;
std::unordered_map<ContextHandle, int> bindings;
}

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
    mutex.lock(); // TODO: use read lock
    if (bindings.find(context) != bindings.end())
    {
        mutex.unlock();
        return;
    }
    mutex.unlock();

    const int pos = static_cast<int>(bindings.size());

    mutex.lock(); // TODO: use write lock
    bindings[context] = pos;
    mutex.unlock();

    mutex.lock(); // TODO: use read lock
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

    mutex.lock(); // TODO: use read lock
    if (bindings.find(g_context) == bindings.end())
    {
        mutex.unlock();

        initialize(g_context);
    }
    else
    {
        mutex.unlock();
    }

    mutex.lock(); // TODO: use read lock
    AbstractFunction::setStatePos(bindings[g_context]);
    mutex.unlock();
}

void Binding::releaseCurrentContext()
{
    releaseContext(getCurrentContext());
}

void Binding::releaseContext(const ContextHandle context)
{
    mutex.lock(); // ToDo: use read lock
    AbstractFunction::neglectState(bindings[context]);
    mutex.unlock();

    mutex.lock(); // ToDo: use write lock
    bindings.erase(context);
    mutex.unlock();
}

} // namespace glbinding
