
#include <glscbinding/AbstractValue.h>

#include <sstream>


namespace glscbinding
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


} // namespace glscbinding
