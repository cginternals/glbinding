#pragma once

#include <khrapi/Binding.h>

#include <mutex>

namespace
{
    template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
    ContextHandle & context()
    {
        THREAD_LOCAL glbinding::ContextHandle t_context = 0;

        return t_context;
    }

    template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
    int & pos()
    {
        THREAD_LOCAL int t_pos = -1;

        return t_pos;
    }

    template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
    std::recursive_mutex & mutex()
    {
        static std::recursive_mutex g_mutex;

        return g_mutex;
    }

    template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
    std::unordered_map<ContextHandle, int> & bindings()
    {
        static std::unordered_map<ContextHandle, int> g_bindings;

        return g_bindings;
    }
}

namespace khrapi
{

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
int Binding<ContextHandle, FunctionCount, ProcAddress>::s_maxpos = -1;

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
std::vector<khrapi::AbstractFunction *> Binding<ContextHandle, FunctionCount, ProcAddress>::s_additionalFunctions;

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
std::vector<Binding<ContextHandle, FunctionCount, ProcAddress>::ContextSwitchCallback> Binding<ContextHandle, FunctionCount, ProcAddress>::s_callbacks;

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
khrapi::ProcAddress Binding<ContextHandle, FunctionCount, ProcAddress>::getProcAddress(const char * name)
{
    return ProcAddress(name);
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
const Binding<ContextHandle, FunctionCount, ProcAddress>::array_t & Binding<ContextHandle, FunctionCount, ProcAddress>::functions()
{
    return s_functions;
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
int Binding<ContextHandle, FunctionCount, ProcAddress>::currentPos()
{
    return pos();
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
const std::vector<khrapi::AbstractFunction *> & Binding<ContextHandle, FunctionCount, ProcAddress>::additionalFunctions()
{
    return s_additionalFunctions;
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
size_t Binding<ContextHandle, FunctionCount, ProcAddress>::size()
{
    return s_functions.size() + s_additionalFunctions.size();
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
void Binding<ContextHandle, FunctionCount, ProcAddress>::initialize(const bool resolveFunctions)
{
    initialize(getCurrentContext(), true, resolveFunctions);
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
void Binding<ContextHandle, FunctionCount, ProcAddress>::initialize(
    const ContextHandle context
,   const bool _useContext
,   const bool _resolveFunctions)
{
    mutex().lock();
    if (bindings().find(context) != bindings().end())
    {
        mutex().unlock();
        return;
    }
    mutex().unlock();

    const int pos = static_cast<int>(bindings().size());

    mutex().lock();
    bindings()[context] = pos;
    mutex().unlock();

    mutex().lock();
    provideState(pos);
    mutex().unlock();

    if (_useContext)
    {
        useContext(context);
    }

    if (_resolveFunctions)
    {
        resolveFunctions();
    }
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
void Binding<ContextHandle, FunctionCount, ProcAddress>::registerAdditionalFunction(khrapi::AbstractFunction * function)
{
    s_additionalFunctions.push_back(function);
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
void Binding<ContextHandle, FunctionCount, ProcAddress>::resolveFunctions()
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

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
void Binding<ContextHandle, FunctionCount, ProcAddress>::useCurrentContext()
{
    useContext(getCurrentContext());
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
void Binding<ContextHandle, FunctionCount, ProcAddress>::useContext(const ContextHandle c)
{
    context() = t;

    mutex().lock();
    if (bindings().find(context()) == bindings().end())
    {
        mutex().unlock();

        initialize(context());

        return;
    }
    else
    {
        mutex().unlock();
    }

    mutex().lock();
    setStatePos(bindings()[context()]);
    mutex().unlock();

    mutex().lock();
    for (const auto & callback : s_callbacks)
    {
        callback(context());
    }
    mutex().unlock();
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
void Binding<ContextHandle, FunctionCount, ProcAddress>::releaseCurrentContext()
{
    releaseContext(getCurrentContext());
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
void Binding<ContextHandle, FunctionCount, ProcAddress>::releaseContext(const ContextHandle context)
{
    mutex().lock();
    neglectState(bindings()[context]);
    mutex().unlock();

    mutex().lock();
    bindings().erase(context);
    mutex().unlock();
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
void Binding<ContextHandle, FunctionCount, ProcAddress>::addContextSwitchCallback(ContextSwitchCallback callback)
{
    mutex().lock();
    s_callbacks.push_back(std::move(callback));
    mutex().unlock();
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
void Binding<ContextHandle, FunctionCount, ProcAddress>::provideState(const int pos)
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

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
void Binding<ContextHandle, FunctionCount, ProcAddress>::neglectState(const int p)
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

    if (p == pos())
    {
        pos() = -1;
    }
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
void Binding<ContextHandle, FunctionCount, ProcAddress>::setStatePos(const int p)
{
    pos() = p;
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
void Binding<ContextHandle, FunctionCount, ProcAddress>::setCallbackMask(const khrapi::CallbackMask mask)
{
    for (khrapi::AbstractFunction * function : functions())
    {
        function->setCallbackMask(mask);
    }
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
void Binding<ContextHandle, FunctionCount, ProcAddress>::setCallbackMaskExcept(const khrapi::CallbackMask mask, const std::set<std::string> & blackList)
{
    for (khrapi::AbstractFunction * function : functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->setCallbackMask(mask);
        }
    }
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
void Binding<ContextHandle, FunctionCount, ProcAddress>::addCallbackMask(const khrapi::CallbackMask mask)
{
    for (khrapi::AbstractFunction * function : functions())
    {
        function->addCallbackMask(mask);
    }
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
void Binding<ContextHandle, FunctionCount, ProcAddress>::addCallbackMaskExcept(const khrapi::CallbackMask mask, const std::set<std::string> & blackList)
{
    for (khrapi::AbstractFunction * function : functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->addCallbackMask(mask);
        }
    }
}

template <typename ContextHandle, size_t FunctionCount, khrapi::ProcAddress (* ProcAddress)(const char *)>
void Binding<ContextHandle, FunctionCount, ProcAddress>::removeCallbackMask(const khrapi::CallbackMask mask)
{
    for (khrapi::AbstractFunction * function : functions())
    {
        function->removeCallbackMask(mask);
    }
}

} // namespace khrapi
