
#pragma once


#include <glscbinding/nogl.h>
#include <glscbinding/glscbinding_api.h>
#include <glscbinding/glscbinding_features.h>
#include <glscbinding/glsc/boolean.h>

#include <cstddef>
#include <cstdint>
#include <array>

#include <functional>
#include <ostream>
#include <string>


#ifdef _MSC_VER
#define GL_APIENTRY __stdcall
#else
#define GL_APIENTRY
#endif


namespace glsc
{


enum class GLextension : int;
enum class GLenum : unsigned int;
// Import of GLboolean is an include
using GLbitfield = unsigned int;
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
using GLeglClientBufferEXT = void *;
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
using GLubyte = khronos_uint8_t;
using GLfloat = khronos_float_t;
using GLintptr = khronos_intptr_t;
using GLsizeiptr = khronos_ssize_t;
using GLDEBUGPROCAMD = void (GL_APIENTRY *)(GLuint id,GLenum category,GLenum severity,GLsizei length,const GLchar *message,void *userParam);
using GLhalfNV = unsigned short;
using GLvdpauSurfaceNV = GLintptr;
using GLVULKANPROCNV = void (GL_APIENTRY *)(void);
using GLuint_array_2 = std::array<GLuint, 2>;
enum class AttribMask : unsigned int;
enum class ClearBufferMask : unsigned int;

} // namespace glsc


// Type Integrations


namespace std
{


template<>
struct hash<glsc::GLextension>
{
    hash<std::underlying_type<glsc::GLextension>::type>::result_type operator()(const glsc::GLextension & t) const
    {
        return hash<std::underlying_type<glsc::GLextension>::type>()(static_cast<std::underlying_type<glsc::GLextension>::type>(t));
    }
};


} // namespace std


namespace glsc
{


GLSCBINDING_API std::ostream & operator<<(std::ostream & stream, const GLextension & value);


} // namespace glsc



namespace std
{


template<>
struct hash<glsc::GLenum>
{
    hash<std::underlying_type<glsc::GLenum>::type>::result_type operator()(const glsc::GLenum & t) const
    {
        return hash<std::underlying_type<glsc::GLenum>::type>()(static_cast<std::underlying_type<glsc::GLenum>::type>(t));
    }
};


} // namespace std


namespace glsc
{


GLSCBINDING_API std::ostream & operator<<(std::ostream & stream, const GLenum & value);


} // namespace glsc


namespace glsc
{


GLSCBINDING_CONSTEXPR inline GLenum operator+(const GLenum & a, const std::underlying_type<GLenum>::type b)
{
    return static_cast<GLenum>(static_cast<std::underlying_type<GLenum>::type>(a) + b);
}

GLSCBINDING_CONSTEXPR inline GLenum operator-(const GLenum & a, const std::underlying_type<GLenum>::type b)
{
    return static_cast<GLenum>(static_cast<std::underlying_type<GLenum>::type>(a) - b);
}


} // namespace glsc


namespace glsc{GLSCBINDING_CONSTEXPR inline bool operator==(const GLenum & a, std::underlying_type<GLenum>::type b){    return static_cast<std::underlying_type<GLenum>::type>(a) == b;}GLSCBINDING_CONSTEXPR inline bool operator!=(const GLenum & a, std::underlying_type<GLenum>::type b){    return static_cast<std::underlying_type<GLenum>::type>(a) != b;}GLSCBINDING_CONSTEXPR inline bool operator< (const GLenum & a, std::underlying_type<GLenum>::type b){    return static_cast<std::underlying_type<GLenum>::type>(a) < b;}GLSCBINDING_CONSTEXPR inline bool operator<=(const GLenum & a, std::underlying_type<GLenum>::type b){    return static_cast<std::underlying_type<GLenum>::type>(a) <= b;}GLSCBINDING_CONSTEXPR inline bool operator> (const GLenum & a, std::underlying_type<GLenum>::type b){    return static_cast<std::underlying_type<GLenum>::type>(a) > b;}GLSCBINDING_CONSTEXPR inline bool operator>=(const GLenum & a, std::underlying_type<GLenum>::type b){    return static_cast<std::underlying_type<GLenum>::type>(a) >= b;}GLSCBINDING_CONSTEXPR inline bool operator==(std::underlying_type<GLenum>::type a, const GLenum & b){    return a == static_cast<std::underlying_type<GLenum>::type>(b);}GLSCBINDING_CONSTEXPR inline bool operator!=(std::underlying_type<GLenum>::type a, const GLenum & b){    return a != static_cast<std::underlying_type<GLenum>::type>(b);}GLSCBINDING_CONSTEXPR inline bool operator< (std::underlying_type<GLenum>::type a, const GLenum & b){    return a < static_cast<std::underlying_type<GLenum>::type>(b);}GLSCBINDING_CONSTEXPR inline bool operator<=(std::underlying_type<GLenum>::type a, const GLenum & b){    return a <= static_cast<std::underlying_type<GLenum>::type>(b);}GLSCBINDING_CONSTEXPR inline bool operator> (std::underlying_type<GLenum>::type a, const GLenum & b){    return a > static_cast<std::underlying_type<GLenum>::type>(b);}GLSCBINDING_CONSTEXPR inline bool operator>=(std::underlying_type<GLenum>::type a, const GLenum & b){    return a >= static_cast<std::underlying_type<GLenum>::type>(b);}} // namespace glsc


namespace glsc
{


GLSCBINDING_API std::ostream & operator<<(std::ostream & stream, const GLboolean & value);


} // namespace glsc



namespace std
{


template<>
struct hash<glsc::AttribMask>
{
    hash<std::underlying_type<glsc::AttribMask>::type>::result_type operator()(const glsc::AttribMask & t) const
    {
        return hash<std::underlying_type<glsc::AttribMask>::type>()(static_cast<std::underlying_type<glsc::AttribMask>::type>(t));
    }
};


} // namespace std


namespace glsc
{


GLSCBINDING_API std::ostream & operator<<(std::ostream & stream, const AttribMask & value);


} // namespace glsc



namespace glsc
{


GLSCBINDING_CONSTEXPR inline AttribMask operator|(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) | static_cast<std::underlying_type<AttribMask>::type>(b));
}

inline AttribMask & operator|=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) | static_cast<std::underlying_type<AttribMask>::type>(b));

    return a;
}

GLSCBINDING_CONSTEXPR inline AttribMask operator&(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) & static_cast<std::underlying_type<AttribMask>::type>(b));
}

inline AttribMask & operator&=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) & static_cast<std::underlying_type<AttribMask>::type>(b));

    return a;
}

GLSCBINDING_CONSTEXPR inline AttribMask operator^(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) ^ static_cast<std::underlying_type<AttribMask>::type>(b));
}

inline AttribMask & operator^=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) ^ static_cast<std::underlying_type<AttribMask>::type>(b));

    return a;
}


} // namespace glsc


namespace std
{


template<>
struct hash<glsc::ClearBufferMask>
{
    hash<std::underlying_type<glsc::ClearBufferMask>::type>::result_type operator()(const glsc::ClearBufferMask & t) const
    {
        return hash<std::underlying_type<glsc::ClearBufferMask>::type>()(static_cast<std::underlying_type<glsc::ClearBufferMask>::type>(t));
    }
};


} // namespace std


namespace glsc
{


GLSCBINDING_API std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value);


} // namespace glsc



namespace glsc
{


GLSCBINDING_CONSTEXPR inline ClearBufferMask operator|(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) | static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

inline ClearBufferMask & operator|=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) | static_cast<std::underlying_type<ClearBufferMask>::type>(b));

    return a;
}

GLSCBINDING_CONSTEXPR inline ClearBufferMask operator&(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) & static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

inline ClearBufferMask & operator&=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) & static_cast<std::underlying_type<ClearBufferMask>::type>(b));

    return a;
}

GLSCBINDING_CONSTEXPR inline ClearBufferMask operator^(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) ^ static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

inline ClearBufferMask & operator^=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) ^ static_cast<std::underlying_type<ClearBufferMask>::type>(b));

    return a;
}


} // namespace glsc

