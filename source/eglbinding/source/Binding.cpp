
#include <eglbinding/Binding.h>

#include <unordered_map>
#include <mutex>
#include <cassert>

namespace
{
    THREAD_LOCAL glbinding::ContextHandle t_context = 0;

    std::recursive_mutex g_mutex;
    std::unordered_map<glbinding::ContextHandle, int> g_bindings;
}

namespace eglbinding
{

std::vector<AbstractFunction *> Binding::s_additionalFunctions;
std::vector<Binding::ContextSwitchCallback> Binding::s_callbacks;

const Binding::array_t & Binding::functions() 
{
    return s_functions;
}

const std::vector<AbstractFunction *> & Binding::additionalFunctions()
{
    return s_additionalFunctions;
}

size_t Binding::size()
{
    return s_functions.size() + s_additionalFunctions.size();
}

void Binding::initialize(const bool resolveFunctions)
{
    initialize(getCurrentContext(), true, resolveFunctions);
}


void AbstractFunction::provideState(const int pos)
{
    assert(pos > -1);

    // if a state at pos exists, it is assumed to be neglected before
    if (s_maxpos < pos)
    {
        for (AbstractFunction * function : Binding::functions())
        {
            function->m_states.resize(static_cast<std::size_t>(pos + 1));
        }

        s_maxpos = pos;
    }
}

void AbstractFunction::neglectState(const int pos)
{
    assert(pos <= s_maxpos);
    assert(pos > -1);

    if (pos == s_maxpos)
    {
        for (AbstractFunction * function : Binding::functions())
        {
            function->m_states.resize(static_cast<std::size_t>(std::max(0, pos - 1)));
        }

        --s_maxpos;
    }
    else
    {
        for (AbstractFunction * function : Binding::functions())
        {
            function->m_states[pos] = State();
        }
    }

    if (pos == t_pos)
    {
        t_pos = -1;
    }
}

void AbstractFunction::setStatePos(const int pos)
{
    t_pos = pos;
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
    {
        useContext(context);
    }

    if (_resolveFunctions)
    {
        resolveFunctions();
    }
}

void Binding::registerAdditionalFunction(AbstractFunction * function)
{
    s_additionalFunctions.push_back(function);
}

void Binding::resolveFunctions()
{
    for (AbstractFunction * function : Binding::functions())
    {
        function->resolveAddress();
    }

    for (AbstractFunction * function : Binding::additionalFunctions())
    {
        function->resolveAddress();
    }
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

        return;
    }
    else
    {
        g_mutex.unlock();
    }

    g_mutex.lock();
    AbstractFunction::setStatePos(g_bindings[t_context]);
    g_mutex.unlock();

    g_mutex.lock();
    for (const auto & callback : s_callbacks)
    {
        callback(t_context);
    }
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

void Binding::addContextSwitchCallback(ContextSwitchCallback callback)
{
    g_mutex.lock();
    s_callbacks.push_back(std::move(callback));
    g_mutex.unlock();
}

} // namespace eglbinding
