
#include <glesbinding/AbstractValue.h>

#include <sstream>


namespace glesbinding
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


} // namespace glesbinding
