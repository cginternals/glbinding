
#include <glbinding/callbacks.h>

#include <type_traits>

#include <glbinding/AbstractValue.h>
#include <glbinding/Binding.h>

namespace
{
    glbinding::SimpleFunctionCallback g_unresolvedCallback;
    glbinding::FunctionCallback g_beforeCallback;
    glbinding::FunctionCallback g_afterCallback;
}

namespace glbinding 
{

FunctionCall::FunctionCall(const AbstractFunction * _function)
: function(*_function)
, returnValue{nullptr}
{
}

FunctionCall::FunctionCall(FunctionCall && other)
    : function(other.function)
    , parameters{std::move(other.parameters)}
    , returnValue{std::move(other.returnValue)}
{
}

FunctionCall::~FunctionCall()
{
    delete returnValue;

    for (AbstractValue * value : parameters)
    {
        delete value;
    }
}


CallbackMask operator|(const CallbackMask a, const CallbackMask b)
{
    using callback_mask_t = std::underlying_type<CallbackMask>::type;
    return static_cast<CallbackMask>(static_cast<callback_mask_t>(a) | static_cast<callback_mask_t>(b));
}

void setCallbackMask(const CallbackMask mask)
{
    for (AbstractFunction * function : Binding::functions())
    {
        function->setCallbackMask(mask);
    }
}

void setCallbackMaskExcept(const CallbackMask mask, const std::set<std::string> & blackList)
{
    for (AbstractFunction * function : Binding::functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->setCallbackMask(mask);
        }
    }
}


void setUnresolvedCallback(SimpleFunctionCallback callback)
{
    g_unresolvedCallback = std::move(callback);
}

void setBeforeCallback(FunctionCallback callback)
{
    g_beforeCallback = std::move(callback);
}

void setAfterCallback(FunctionCallback callback)
{
    g_afterCallback = std::move(callback);
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
