#pragma once

#include <khrapi/khrapi_api.h>

#include <string>
#include <iosfwd>

namespace khrapi 
{

class KHRAPI_API AbstractValue
{
public:
    AbstractValue();
    virtual ~AbstractValue();

    virtual void printOn(std::ostream & stream) const = 0;

    std::string asString() const;
};

} // namespace khrapi
