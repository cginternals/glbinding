
#include <glxbinding/glx/types.h>

#include <glxbinding/Meta.h>

#include <bitset>
#include <sstream>


template <typename T>
std::string bitfieldString(T value)
{
    std::bitset<sizeof(glx::GLbitfield) * 8> bits(static_cast<glx::GLbitfield>(value));

    std::stringstream ss;
    bool first = true;

    for (size_t i = 0; i < sizeof(glx::GLbitfield) * 8; ++i)
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

    const glx::GLbitfield bit = 1 << i;

    const auto identifier = glxbinding::Meta::getString(static_cast<T>(bit));
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

namespace glx
{


std::ostream & operator<<(std::ostream & stream, const GLextension & value)
{
    stream << glxbinding::Meta::getString(value);
    return stream;
}


} // namespace glx


