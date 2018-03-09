
#include <wglbinding/wgl/types.h>

#include <wglbinding/Meta.h>

#include <bitset>
#include <sstream>


template <typename T>
std::string bitfieldString(T value)
{
    std::bitset<sizeof(wgl::GLbitfield) * 8> bits(static_cast<wgl::GLbitfield>(value));

    std::stringstream ss;
    bool first = true;

    for (size_t i = 0; i < sizeof(wgl::GLbitfield) * 8; ++i)
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

    const wgl::GLbitfield bit = 1 << i;

    const auto identifier = wglbinding::Meta::getString(static_cast<T>(bit));
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

namespace wgl
{


std::ostream & operator<<(std::ostream & stream, const GLextension & value)
{
    stream << wglbinding::Meta::getString(value);
    return stream;
}


} // namespace wgl


