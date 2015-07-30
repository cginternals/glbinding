#pragma once

#include <khrapi/Binding.h>

#include <mutex>

namespace
{
    template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
    ContextHandle & context()
    {
        static THREAD_LOCAL ContextHandle t_context = 0;

        return t_context;
    }

    template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
    int & pos()
    {
        static THREAD_LOCAL int t_pos = -1;

        return t_pos;
    }

    template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
    std::recursive_mutex & mutex()
    {
        static std::recursive_mutex g_mutex;

        return g_mutex;
    }

    template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
    std::unordered_map<ContextHandle, int> & bindings()
    {
        static std::unordered_map<ContextHandle, int> g_bindings;

        return g_bindings;
    }
}

namespace khrapi
{

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
int Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::s_maxpos = -1;

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
std::vector<khrapi::AbstractFunction *> Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::s_additionalFunctions;

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
std::vector<typename Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::ContextSwitchCallback> Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::s_callbacks;

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
khrapi::ProcAddress Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::getProcAddress(const char * name)
{
    return ProcAddress(name);
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
const typename Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::array_t & Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::functions()
{
    return s_functions;
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
int Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::currentPos()
{
    return pos<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>();
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
const std::vector<khrapi::AbstractFunction *> & Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::additionalFunctions()
{
    return s_additionalFunctions;
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
size_t Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::size()
{
    return s_functions.size() + s_additionalFunctions.size();
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::initialize(const bool resolveFunctions)
{
    initialize(GetCurrentContext(), true, resolveFunctions);
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::initialize(
    const ContextHandle context
,   const bool _useContext
,   const bool _resolveFunctions)
{
    mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().lock();
    if (bindings<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().find(context) != bindings<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().end())
    {
        mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().unlock();
        return;
    }
    mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().unlock();

    const int pos = static_cast<int>(bindings<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().size());

    mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().lock();
    bindings<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>()[context] = pos;
    mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().unlock();

    mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().lock();
    provideState(pos);
    mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().unlock();

    if (_useContext)
    {
        useContext(context);
    }

    if (_resolveFunctions)
    {
        resolveFunctions();
    }
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::registerAdditionalFunction(khrapi::AbstractFunction * function)
{
    s_additionalFunctions.push_back(function);
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::resolveFunctions()
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

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::useCurrentContext()
{
    useContext(GetCurrentContext());
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::useContext(const ContextHandle c)
{
    context<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>() = c;

    mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().lock();
    if (bindings<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().find(context<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>()) == bindings<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().end())
    {
        mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().unlock();

        initialize(context<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>());

        return;
    }
    else
    {
        mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().unlock();
    }

    mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().lock();
    setStatePos(bindings<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>()[context<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>()]);
    mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().unlock();

    mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().lock();
    for (const auto & callback : s_callbacks)
    {
        callback(context<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>());
    }
    mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().unlock();
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::releaseCurrentContext()
{
    releaseContext(GetCurrentContext());
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::releaseContext(const ContextHandle context)
{
    mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().lock();
    neglectState(bindings<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>()[context]);
    mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().unlock();

    mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().lock();
    bindings<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().erase(context);
    mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().unlock();
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::addContextSwitchCallback(ContextSwitchCallback callback)
{
    mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().lock();
    s_callbacks.push_back(std::move(callback));
    mutex<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>().unlock();
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::provideState(const int pos)
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

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::neglectState(const int p)
{
    assert(p <= s_maxpos);
    assert(p > -1);

    if (p == s_maxpos)
    {
        for (khrapi::AbstractFunction * function : Binding::functions())
        {
            function->resizeStates(std::max(0, p - 1));
        }

        --s_maxpos;
    }
    else
    {
        for (khrapi::AbstractFunction * function : Binding::functions())
        {
            function->state(p) = khrapi::State<Binding>();
        }
    }

    if (p == pos<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>())
    {
        pos<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>() = -1;
    }
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::setStatePos(const int p)
{
    pos<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>() = p;
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::setCallbackMask(const khrapi::CallbackMask mask)
{
    for (khrapi::AbstractFunction * function : functions())
    {
        function->setCallbackMask(mask);
    }
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::setCallbackMaskExcept(const khrapi::CallbackMask mask, const std::set<std::string> & blackList)
{
    for (khrapi::AbstractFunction * function : functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->setCallbackMask(mask);
        }
    }
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::addCallbackMask(const khrapi::CallbackMask mask)
{
    for (khrapi::AbstractFunction * function : functions())
    {
        function->addCallbackMask(mask);
    }
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::addCallbackMaskExcept(const khrapi::CallbackMask mask, const std::set<std::string> & blackList)
{
    for (khrapi::AbstractFunction * function : functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->addCallbackMask(mask);
        }
    }
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ContextHandle, FunctionCount, ProcAddress, GetCurrentContext>::removeCallbackMask(const khrapi::CallbackMask mask)
{
    for (khrapi::AbstractFunction * function : functions())
    {
        function->removeCallbackMask(mask);
    }
}

} // namespace khrapi
