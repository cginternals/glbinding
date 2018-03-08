
#include <glesbinding/callbacks.h>

#include <glesbinding/Binding.h>


namespace
{

glesbinding::SimpleFunctionCallback g_unresolvedCallback;
glesbinding::FunctionCallback g_beforeCallback;
glesbinding::FunctionCallback g_afterCallback;

} // namespace


namespace glesbinding
{


void setCallbackMask(const CallbackMask mask)
{
    for (auto function : Binding::functions())
    {
        function->setCallbackMask(mask);
    }
}

void setCallbackMaskExcept(const CallbackMask mask, const std::set<std::string> & blackList)
{
    for (auto function : Binding::functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->setCallbackMask(mask);
        }
    }
}

void addCallbackMask(const CallbackMask mask)
{
    for (auto function : Binding::functions())
    {
        function->addCallbackMask(mask);
    }
}

void addCallbackMaskExcept(const CallbackMask mask, const std::set<std::string> & blackList)
{
    for (auto function : Binding::functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->addCallbackMask(mask);
        }
    }
}

void removeCallbackMask(const CallbackMask mask)
{
    for (auto function : Binding::functions())
    {
        function->removeCallbackMask(mask);
    }
}

void removeCallbackMaskExcept(const CallbackMask mask, const std::set<std::string> & blackList)
{
    for (auto function : Binding::functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->removeCallbackMask(mask);
        }
    }
}

SimpleFunctionCallback unresolvedCallback()
{
    return g_unresolvedCallback;
}

void setUnresolvedCallback(SimpleFunctionCallback callback)
{
    g_unresolvedCallback = std::move(callback);
}

FunctionCallback beforeCallback()
{
    return g_beforeCallback;
}

void setBeforeCallback(FunctionCallback callback)
{
    g_beforeCallback = std::move(callback);
}

FunctionCallback afterCallback()
{
    return g_afterCallback;
}

void setAfterCallback(FunctionCallback callback)
{
    g_afterCallback = std::move(callback);
}

void unresolved(const AbstractFunction * function)
{
    if (g_unresolvedCallback)
    {
        g_unresolvedCallback(*function);
    }
}

void before(const FunctionCall & call)
{
    if (g_beforeCallback)
    {
        g_beforeCallback(call);
    }
}

void after(const FunctionCall & call)
{
    if (g_afterCallback)
    {
        g_afterCallback(call);
    }
}


} // namespace glesbinding
