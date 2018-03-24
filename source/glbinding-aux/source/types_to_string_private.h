
#pragma once


#include <ostream>
#include <bitset>
#include <sstream>

#include <glbinding-aux/Meta.h>


namespace glbinding { namespace aux
{


template <typename T>
std::string bitfieldString(T value)
{
    std::bitset<sizeof(gl::GLbitfield) * 8> bits(static_cast<gl::GLbitfield>(value));

    std::stringstream ss;
    bool first = true;

    for (size_t i = 0; i < sizeof(gl::GLbitfield) * 8; ++i)
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

    const gl::GLbitfield bit = 1 << i;

    const auto identifier = glbinding::aux::Meta::getString(static_cast<T>(bit));
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

std::string wrapString(const char * value);


} } // namespace glbinding::aux
