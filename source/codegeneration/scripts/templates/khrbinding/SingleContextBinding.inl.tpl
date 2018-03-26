
#include <{{binding}}/SingleContextBinding.h>

#include <cassert>
#include <iostream>

#include <{{binding}}/State.h>
#include <{{binding}}/AbstractFunction.h>


namespace {{binding}}
{


template <typename Subclass>
void SingleContextBinding<Subclass>::setCallbackMask(const CallbackMask mask)
{
    for (auto function : Subclass::functions())
    {
        function->setCallbackMask(mask);
    }
}

template <typename Subclass>
void SingleContextBinding<Subclass>::setCallbackMaskExcept(const CallbackMask mask, const std::set<std::string> & blackList)
{
    for (auto function : Subclass::functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->setCallbackMask(mask);
        }
    }
}

template <typename Subclass>
void SingleContextBinding<Subclass>::addCallbackMask(const CallbackMask mask)
{
    for (auto function : Subclass::functions())
    {
        function->addCallbackMask(mask);
    }
}

template <typename Subclass>
void SingleContextBinding<Subclass>::addCallbackMaskExcept(const CallbackMask mask, const std::set<std::string> & blackList)
{
    for (auto function : Subclass::functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->addCallbackMask(mask);
        }
    }
}

template <typename Subclass>
void SingleContextBinding<Subclass>::removeCallbackMask(const CallbackMask mask)
{
    for (auto function : Subclass::functions())
    {
        function->removeCallbackMask(mask);
    }
}

template <typename Subclass>
void SingleContextBinding<Subclass>::removeCallbackMaskExcept(const CallbackMask mask, const std::set<std::string> & blackList)
{
    for (auto function : Subclass::functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->removeCallbackMask(mask);
        }
    }
}

template <typename Subclass>
typename SingleContextBinding<Subclass>::SimpleFunctionCallback SingleContextBinding<Subclass>::unresolvedCallback()
{
    return s_unresolvedCallback();
}

template <typename Subclass>
void SingleContextBinding<Subclass>::setUnresolvedCallback(SimpleFunctionCallback callback)
{
    s_unresolvedCallback() = std::move(callback);
}

template <typename Subclass>
typename SingleContextBinding<Subclass>::FunctionCallback SingleContextBinding<Subclass>::beforeCallback()
{
    return s_beforeCallback();
}

template <typename Subclass>
void SingleContextBinding<Subclass>::setBeforeCallback(FunctionCallback callback)
{
    s_beforeCallback() = std::move(callback);
}

template <typename Subclass>
typename SingleContextBinding<Subclass>::FunctionCallback SingleContextBinding<Subclass>::afterCallback()
{
    return s_afterCallback();
}

template <typename Subclass>
void SingleContextBinding<Subclass>::setAfterCallback(FunctionCallback callback)
{
    s_afterCallback() = std::move(callback);
}

template <typename Subclass>
typename SingleContextBinding<Subclass>::FunctionLogCallback SingleContextBinding<Subclass>::logCallback()
{
    return s_logCallback();
}

template <typename Subclass>
void SingleContextBinding<Subclass>::setLogCallback(SingleContextBinding<Subclass>::FunctionLogCallback callback)
{
    s_logCallback() = std::move(callback);
}

template <typename Subclass>
void SingleContextBinding<Subclass>::unresolved(const AbstractFunction * function)
{
    if (s_unresolvedCallback())
    {
        s_unresolvedCallback()(*function);
    }
}

template <typename Subclass>
void SingleContextBinding<Subclass>::before(const FunctionCall & call)
{
    if (s_beforeCallback())
    {
        s_beforeCallback()(call);
    }
}

template <typename Subclass>
void SingleContextBinding<Subclass>::after(const FunctionCall & call)
{
    if (s_afterCallback())
    {
        s_afterCallback()(call);
    }
}

template <typename Subclass>
void SingleContextBinding<Subclass>::log(FunctionCall && call)
{
    if (s_logCallback())
    {
        s_logCallback()(new FunctionCall(std::move(call)));
    }
}

template <typename Subclass>
const std::vector<AbstractFunction *> & SingleContextBinding<Subclass>::additionalFunctions()
{
    return s_additionalFunctions();
}

template <typename Subclass>
size_t SingleContextBinding<Subclass>::size()
{
    return Subclass::functions().size() + s_additionalFunctions().size();
}

template <typename Subclass>
void SingleContextBinding<Subclass>::initialize(const GetProcAddress functionPointerResolver, const bool _resolveFunctions)
{
    std_boost::lock_guard<std_boost::recursive_mutex> lock(s_mutex());

    s_getProcAddress() = functionPointerResolver;

    for (AbstractFunction * function : Subclass::functions())
    {
        function->resizeStates(1);
    }

    for (AbstractFunction * function : Subclass::additionalFunctions())
    {
        function->resizeStates(1);
    }

    if (_resolveFunctions)
    {
        resolveFunctions();
    }
}

template <typename Subclass>
ProcAddress SingleContextBinding<Subclass>::resolveFunction(const char * name)
{
    if (s_getProcAddress() != nullptr)
    {
        return s_getProcAddress()(name);
    }

    return nullptr;
}

template <typename Subclass>
void SingleContextBinding<Subclass>::registerAdditionalFunction(AbstractFunction * function)
{
    s_additionalFunctions().push_back(function);
}

template <typename Subclass>
void SingleContextBinding<Subclass>::resolveFunctions()
{
    for (auto function : Subclass::functions())
    {
        function->resolveAddress();
    }

    for (auto function : Subclass::additionalFunctions())
    {
        function->resolveAddress();
    }
}

template <typename Subclass>
std::vector<AbstractFunction *> & SingleContextBinding<Subclass>::s_additionalFunctions()
{
    static std::vector<AbstractFunction *> additionalFunctions;

    return additionalFunctions;
}

template <typename Subclass>
typename SingleContextBinding<Subclass>::SimpleFunctionCallback & SingleContextBinding<Subclass>::s_unresolvedCallback()
{
    static SimpleFunctionCallback unresolvedCallback;

    return unresolvedCallback;
}

template <typename Subclass>
typename SingleContextBinding<Subclass>::FunctionCallback & SingleContextBinding<Subclass>::s_beforeCallback()
{
    static FunctionCallback beforeCallback;

    return beforeCallback;
}

template <typename Subclass>
typename SingleContextBinding<Subclass>::FunctionCallback & SingleContextBinding<Subclass>::s_afterCallback()
{
    static FunctionCallback afterCallback;

    return afterCallback;
}

template <typename Subclass>
typename SingleContextBinding<Subclass>::FunctionLogCallback & SingleContextBinding<Subclass>::s_logCallback()
{
    static FunctionLogCallback logCallback;

    return logCallback;
}

template <typename Subclass>
GetProcAddress & SingleContextBinding<Subclass>::s_getProcAddress()
{
    static GetProcAddress getProcAddress = nullptr;

    return getProcAddress;
}

template <typename Subclass>
std_boost::recursive_mutex & SingleContextBinding<Subclass>::s_mutex()
{
    static std_boost::recursive_mutex mutex;

    return mutex;
}

template <typename Subclass>
int SingleContextBinding<Subclass>::currentPos()
{
    return 0;
}

template <typename Subclass>
int SingleContextBinding<Subclass>::maxPos()
{
    return 0;
}


} // namespace {{binding}}
