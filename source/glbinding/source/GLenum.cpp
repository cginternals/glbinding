#include <glbinding/GLenum.h>

#include <glbinding/meta.h>

namespace gl {

GLenum::GLenum()
: value(0)
{
}

GLenum::GLenum(unsigned int _value)
: value(_value)
{
}

GLenum::operator unsigned int() const
{
    return value;
}

GLenum & GLenum::operator=(unsigned int _value)
{
    value = _value;
    return *this;
}

std::string GLenum::toString() const
{
    return meta::getName(*this);
}

} // namespace gl
