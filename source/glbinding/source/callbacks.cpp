
#include <glbinding/callbacks.h>

#include <glbinding/AbstractValue.h>
#include <glbinding/Binding.h>


namespace glbinding 
{

namespace 
{
SimpleFunctionCallback g_unresolvedCallback;
FunctionCallback g_beforeCallback;
FunctionCallback g_afterCallback;
}


FunctionCall::FunctionCall(const AbstractFunction * _function)
: function(*_function)
, returnValue(nullptr)
{
}

FunctionCall::~FunctionCall()
{
    delete returnValue;
    for (AbstractValue * value : parameters)
        delete value;
}


CallbackMask operator|(CallbackMask a, CallbackMask b)
{
    return static_cast<CallbackMask>(static_cast<unsigned>(a) | static_cast<unsigned>(b));
}

void setCallbackMask(CallbackMask mask)
{
    for (AbstractFunction * function : Binding::functions())
        function->setCallbackMask(mask);
}

void setCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList)
{
    for (AbstractFunction * function : Binding::functions())
        if (blackList.find(function->name()) == blackList.end())
            function->setCallbackMask(mask);
}


void setUnresolvedCallback(SimpleFunctionCallback callback)
{
    g_unresolvedCallback = callback;
}

void setBeforeCallback(FunctionCallback callback)
{
    g_beforeCallback = callback;
}

void setAfterCallback(FunctionCallback callback)
{
    g_afterCallback = callback;
}

void unresolved(const AbstractFunction * function)
{
    g_unresolvedCallback(*function);
}

void before(const FunctionCall & call)
{
    g_beforeCallback(call);
}

void after(const FunctionCall & call)
{
    g_afterCallback(call);
}

} // namespace glbinding
