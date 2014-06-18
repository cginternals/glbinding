
#include <glbinding/types.h>

#include <glbinding/Meta.h>



// GLenum Type Integration

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
    stream << gl::Meta::getString(value);
    return stream;
}


// GLboolean Type Integration

bool operator==(const gl::GLboolean & a, unsigned char b)
{
    return static_cast<unsigned char>(a) == b;
}

bool operator!=(const gl::GLboolean & a, unsigned char b)
{
    return static_cast<unsigned char>(a) != b;
}

bool operator<(const gl::GLboolean & a, unsigned char b)
{
    return static_cast<unsigned char>(a) < b;
}

bool operator<=(const gl::GLboolean & a, unsigned char b)
{
    return static_cast<unsigned char>(a) <= b;
}

bool operator>(const gl::GLboolean & a, unsigned char b)
{
    return static_cast<unsigned char>(a) > b;
}

bool operator>=(const gl::GLboolean & a, unsigned char b)
{
    return static_cast<unsigned char>(a) >= b;
}

bool operator==(unsigned char a, const gl::GLboolean & b)
{
    return a == static_cast<unsigned char>(b);
}

bool operator!=(unsigned char a, const gl::GLboolean & b)
{
    return a != static_cast<unsigned char>(b);
}

bool operator<(unsigned char a, const gl::GLboolean & b)
{
    return a < static_cast<unsigned char>(b);
}

bool operator<=(unsigned char a, const gl::GLboolean & b)
{
    return a <= static_cast<unsigned char>(b);
}

bool operator>(unsigned char a, const gl::GLboolean & b)
{
    return a > static_cast<unsigned char>(b);
}

bool operator>=(unsigned char a, const gl::GLboolean & b)
{
    return a >= static_cast<unsigned char>(b);
}

gl::GLboolean operator+(const gl::GLboolean & a, unsigned char b)
{
    return static_cast<gl::GLboolean>(static_cast<unsigned char>(a) + b);
}

gl::GLboolean operator-(const gl::GLboolean & a, unsigned char b)
{
    return static_cast<gl::GLboolean>(static_cast<unsigned char>(a) - b);
}

std::ostream & operator<<(std::ostream & stream, const gl::GLboolean & value)
{
    stream << gl::Meta::getString(value);
    return stream;
}


// GLbitfield Type Integration

bool operator==(const gl::GLbitfield & a, unsigned int b)
{
    return static_cast<unsigned int>(a) == b;
}

bool operator!=(const gl::GLbitfield & a, unsigned int b)
{
    return static_cast<unsigned int>(a) != b;
}

bool operator<(const gl::GLbitfield & a, unsigned int b)
{
    return static_cast<unsigned int>(a) < b;
}

bool operator<=(const gl::GLbitfield & a, unsigned int b)
{
    return static_cast<unsigned int>(a) <= b;
}

bool operator>(const gl::GLbitfield & a, unsigned int b)
{
    return static_cast<unsigned int>(a) > b;
}

bool operator>=(const gl::GLbitfield & a, unsigned int b)
{
    return static_cast<unsigned int>(a) >= b;
}

bool operator==(unsigned int a, const gl::GLbitfield & b)
{
    return a == static_cast<unsigned int>(b);
}

bool operator!=(unsigned int a, const gl::GLbitfield & b)
{
    return a != static_cast<unsigned int>(b);
}

bool operator<(unsigned int a, const gl::GLbitfield & b)
{
    return a < static_cast<unsigned int>(b);
}

bool operator<=(unsigned int a, const gl::GLbitfield & b)
{
    return a <= static_cast<unsigned int>(b);
}

bool operator>(unsigned int a, const gl::GLbitfield & b)
{
    return a > static_cast<unsigned int>(b);
}

bool operator>=(unsigned int a, const gl::GLbitfield & b)
{
    return a >= static_cast<unsigned int>(b);
}

gl::GLbitfield operator+(const gl::GLbitfield & a, unsigned int b)
{
    return static_cast<gl::GLbitfield>(static_cast<unsigned int>(a) + b);
}

gl::GLbitfield operator-(const gl::GLbitfield & a, unsigned int b)
{
    return static_cast<gl::GLbitfield>(static_cast<unsigned int>(a) - b);
}

std::ostream & operator<<(std::ostream & stream, const gl::GLbitfield & value)
{
    stream << gl::Meta::getString(value);
    return stream;
}

