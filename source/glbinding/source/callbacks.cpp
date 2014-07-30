#include <glbinding/callbacks.h>
#include <glbinding/AbstractValue.h>

namespace glbinding {

FunctionCall::FunctionCall(const AbstractFunction * _function)
: function(_function)
, returnValue(nullptr)
{
}

FunctionCall::~FunctionCall()
{
    delete returnValue;
    for (AbstractValue * value : parameters)
        delete value;
}

CallbackLevel operator|(CallbackLevel a, CallbackLevel b)
{
    return CallbackLevel((unsigned)a | (unsigned)b);
}

void setUnresolvedCallback(SimpleFunctionCallback callback)
{

}

void setBeforeCallback(SimpleFunctionCallback callback)
{

}

void setAfterCallback(SimpleFunctionCallback callback)
{

}

void setBeforeCallbackWithParams(FunctionCallback callback)
{

}

void setAfterCallbackWithReturnValue(FunctionCallback callback)
{

}

void setAfterCallbackWithParamsAndReturnValue(FunctionCallback callback)
{

}

void unresolved(const AbstractFunction * function)
{

}

void before(const FunctionCall & call)
{

}

void after(const FunctionCall & call)
{

}

} // namespace glbinding
