#pragma once

#include <glbinding/glbinding_api.h>
#include <iostream>

namespace gl {

class GLBINDING_API AbstractValue
{
public:
    AbstractValue();
    virtual ~AbstractValue();

    virtual void printOn(std::ostream & stream) const = 0;
};

} // namespace gl
