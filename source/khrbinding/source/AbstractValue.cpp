
#include <khrbinding/AbstractValue.h>

#include <sstream>


namespace khrbinding
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


} // namespace khrbinding
