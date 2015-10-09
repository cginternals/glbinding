
#include <eglbinding/Value.h>

#include <sstream>
#include <bitset>

#include <eglbinding/Meta.h>

namespace khrapi
{

template <>
void Value<egl::EGLenum>::printOn(std::ostream & stream) const
{
    auto name = eglbinding::Meta::getString(value);
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));
}

/*template <>
void Value<gl::GLbitfield>::printOn(std::ostream & stream) const
{
    std::stringstream ss;
    ss << "0x" << std::hex << static_cast<unsigned>(value);
    stream << ss.str();
}*/

template <>
void Value<egl::EGLboolean>::printOn(std::ostream & stream) const
{
    auto name = eglbinding::Meta::getString(value);
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));
}

} // namespace khrapi
