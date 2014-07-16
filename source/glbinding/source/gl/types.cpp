
#include <glbinding/gl/types.h>

#include <glbinding/Meta.h>




std::ostream & operator<<(std::ostream & stream, const gl::GLenum & value)
{
    stream << glbinding::Meta::getString(value);
    return stream;
}


gl::GLenum operator+(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<gl::GLenum>(static_cast<std::underlying_type<gl::GLenum>::type>(a) + b);
}

gl::GLenum operator-(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<gl::GLenum>(static_cast<std::underlying_type<gl::GLenum>::type>(a) - b);
}


bool operator==(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<std::underlying_type<gl::GLenum>::type>(a) == b;
}

bool operator!=(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<std::underlying_type<gl::GLenum>::type>(a) != b;
}

bool operator<(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<std::underlying_type<gl::GLenum>::type>(a) < b;
}

bool operator<=(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<std::underlying_type<gl::GLenum>::type>(a) <= b;
}

bool operator>(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<std::underlying_type<gl::GLenum>::type>(a) > b;
}

bool operator>=(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b)
{
    return static_cast<std::underlying_type<gl::GLenum>::type>(a) >= b;
}

bool operator==(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b)
{
    return a == static_cast<std::underlying_type<gl::GLenum>::type>(b);
}

bool operator!=(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b)
{
    return a != static_cast<std::underlying_type<gl::GLenum>::type>(b);
}

bool operator<(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b)
{
    return a < static_cast<std::underlying_type<gl::GLenum>::type>(b);
}

bool operator<=(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b)
{
    return a <= static_cast<std::underlying_type<gl::GLenum>::type>(b);
}

bool operator>(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b)
{
    return a > static_cast<std::underlying_type<gl::GLenum>::type>(b);
}

bool operator>=(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b)
{
    return a >= static_cast<std::underlying_type<gl::GLenum>::type>(b);
}



std::ostream & operator<<(std::ostream & stream, const gl::GLboolean & value)
{
    stream << glbinding::Meta::getString(value);
    return stream;
}



std::ostream & operator<<(std::ostream & stream, const gl::GLbitfield & value)
{
    stream << glbinding::Meta::getString(value);
    return stream;
}


gl::GLbitfield operator|(const gl::GLbitfield & a, const gl::GLbitfield & b)
{
	return static_cast<gl::GLbitfield>(static_cast<std::underlying_type<gl::GLbitfield>::type>(a) | static_cast<std::underlying_type<gl::GLbitfield>::type>(b));
}

gl::GLbitfield operator&(const gl::GLbitfield & a, const gl::GLbitfield & b)
{
	return static_cast<gl::GLbitfield>(static_cast<std::underlying_type<gl::GLbitfield>::type>(a) & static_cast<std::underlying_type<gl::GLbitfield>::type>(b));
}

gl::GLbitfield operator^(const gl::GLbitfield & a, const gl::GLbitfield & b)
{
	return static_cast<gl::GLbitfield>(static_cast<std::underlying_type<gl::GLbitfield>::type>(a) ^ static_cast<std::underlying_type<gl::GLbitfield>::type>(b));
}



std::ostream & operator<<(std::ostream & stream, const gl::GLextension & value)
{
    stream << glbinding::Meta::getString(value);
    return stream;
}

