
#include <glbinding/Binding.h>

#include <glbinding/ProcAddress.h>

#include <unordered_map>
#include <mutex>
#include <cassert>

namespace
{
    THREAD_LOCAL glbinding::ContextHandle t_context = 0;

    std::recursive_mutex g_mutex;
    std::unordered_map<glbinding::ContextHandle, int> g_bindings;
}

namespace
{
THREAD_LOCAL int t_pos = -1;
}

namespace glbinding 
{

int Binding::s_maxpos = -1;

std::vector<khrapi::AbstractFunction *> Binding::s_additionalFunctions;
std::vector<Binding::ContextSwitchCallback> Binding::s_callbacks;

khrapi::ProcAddress Binding::getProcAddress(const char * name)
{
    return glbinding::getProcAddress(name);
}

const Binding::array_t & Binding::functions() 
{
    return s_functions;
}

int Binding::currentPos()
{
    return t_pos;
}

const std::vector<khrapi::AbstractFunction *> & Binding::additionalFunctions()
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
    provideState(pos);
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

void Binding::registerAdditionalFunction(khrapi::AbstractFunction * function)
{
    s_additionalFunctions.push_back(function);
}

void Binding::resolveFunctions()
{
    for (khrapi::AbstractFunction * function : functions())
    {
        function->resolveAddress();
    }

    for (khrapi::AbstractFunction * function : additionalFunctions())
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
    setStatePos(g_bindings[t_context]);
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
    neglectState(g_bindings[context]);
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

void Binding::provideState(const int pos)
{
    assert(pos > -1);

    // if a state at pos exists, it is assumed to be neglected before
    if (s_maxpos < pos)
    {
        for (khrapi::AbstractFunction * function : functions())
        {
            function->resizeStates(pos + 1);
        }

        s_maxpos = pos;
    }
}

void Binding::neglectState(const int pos)
{
    assert(pos <= s_maxpos);
    assert(pos > -1);

    if (pos == s_maxpos)
    {
        for (khrapi::AbstractFunction * function : Binding::functions())
        {
            function->resizeStates(std::max(0, pos - 1));
        }

        --s_maxpos;
    }
    else
    {
        for (khrapi::AbstractFunction * function : Binding::functions())
        {
            function->state(pos) = khrapi::State<Binding>();
        }
    }

    if (pos == t_pos)
    {
        t_pos = -1;
    }
}

void Binding::setStatePos(const int pos)
{
    t_pos = pos;
}


void Binding::setCallbackMask(const khrapi::CallbackMask mask)
{
    for (khrapi::AbstractFunction * function : functions())
    {
        function->setCallbackMask(mask);
    }
}

void Binding::setCallbackMaskExcept(const khrapi::CallbackMask mask, const std::set<std::string> & blackList)
{
    for (khrapi::AbstractFunction * function : functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->setCallbackMask(mask);
        }
    }
}

void Binding::addCallbackMask(const khrapi::CallbackMask mask)
{
    for (khrapi::AbstractFunction * function : functions())
    {
        function->addCallbackMask(mask);
    }
}

void Binding::addCallbackMaskExcept(const khrapi::CallbackMask mask, const std::set<std::string> & blackList)
{
    for (khrapi::AbstractFunction * function : functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->addCallbackMask(mask);
        }
    }
}

void Binding::removeCallbackMask(const khrapi::CallbackMask mask)
{
    for (khrapi::AbstractFunction * function : functions())
    {
        function->removeCallbackMask(mask);
    }
}

} // namespace glbinding
