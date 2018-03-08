
#include <glscbinding/glsc/types.h>

#include <glscbinding/Meta.h>

#include <bitset>
#include <sstream>


template <typename T>
std::string bitfieldString(T value)
{
    std::bitset<sizeof(glsc::GLbitfield) * 8> bits(static_cast<glsc::GLbitfield>(value));

    std::stringstream ss;
    bool first = true;

    for (size_t i = 0; i < sizeof(glsc::GLbitfield) * 8; ++i)
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

    const glsc::GLbitfield bit = 1 << i;

    const auto identifier = glscbinding::Meta::getString(static_cast<T>(bit));
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

namespace glsc
{


std::ostream & operator<<(std::ostream & stream, const GLextension & value)
{
    stream << glscbinding::Meta::getString(value);
    return stream;
}


} // namespace glsc


namespace glsc
{


std::ostream & operator<<(std::ostream & stream, const GLenum & value)
{
    stream << glscbinding::Meta::getString(value);
    return stream;
}


} // namespace glsc






namespace glsc
{


std::ostream & operator<<(std::ostream & stream, const GLboolean & value)
{
    stream << glscbinding::Meta::getString(value);
    return stream;
}


} // namespace glsc


namespace glsc
{


std::ostream & operator<<(std::ostream & stream, const AttribMask & value)
{
    stream << bitfieldString<AttribMask>(value);
    return stream;
}


} // namespace glsc




namespace glsc
{


std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value)
{
    stream << bitfieldString<ClearBufferMask>(value);
    return stream;
}


} // namespace glsc




