
#include <glbinding/glbinding.h>

#include <glbinding/AbstractFunction.h>
#include <glbinding/Binding.h>
#include <glbinding/FunctionCall.h>


namespace glbinding
{


void initialize(glbinding::GetProcAddress functionPointerResolver, bool resolveFunctions) GLBINDING_NOEXCEPT
{
    Binding::initialize(functionPointerResolver, resolveFunctions);
}

void initialize(ContextHandle context, glbinding::GetProcAddress functionPointerResolver, bool useContext, bool resolveFunctions) GLBINDING_NOEXCEPT
{
    Binding::initialize(context, functionPointerResolver, useContext, resolveFunctions);
}

void useCurrentContext() GLBINDING_NOEXCEPT
{
    Binding::useCurrentContext();
}

void useContext(ContextHandle context) GLBINDING_NOEXCEPT
{
    Binding::useContext(context);
}

void releaseCurrentContext() GLBINDING_NOEXCEPT
{
    Binding::releaseCurrentContext();
}

void releaseContext(ContextHandle context) GLBINDING_NOEXCEPT
{
    Binding::releaseContext(context);
}

void registerAdditionalFunction(AbstractFunction * function) GLBINDING_NOEXCEPT
{
    Binding::registerAdditionalFunction(function);
}

ProcAddress resolveFunction(const char * name) GLBINDING_NOEXCEPT
{
    return Binding::resolveFunction(name);
}

void resolveFunctions() GLBINDING_NOEXCEPT
{
    Binding::resolveFunctions();
}

void addContextSwitchCallback(ContextSwitchCallback callback) GLBINDING_NOEXCEPT
{
    Binding::addContextSwitchCallback(callback);
}

void setCallbackMask(CallbackMask mask) GLBINDING_NOEXCEPT
{
    Binding::setCallbackMask(mask);
}

void setCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList) GLBINDING_NOEXCEPT
{
    Binding::setCallbackMaskExcept(mask, blackList);
}

void addCallbackMask(CallbackMask mask) GLBINDING_NOEXCEPT
{
    Binding::addCallbackMask(mask);
}

void addCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList) GLBINDING_NOEXCEPT
{
    Binding::addCallbackMaskExcept(mask, blackList);
}

void removeCallbackMask(CallbackMask mask) GLBINDING_NOEXCEPT
{
    Binding::removeCallbackMask(mask);
}

void removeCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList) GLBINDING_NOEXCEPT
{
    Binding::removeCallbackMaskExcept(mask, blackList);
}

SimpleFunctionCallback unresolvedCallback() GLBINDING_NOEXCEPT
{
    return Binding::unresolvedCallback();
}

void setUnresolvedCallback(SimpleFunctionCallback callback) GLBINDING_NOEXCEPT
{
    Binding::setUnresolvedCallback(callback);
}

FunctionCallback beforeCallback() GLBINDING_NOEXCEPT
{
    return Binding::beforeCallback();
}

void setBeforeCallback(FunctionCallback callback) GLBINDING_NOEXCEPT
{
    Binding::setBeforeCallback(callback);
}

FunctionCallback afterCallback() GLBINDING_NOEXCEPT
{
    return Binding::afterCallback();
}

void setAfterCallback(FunctionCallback callback) GLBINDING_NOEXCEPT
{
    Binding::setAfterCallback(callback);
}

FunctionLogCallback logCallback() GLBINDING_NOEXCEPT
{
    return Binding::logCallback();
}

void setLogCallback(FunctionLogCallback callback) GLBINDING_NOEXCEPT
{
    Binding::setLogCallback(callback);
}


} // namespace glbinding