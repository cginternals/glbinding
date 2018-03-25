
#pragma once


#include <ostream>
#include <bitset>
#include <sstream>

#include <eglbinding-aux/Meta.h>


namespace eglbinding { namespace aux
{


template <typename T>
std::string bitfieldString(T value)
{
    std::bitset<sizeof(egl::EGLbitfield) * 8> bits(static_cast<int>(static_cast<egl::EGLbitfield>(value)));

    std::stringstream ss;
    bool first = true;

    for (size_t i = 0; i < sizeof(egl::EGLbitfield) * 8; ++i)
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

    const egl::EGLbitfield bit = static_cast<egl::EGLbitfield>(1 << i);

    const auto identifier = eglbinding::aux::Meta::getString(static_cast<T>(bit));
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


} } // namespace eglbinding::aux
