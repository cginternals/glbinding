
#include <glbinding/FunctionCall.h>

#include <glbinding/AbstractFunction.h>
#include <glbinding/AbstractValue.h>
#include <glbinding/CallbackMask.h>


namespace glbinding
{


FunctionCall::FunctionCall(const AbstractFunction * _function) GLBINDING_NOEXCEPT
: function(_function)
, returnValue(nullptr)
{
    if (function->isAnyEnabled(CallbackMask::Timestamp))
    {
        timestamp = std::chrono::system_clock::now();
    }
}

FunctionCall::FunctionCall(FunctionCall && other) GLBINDING_NOEXCEPT
: function(std::move(other.function))
, timestamp(std::move(other.timestamp))
, parameters(std::move(other.parameters))
, returnValue(std::move(other.returnValue))
{
}

FunctionCall::~FunctionCall() GLBINDING_NOEXCEPT
{
}

FunctionCall & FunctionCall::operator=(FunctionCall && other) GLBINDING_NOEXCEPT
{
    function = std::move(other.function);
    timestamp = std::move(other.timestamp);
    parameters = std::move(other.parameters);
    returnValue = std::move(other.returnValue);

    return *this;
}


} // namespace glbinding