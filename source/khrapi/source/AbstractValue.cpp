
#include <khrapi/AbstractValue.h>

#include <sstream>
#include <iostream>


namespace khrapi
{

AbstractValue::AbstractValue()
{
}

AbstractValue::~AbstractValue()
{
}

std::string AbstractValue::asString() const
{
    std::stringstream ss;
    printOn(ss);
    return ss.str();
}

} // namespace khrapi
