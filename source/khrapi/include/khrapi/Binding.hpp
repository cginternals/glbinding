#pragma once

#include <khrapi/Binding.h>

namespace khrapi
{

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
int Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::s_maxpos = -1;

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
std::vector<khrapi::AbstractFunction *> Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::s_additionalFunctions;

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
std::vector<typename Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::ContextSwitchCallback> Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::s_callbacks;

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
khrapi::ProcAddress Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::getProcAddress(const char * name)
{
    return ProcAddress(name);
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
int Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::currentPos()
{
    return ConcreteBinding::pos();
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
const std::vector<khrapi::AbstractFunction *> & Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::additionalFunctions()
{
    return s_additionalFunctions;
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
size_t Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::size()
{
    return ConcreteBinding::s_functions.size();// + s_additionalFunctions.size();
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::initialize(const bool resolveFunctions)
{
    initialize(GetCurrentContext(), true, resolveFunctions);
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::initialize(
    const ContextHandle context
,   const bool _useContext
,   const bool _resolveFunctions)
{
    ConcreteBinding::mutex().lock();
    if (ConcreteBinding::bindings().find(context) != ConcreteBinding::bindings().end())
    {
        ConcreteBinding::mutex().unlock();
        return;
    }
    ConcreteBinding::mutex().unlock();

    const int pos = static_cast<int>(ConcreteBinding::bindings().size());

    ConcreteBinding::mutex().lock();
    ConcreteBinding::bindings()[context] = pos;
    ConcreteBinding::mutex().unlock();

    ConcreteBinding::mutex().lock();
    provideState(pos);
    ConcreteBinding::mutex().unlock();

    if (_useContext)
    {
        useContext(context);
    }

    if (_resolveFunctions)
    {
        resolveFunctions();
    }
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::registerAdditionalFunction(khrapi::AbstractFunction * function)
{
    s_additionalFunctions.push_back(function);
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::resolveFunctions()
{
    for (auto function : ConcreteBinding::functions())
    {
        function->resolveAddress();
    }

    for (khrapi::AbstractFunction * function : additionalFunctions())
    {
        function->resolveAddress();
    }
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::useCurrentContext()
{
    useContext(GetCurrentContext());
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::useContext(const ContextHandle c)
{
    ConcreteBinding::context() = c;

    ConcreteBinding::mutex().lock();
    if (ConcreteBinding::bindings().find(ConcreteBinding::context()) == ConcreteBinding::bindings().end())
    {
        ConcreteBinding::mutex().unlock();

        initialize(ConcreteBinding::context());

        return;
    }
    else
    {
        ConcreteBinding::mutex().unlock();
    }

    ConcreteBinding::mutex().lock();
    setStatePos(ConcreteBinding::bindings()[ConcreteBinding::context()]);
    ConcreteBinding::mutex().unlock();

    ConcreteBinding::mutex().lock();
    for (const auto & callback : s_callbacks)
    {
        callback(ConcreteBinding::context());
    }
    ConcreteBinding::mutex().unlock();
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::releaseCurrentContext()
{
    releaseContext(GetCurrentContext());
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::releaseContext(const ContextHandle context)
{
    ConcreteBinding::mutex().lock();
    neglectState(ConcreteBinding::bindings()[context]);
    ConcreteBinding::mutex().unlock();

    ConcreteBinding::mutex().lock();
    ConcreteBinding::bindings().erase(context);
    ConcreteBinding::mutex().unlock();
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::addContextSwitchCallback(ContextSwitchCallback callback)
{
    ConcreteBinding::mutex().lock();
    s_callbacks.push_back(std::move(callback));
    ConcreteBinding::mutex().unlock();
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::provideState(const int pos)
{
    assert(pos > -1);

    // if a state at pos exists, it is assumed to be neglected before
    if (s_maxpos < pos)
    {
        for (khrapi::AbstractFunction * function : ConcreteBinding::functions())
        {
            function->resizeStates(pos + 1);
        }

        s_maxpos = pos;
    }
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::neglectState(const int p)
{
    assert(p <= s_maxpos);
    assert(p > -1);

    if (p == s_maxpos)
    {
        for (khrapi::AbstractFunction * function : ConcreteBinding::functions())
        {
            function->resizeStates(std::max(0, p - 1));
        }

        --s_maxpos;
    }
    else
    {
        for (khrapi::AbstractFunction * function : ConcreteBinding::functions())
        {
            function->state(p) = khrapi::State<Binding>();
        }
    }

    if (p == ConcreteBinding::pos())
    {
        ConcreteBinding::pos() = -1;
    }
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::setStatePos(const int p)
{
    ConcreteBinding::pos() = p;
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::setCallbackMask(const khrapi::CallbackMask mask)
{
    for (khrapi::AbstractFunction * function : ConcreteBinding::functions())
    {
        function->setCallbackMask(mask);
    }
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::setCallbackMaskExcept(const khrapi::CallbackMask mask, const std::set<std::string> & blackList)
{
    for (khrapi::AbstractFunction * function : ConcreteBinding::functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->setCallbackMask(mask);
        }
    }
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::addCallbackMask(const khrapi::CallbackMask mask)
{
    for (khrapi::AbstractFunction * function : ConcreteBinding::functions())
    {
        function->addCallbackMask(mask);
    }
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::addCallbackMaskExcept(const khrapi::CallbackMask mask, const std::set<std::string> & blackList)
{
    for (khrapi::AbstractFunction * function : ConcreteBinding::functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->addCallbackMask(mask);
        }
    }
}

template <typename ConcreteBinding, typename ContextHandle, khrapi::ProcAddress (* ProcAddress)(const char *), long long (* GetCurrentContext)()>
void Binding<ConcreteBinding, ContextHandle, ProcAddress, GetCurrentContext>::removeCallbackMask(const khrapi::CallbackMask mask)
{
    for (khrapi::AbstractFunction * function : ConcreteBinding::functions())
    {
        function->removeCallbackMask(mask);
    }
}

} // namespace khrapi
