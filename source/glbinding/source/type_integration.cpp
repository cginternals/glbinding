#include <glbinding/type_integration.h>

#include <glbinding/meta.h>

bool operator==(const gl::GLenum & a, unsigned int b)
{
    return static_cast<unsigned int>(a) == b;
}

bool operator!=(const gl::GLenum & a, unsigned int b)
{
    return static_cast<unsigned int>(a) != b;
}

bool operator<(const gl::GLenum & a, unsigned int b)
{
    return static_cast<unsigned int>(a) < b;
}

bool operator<=(const gl::GLenum & a, unsigned int b)
{
    return static_cast<unsigned int>(a) <= b;
}

bool operator>(const gl::GLenum & a, unsigned int b)
{
    return static_cast<unsigned int>(a) > b;
}

bool operator>=(const gl::GLenum & a, unsigned int b)
{
    return static_cast<unsigned int>(a) >= b;
}

bool operator==(unsigned int a, const gl::GLenum & b)
{
    return a == static_cast<unsigned int>(b);
}

bool operator!=(unsigned int a, const gl::GLenum & b)
{
    return a != static_cast<unsigned int>(b);
}

bool operator<(unsigned int a, const gl::GLenum & b)
{
    return a < static_cast<unsigned int>(b);
}

bool operator<=(unsigned int a, const gl::GLenum & b)
{
    return a <= static_cast<unsigned int>(b);
}

bool operator>(unsigned int a, const gl::GLenum & b)
{
    return a > static_cast<unsigned int>(b);
}

bool operator>=(unsigned int a, const gl::GLenum & b)
{
    return a >= static_cast<unsigned int>(b);
}

gl::GLenum operator+(const gl::GLenum & a, unsigned int b)
{
    return static_cast<gl::GLenum>(static_cast<unsigned int>(a) + b);
}

gl::GLenum operator-(const gl::GLenum & a, unsigned int b)
{
    return static_cast<gl::GLenum>(static_cast<unsigned int>(a) - b);
}

std::ostream & operator<<(std::ostream & stream, const gl::GLenum & value)
{
    stream << gl::meta::getName(value);
    return stream;
}
