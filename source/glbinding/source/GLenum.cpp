#include <glbinding/GLenum.h>

#include <glbinding/meta.h>

namespace gl {

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
