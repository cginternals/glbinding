
#include <glbinding/callbacks.h>

#include <sstream>
#include <iomanip>
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
: function{_function}
, timestamp{std::chrono::system_clock::now()}
, returnValue{nullptr}
{
}

FunctionCall::FunctionCall(FunctionCall && other)
    : function{std::move(other.function)}
    , parameters(std::move(other.parameters))
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

CallbackMask operator~(CallbackMask a)
{
    using callback_mask_t = std::underlying_type<CallbackMask>::type;
    return static_cast<CallbackMask>(~static_cast<callback_mask_t>(a));
}

CallbackMask operator&(CallbackMask a, CallbackMask b)
{
    using callback_mask_t = std::underlying_type<CallbackMask>::type;
    return static_cast<CallbackMask>(static_cast<callback_mask_t>(a) & static_cast<callback_mask_t>(b));
}

CallbackMask& operator|=(CallbackMask& a, CallbackMask b)
{
    a = a | b;
    return a;
}

CallbackMask& operator&=(CallbackMask& a, CallbackMask b)
{
    a = a & b;
    return a;
}

std::string FunctionCall::toString() const
{   
    using nanoseconds = std::chrono::nanoseconds;
    nanoseconds now_ns = std::chrono::duration_cast<nanoseconds>(timestamp.time_since_epoch());
    std::size_t ns = now_ns.count() % 1000;
    std::ostringstream ns_os;
    ns_os << std::setfill('0') << std::setw(3) << ns;

    using milliseconds = std::chrono::milliseconds;
    milliseconds now_ms = std::chrono::duration_cast<milliseconds>(now_ns);
    std::size_t ms = now_ms.count() % 1000;
    std::ostringstream ms_os;
    ms_os << std::setfill('0') << std::setw(3) << ms;

    auto t = std::chrono::system_clock::to_time_t(timestamp);
    char time_string[20];
    std::strftime(time_string, sizeof(time_string), "%Y-%m-%d_%H-%M-%S", std::localtime(&t));  

    std::ostringstream os;

    os << time_string << ":" << ms_os.str() << ":" << ns_os.str() << " ";
    os << function->name() << "(";

    for (unsigned i = 0; i < parameters.size(); ++i)
    {
        os << parameters[i]->asString();
        if (i < parameters.size() - 1)
            os << ", ";
    }

    os << ")";

    if (returnValue)
    {
        os << " -> " << returnValue->asString();
    }

    os << std::endl;
    std::string input = os.str();
    return input;
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

void addCallbackMask(const CallbackMask mask)
{
    for (AbstractFunction * function : Binding::functions())
    {
        function->addCallbackMask(mask);
    }
}

void removeCallbackMask(const CallbackMask mask)
{
    for (AbstractFunction * function : Binding::functions())
    {
        function->removeCallbackMask(mask);
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
