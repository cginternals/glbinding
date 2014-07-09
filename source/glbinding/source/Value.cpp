
#include <glbinding/Value.h>

#include <sstream>

#include <glbinding/Meta.h>

namespace 
{

std::string wrapString(const char * value)
{
    std::stringstream ss;
    ss << "\"";
    ss << value;
    ss << "\"";
    return ss.str();
}

}

namespace gl 
{

template <>
void Value<GLenum>::printOn(std::ostream & stream) const
{
    std::string name = Meta::getString(value);
    stream.write(name.c_str(), name.size());
}

template <>
void Value<GLbitfield>::printOn(std::ostream & stream) const
{
    std::string name = Meta::getString(value);
    stream.write(name.c_str(), name.size());
}

template <>
void Value<GLboolean>::printOn(std::ostream & stream) const
{
    std::string name = Meta::getString(value);
    stream.write(name.c_str(), name.size());
}

template <>
void Value<const GLubyte *>::printOn(std::ostream & stream) const
{
    std::string s = wrapString(reinterpret_cast<const char*>(value));
    stream.write(s.c_str(), s.size());
}

template <>
void Value<const GLchar *>::printOn(std::ostream & stream) const
{
    std::string s = wrapString(reinterpret_cast<const char*>(value));
    stream.write(s.c_str(), s.size());
}

} // namespace gl
