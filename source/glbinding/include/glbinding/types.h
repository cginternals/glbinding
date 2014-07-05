#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <cstddef>
#include <cstdint>

#include <functional>
#include <ostream>
#include <string>

#ifdef _MSC_VER
#define GL_APIENTRY __stdcall
#else
#define GL_APIENTRY
#endif


namespace gl 
{

enum class GLextension : int;
enum class GLenum : unsigned int;
enum class GLboolean : unsigned char;
enum class GLbitfield : unsigned int;
using GLvoid = void;
using GLbyte = signed char;
using GLshort = short;
using GLint = int;
using GLclampx = int;
using GLubyte = unsigned char;
using GLushort = unsigned short;
using GLuint = unsigned int;
using GLsizei = int;
using GLfloat = float;
using GLclampf = float;
using GLdouble = double;
using GLclampd = double;
using GLeglImageOES = void *;
using GLchar = char;
using GLcharARB = char;
#ifdef __APPLE__
using GLhandleARB = void *;
#else
using GLhandleARB = unsigned int;
#endif
using GLhalfARB = unsigned short;
using GLhalf = unsigned short;
using GLfixed = GLint;
using GLintptr = ptrdiff_t;
using GLsizeiptr = ptrdiff_t;
using GLint64 = int64_t;
using GLuint64 = uint64_t;
using GLintptrARB = ptrdiff_t;
using GLsizeiptrARB = ptrdiff_t;
using GLint64EXT = int64_t;
using GLuint64EXT = uint64_t;
using GLsync = struct __GLsync *;
struct _cl_context;
struct _cl_event;
using GLDEBUGPROC = void (GL_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
using GLDEBUGPROCARB = void (GL_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
using GLDEBUGPROCKHR = void (GL_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
using GLDEBUGPROCAMD = void (GL_APIENTRY *)(GLuint id,GLenum category,GLenum severity,GLsizei length,const GLchar *message,void *userParam);
using GLhalfNV = unsigned short;
using GLvdpauSurfaceNV = GLintptr;

} // namespace gl


// Type Integrations


// GLenum Type Integration

namespace std
{

template<>
struct hash<gl::GLenum>
{
    hash<unsigned int>::result_type operator()(const gl::GLenum & t) const
    {
        return hash<unsigned int>()(static_cast<unsigned int>(t));
    }
};

}

GLBINDING_API bool operator==(const gl::GLenum & a, unsigned int b);
GLBINDING_API bool operator!=(const gl::GLenum & a, unsigned int b);
GLBINDING_API bool operator< (const gl::GLenum & a, unsigned int b);
GLBINDING_API bool operator<=(const gl::GLenum & a, unsigned int b);
GLBINDING_API bool operator> (const gl::GLenum & a, unsigned int b);
GLBINDING_API bool operator>=(const gl::GLenum & a, unsigned int b);

GLBINDING_API bool operator==(unsigned int a, const gl::GLenum & b);
GLBINDING_API bool operator!=(unsigned int a, const gl::GLenum & b);
GLBINDING_API bool operator< (unsigned int a, const gl::GLenum & b);
GLBINDING_API bool operator<=(unsigned int a, const gl::GLenum & b);
GLBINDING_API bool operator> (unsigned int a, const gl::GLenum & b);
GLBINDING_API bool operator>=(unsigned int a, const gl::GLenum & b);

GLBINDING_API gl::GLenum operator+(const gl::GLenum & a, unsigned int b);
GLBINDING_API gl::GLenum operator-(const gl::GLenum & a, unsigned int b);

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::GLenum & value);


// GLboolean Type Integration

namespace std
{

template<>
struct hash<gl::GLboolean>
{
    hash<unsigned char>::result_type operator()(const gl::GLboolean & t) const
    {
        return hash<unsigned char>()(static_cast<unsigned char>(t));
    }
};

}

GLBINDING_API bool operator==(const gl::GLboolean & a, unsigned char b);
GLBINDING_API bool operator!=(const gl::GLboolean & a, unsigned char b);
GLBINDING_API bool operator< (const gl::GLboolean & a, unsigned char b);
GLBINDING_API bool operator<=(const gl::GLboolean & a, unsigned char b);
GLBINDING_API bool operator> (const gl::GLboolean & a, unsigned char b);
GLBINDING_API bool operator>=(const gl::GLboolean & a, unsigned char b);

GLBINDING_API bool operator==(unsigned char a, const gl::GLboolean & b);
GLBINDING_API bool operator!=(unsigned char a, const gl::GLboolean & b);
GLBINDING_API bool operator< (unsigned char a, const gl::GLboolean & b);
GLBINDING_API bool operator<=(unsigned char a, const gl::GLboolean & b);
GLBINDING_API bool operator> (unsigned char a, const gl::GLboolean & b);
GLBINDING_API bool operator>=(unsigned char a, const gl::GLboolean & b);

GLBINDING_API gl::GLboolean operator+(const gl::GLboolean & a, unsigned char b);
GLBINDING_API gl::GLboolean operator-(const gl::GLboolean & a, unsigned char b);

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::GLboolean & value);


// GLbitfield Type Integration

namespace std
{

template<>
struct hash<gl::GLbitfield>
{
    hash<unsigned int>::result_type operator()(const gl::GLbitfield & t) const
    {
        return hash<unsigned int>()(static_cast<unsigned int>(t));
    }
};

}

GLBINDING_API bool operator==(const gl::GLbitfield & a, unsigned int b);
GLBINDING_API bool operator!=(const gl::GLbitfield & a, unsigned int b);
GLBINDING_API bool operator< (const gl::GLbitfield & a, unsigned int b);
GLBINDING_API bool operator<=(const gl::GLbitfield & a, unsigned int b);
GLBINDING_API bool operator> (const gl::GLbitfield & a, unsigned int b);
GLBINDING_API bool operator>=(const gl::GLbitfield & a, unsigned int b);

GLBINDING_API bool operator==(unsigned int a, const gl::GLbitfield & b);
GLBINDING_API bool operator!=(unsigned int a, const gl::GLbitfield & b);
GLBINDING_API bool operator< (unsigned int a, const gl::GLbitfield & b);
GLBINDING_API bool operator<=(unsigned int a, const gl::GLbitfield & b);
GLBINDING_API bool operator> (unsigned int a, const gl::GLbitfield & b);
GLBINDING_API bool operator>=(unsigned int a, const gl::GLbitfield & b);

GLBINDING_API gl::GLbitfield operator+(const gl::GLbitfield & a, unsigned int b);
GLBINDING_API gl::GLbitfield operator-(const gl::GLbitfield & a, unsigned int b);

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::GLbitfield & value);
