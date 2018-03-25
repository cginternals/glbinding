
#pragma once


#include <ostream>
#include <bitset>
#include <sstream>

#include <glesbinding-aux/Meta.h>


namespace glesbinding { namespace aux
{


template <typename T>
std::string bitfieldString(T value)
{
    std::bitset<sizeof(gles::GLbitfield) * 8> bits(static_cast<gles::GLbitfield>(value));

    std::stringstream ss;
    bool first = true;

    for (size_t i = 0; i < sizeof(gles::GLbitfield) * 8; ++i)
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

    const gles::GLbitfield bit = 1 << i;

    const auto identifier = glesbinding::aux::Meta::getString(static_cast<T>(bit));
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


} } // namespace glesbinding::aux
