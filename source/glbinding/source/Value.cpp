#include <glbinding/Value.h>
#include <glbinding/meta.h>

namespace gl {

template <>
void Value<GLenum>::printOn(std::ostream & stream) const
{
    std::string name = meta::getName(value);
    stream.write(name.c_str(), name.size());
}

template <>
void Value<const GLubyte *>::printOn(std::ostream & stream) const
{
    std::string s = reinterpret_cast<const char*>(value);
    stream.write(s.c_str(), s.size());
}

} // namespace gl
