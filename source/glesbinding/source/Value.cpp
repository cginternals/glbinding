
#include <glesbinding/Value.h>

#include <sstream>
#include <bitset>

#include <glesbinding/Meta.h>

namespace
{

std::string wrapString(const char * value)
{
    std::stringstream ss;
    ss << "\"";
    ss << (value == nullptr ? "nullptr" : value);
    ss << "\"";
    return ss.str();
}

}

namespace khrapi
{

template <>
void Value<gles::GLenum>::printOn(std::ostream & stream) const
{
    auto name = glesbinding::Meta::getString(value);
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));
}

/*template <>
void Value<gles::GLbitfield>::printOn(std::ostream & stream) const
{
    std::stringstream ss;
    ss << "0x" << std::hex << static_cast<unsigned>(value);
    stream << ss.str();
}*/

template <>
void Value<gles::GLboolean>::printOn(std::ostream & stream) const
{
    auto name = glesbinding::Meta::getString(value);
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));
}

template <>
void Value<const gles::GLubyte *>::printOn(std::ostream & stream) const
{
    auto s = wrapString(reinterpret_cast<const char*>(value));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));
}

template <>
void Value<const gles::GLchar *>::printOn(std::ostream & stream) const
{
    auto s = wrapString(reinterpret_cast<const char*>(value));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));
}

template <>
void Value<gles::GLuint_array_2>::printOn(std::ostream & stream) const
{
    std::stringstream ss;
    ss << "{ " << value[0] << ", " << value[1] << " }";
    stream << ss.str();
}

} // namespace khrapi
