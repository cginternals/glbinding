
#include <eglbinding/egl/types.h>

#include <eglbinding/Meta.h>

#include <bitset>
#include <sstream>


template <typename T>
std::string bitfieldString(T value)
{
    std::bitset<sizeof(egl::GLbitfield) * 8> bits(static_cast<egl::GLbitfield>(value));

    std::stringstream ss;
    bool first = true;

    for (size_t i = 0; i < sizeof(egl::GLbitfield) * 8; ++i)
    {
    if (!bits.test(i))
        continue;

    if (first)
        {
            first = false;
        }
        else
        {
            ss << " | ";
        }

    const egl::GLbitfield bit = 1 << i;

    const auto identifier = eglbinding::Meta::getString(static_cast<T>(bit));
    if (identifier.empty())
    {
        ss << "1 << " << i;
    }
    else
    {
        ss << identifier;
    }
    }
    return ss.str();
}

namespace egl
{


std::ostream & operator<<(std::ostream & stream, const GLextension & value)
{
    stream << eglbinding::Meta::getString(value);
    return stream;
}


} // namespace egl


