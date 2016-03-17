
#include <glbinding/AbstractValue.h>

#include <sstream>


namespace glbinding
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


} // namespace glbinding
