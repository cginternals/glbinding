
#include <glbinding/FunctionCall.h>

#include <array>
#include <chrono>
#include <sstream>
#include <iomanip>

#include <glbinding/AbstractFunction.h>
#include <glbinding/AbstractValue.h>


namespace glbinding
{


FunctionCall::FunctionCall(const AbstractFunction * _function)
: function(_function)
, timestamp(std::chrono::system_clock::now())
, returnValue(nullptr)
{
}

FunctionCall::FunctionCall(FunctionCall && other)
: function(std::move(other.function))
, parameters(std::move(other.parameters))
, returnValue(std::move(other.returnValue))
{
}

FunctionCall::~FunctionCall()
{
    delete returnValue;

    for (auto value : parameters)
    {
        delete value;
    }
}

std::string FunctionCall::toString() const
{
    using microseconds = std::chrono::microseconds;
    using milliseconds = std::chrono::milliseconds;

    const auto now_micros = std::chrono::duration_cast<microseconds>(timestamp.time_since_epoch());
    const auto micros = static_cast<std::size_t>(now_micros.count() % 1000);
    std::ostringstream micros_os;
    micros_os << std::setfill('0') << std::setw(3) << micros;

    const auto now_millis = std::chrono::duration_cast<milliseconds>(now_micros);
    const auto millis = static_cast<std::size_t>(now_millis.count() % 1000);
    std::ostringstream millis_os;
    millis_os << std::setfill('0') << std::setw(3) << millis;

    const auto t = std::chrono::system_clock::to_time_t(timestamp);
    std::array<char, 20> time_string;
    std::strftime(time_string.data(), time_string.size(), "%Y-%m-%d_%H-%M-%S", std::localtime(&t));

    std::ostringstream os;

    os << time_string.data() << ":" << millis_os.str() << ":" << micros_os.str() << " ";
    os << function->name() << "(";

    for (size_t i = 0; i < parameters.size(); ++i)
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

    return os.str();
}

FunctionCall & FunctionCall::operator=(FunctionCall && other)
{
    function = std::move(other.function);
    timestamp = std::move(other.timestamp);
    parameters = std::move(other.parameters);
    returnValue = std::move(other.returnValue);

    return *this;
}


} // namespace glbinding
