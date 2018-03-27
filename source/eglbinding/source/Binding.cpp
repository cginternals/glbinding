
#include <eglbinding/Binding.h>

#include <cassert>
#include <iostream>

#include <eglbinding/State.h>
#include <eglbinding/AbstractFunction.h>


namespace eglbinding
{


void Binding::setCallbackMask(const CallbackMask mask)
{
    for (auto function : Binding::functions())
    {
        function->setCallbackMask(mask);
    }
}

void Binding::setCallbackMaskExcept(const CallbackMask mask, const std::set<std::string> & blackList)
{
    for (auto function : Binding::functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->setCallbackMask(mask);
        }
    }
}

void Binding::addCallbackMask(const CallbackMask mask)
{
    for (auto function : Binding::functions())
    {
        function->addCallbackMask(mask);
    }
}

void Binding::addCallbackMaskExcept(const CallbackMask mask, const std::set<std::string> & blackList)
{
    for (auto function : Binding::functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->addCallbackMask(mask);
        }
    }
}

void Binding::removeCallbackMask(const CallbackMask mask)
{
    for (auto function : Binding::functions())
    {
        function->removeCallbackMask(mask);
    }
}

void Binding::removeCallbackMaskExcept(const CallbackMask mask, const std::set<std::string> & blackList)
{
    for (auto function : Binding::functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->removeCallbackMask(mask);
        }
    }
}

typename Binding::SimpleFunctionCallback Binding::unresolvedCallback()
{
    return s_unresolvedCallback();
}

void Binding::setUnresolvedCallback(SimpleFunctionCallback callback)
{
    s_unresolvedCallback() = std::move(callback);
}

typename Binding::FunctionCallback Binding::beforeCallback()
{
    return s_beforeCallback();
}

void Binding::setBeforeCallback(FunctionCallback callback)
{
    s_beforeCallback() = std::move(callback);
}

typename Binding::FunctionCallback Binding::afterCallback()
{
    return s_afterCallback();
}

void Binding::setAfterCallback(FunctionCallback callback)
{
    s_afterCallback() = std::move(callback);
}

typename Binding::FunctionLogCallback Binding::logCallback()
{
    return s_logCallback();
}

void Binding::setLogCallback(Binding::FunctionLogCallback callback)
{
    s_logCallback() = std::move(callback);
}

void Binding::unresolved(const AbstractFunction * function)
{
    if (s_unresolvedCallback())
    {
        s_unresolvedCallback()(*function);
    }
}

void Binding::before(const FunctionCall & call)
{
    if (s_beforeCallback())
    {
        s_beforeCallback()(call);
    }
}

void Binding::after(const FunctionCall & call)
{
    if (s_afterCallback())
    {
        s_afterCallback()(call);
    }
}

void Binding::log(FunctionCall && call)
{
    if (s_logCallback())
    {
        s_logCallback()(new FunctionCall(std::move(call)));
    }
}

const std::vector<AbstractFunction *> & Binding::additionalFunctions()
{
    return s_additionalFunctions();
}

size_t Binding::size()
{
    return Binding::functions().size() + s_additionalFunctions().size();
}

void Binding::initialize(const eglbinding::GetProcAddress functionPointerResolver, const bool _resolveFunctions)
{
    std_boost::lock_guard<std_boost::recursive_mutex> lock(s_mutex());

    s_getProcAddress() = functionPointerResolver;

    for (AbstractFunction * function : Binding::functions())
    {
        function->resizeStates(1);
    }

    for (AbstractFunction * function : Binding::additionalFunctions())
    {
        function->resizeStates(1);
    }

    if (_resolveFunctions)
    {
        resolveFunctions();
    }
}

ProcAddress Binding::resolveFunction(const char * name)
{
    if (s_getProcAddress() != nullptr)
    {
        return s_getProcAddress()(name);
    }

    return nullptr;
}

void Binding::registerAdditionalFunction(AbstractFunction * function)
{
    s_additionalFunctions().push_back(function);
}

void Binding::resolveFunctions()
{
    for (auto function : Binding::functions())
    {
        function->resolveAddress();
    }

    for (auto function : Binding::additionalFunctions())
    {
        function->resolveAddress();
    }
}

const Binding::array_t & Binding::functions()
{
    return s_functions;
}

std::vector<AbstractFunction *> & Binding::s_additionalFunctions()
{
    static std::vector<AbstractFunction *> additionalFunctions;

    return additionalFunctions;
}

typename Binding::SimpleFunctionCallback & Binding::s_unresolvedCallback()
{
    static SimpleFunctionCallback unresolvedCallback;

    return unresolvedCallback;
}

typename Binding::FunctionCallback & Binding::s_beforeCallback()
{
    static FunctionCallback beforeCallback;

    return beforeCallback;
}

typename Binding::FunctionCallback & Binding::s_afterCallback()
{
    static FunctionCallback afterCallback;

    return afterCallback;
}

typename Binding::FunctionLogCallback & Binding::s_logCallback()
{
    static FunctionLogCallback logCallback;

    return logCallback;
}

eglbinding::GetProcAddress & Binding::s_getProcAddress()
{
    static eglbinding::GetProcAddress getProcAddress = nullptr;

    return getProcAddress;
}

std_boost::recursive_mutex & Binding::s_mutex()
{
    static std_boost::recursive_mutex mutex;

    return mutex;
}

int Binding::currentPos()
{
    return 0;
}

int Binding::maxPos()
{
    return 0;
}


} // namespace eglbinding
