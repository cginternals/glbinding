#pragma once

#include <string>
#include <functional>

namespace gl {

struct GLenum
{
    GLenum();
    GLenum(unsigned int value);

    operator unsigned int() const;

    GLenum & operator=(unsigned int value);

    std::string toString() const;

    unsigned int value;
};

} // namespace gl

namespace std {

template<>
struct hash<gl::GLenum>
{
    hash<unsigned int>::result_type operator()(const gl::GLenum & e) const
    {
        return hash<unsigned int>()(static_cast<unsigned int>(e));
    }
};

}

