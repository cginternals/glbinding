
#pragma once


#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>
#include <glbinding/glbinding_features.h>
#include <glbinding/gl/boolean.h>

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


namespace gl
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
using GLDEBUGPROCAMD = void (GL_APIENTRY *)(GLuint id,GLenum category,GLenum severity,GLsizei length,const GLchar *message,void *userParam);
using GLhalfNV = unsigned short;
using GLvdpauSurfaceNV = GLintptr;
using GLVULKANPROCNV = void (GL_APIENTRY *)(void);
using GLuint_array_2 = std::array<GLuint, 2>;
enum class AttribMask : unsigned int;
enum class ClearBufferMask : unsigned int;
enum class ClientAttribMask : unsigned int;
enum class ContextFlagMask : unsigned int;
enum class ContextProfileMask : unsigned int;
enum class FfdMaskSGIX : unsigned int;
enum class FragmentShaderColorModMaskATI : unsigned int;
enum class FragmentShaderDestMaskATI : unsigned int;
enum class FragmentShaderDestModMaskATI : unsigned int;
enum class MapBufferUsageMask : unsigned int;
enum class MemoryBarrierMask : unsigned int;
enum class PathFontStyle : unsigned int;
enum class PathMetricMask : unsigned int;
enum class PathRenderingMaskNV : unsigned int;
enum class PerformanceQueryCapsMaskINTEL : unsigned int;
enum class SyncObjectMask : unsigned int;
enum class TextureStorageMaskAMD : unsigned int;
enum class UseProgramStageMask : unsigned int;
enum class VertexHintsMaskPGI : unsigned int;
enum class UnusedMask : unsigned int;
enum class BufferAccessMask : unsigned int;
enum class BufferStorageMask : unsigned int;

} // namespace gl


// Type Integrations


namespace std
{


template<>
struct hash<gl::GLextension>
{
    hash<std::underlying_type<gl::GLextension>::type>::result_type operator()(const gl::GLextension & t) const
    {
        return hash<std::underlying_type<gl::GLextension>::type>()(static_cast<std::underlying_type<gl::GLextension>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const GLextension & value);


} // namespace gl



namespace std
{


template<>
struct hash<gl::GLenum>
{
    hash<std::underlying_type<gl::GLenum>::type>::result_type operator()(const gl::GLenum & t) const
    {
        return hash<std::underlying_type<gl::GLenum>::type>()(static_cast<std::underlying_type<gl::GLenum>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const GLenum & value);


} // namespace gl


namespace gl
{


GLBINDING_CONSTEXPR inline GLenum operator+(const GLenum & a, const std::underlying_type<GLenum>::type b)
{
    return static_cast<GLenum>(static_cast<std::underlying_type<GLenum>::type>(a) + b);
}

GLBINDING_CONSTEXPR inline GLenum operator-(const GLenum & a, const std::underlying_type<GLenum>::type b)
{
    return static_cast<GLenum>(static_cast<std::underlying_type<GLenum>::type>(a) - b);
}


} // namespace gl


namespace gl{GLBINDING_CONSTEXPR inline bool operator==(const GLenum & a, std::underlying_type<GLenum>::type b){    return static_cast<std::underlying_type<GLenum>::type>(a) == b;}GLBINDING_CONSTEXPR inline bool operator!=(const GLenum & a, std::underlying_type<GLenum>::type b){    return static_cast<std::underlying_type<GLenum>::type>(a) != b;}GLBINDING_CONSTEXPR inline bool operator< (const GLenum & a, std::underlying_type<GLenum>::type b){    return static_cast<std::underlying_type<GLenum>::type>(a) < b;}GLBINDING_CONSTEXPR inline bool operator<=(const GLenum & a, std::underlying_type<GLenum>::type b){    return static_cast<std::underlying_type<GLenum>::type>(a) <= b;}GLBINDING_CONSTEXPR inline bool operator> (const GLenum & a, std::underlying_type<GLenum>::type b){    return static_cast<std::underlying_type<GLenum>::type>(a) > b;}GLBINDING_CONSTEXPR inline bool operator>=(const GLenum & a, std::underlying_type<GLenum>::type b){    return static_cast<std::underlying_type<GLenum>::type>(a) >= b;}GLBINDING_CONSTEXPR inline bool operator==(std::underlying_type<GLenum>::type a, const GLenum & b){    return a == static_cast<std::underlying_type<GLenum>::type>(b);}GLBINDING_CONSTEXPR inline bool operator!=(std::underlying_type<GLenum>::type a, const GLenum & b){    return a != static_cast<std::underlying_type<GLenum>::type>(b);}GLBINDING_CONSTEXPR inline bool operator< (std::underlying_type<GLenum>::type a, const GLenum & b){    return a < static_cast<std::underlying_type<GLenum>::type>(b);}GLBINDING_CONSTEXPR inline bool operator<=(std::underlying_type<GLenum>::type a, const GLenum & b){    return a <= static_cast<std::underlying_type<GLenum>::type>(b);}GLBINDING_CONSTEXPR inline bool operator> (std::underlying_type<GLenum>::type a, const GLenum & b){    return a > static_cast<std::underlying_type<GLenum>::type>(b);}GLBINDING_CONSTEXPR inline bool operator>=(std::underlying_type<GLenum>::type a, const GLenum & b){    return a >= static_cast<std::underlying_type<GLenum>::type>(b);}} // namespace gl


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const GLboolean & value);


} // namespace gl



namespace std
{


template<>
struct hash<gl::AttribMask>
{
    hash<std::underlying_type<gl::AttribMask>::type>::result_type operator()(const gl::AttribMask & t) const
    {
        return hash<std::underlying_type<gl::AttribMask>::type>()(static_cast<std::underlying_type<gl::AttribMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const AttribMask & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline AttribMask operator|(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) | static_cast<std::underlying_type<AttribMask>::type>(b));
}

inline AttribMask & operator|=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) | static_cast<std::underlying_type<AttribMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline AttribMask operator&(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) & static_cast<std::underlying_type<AttribMask>::type>(b));
}

inline AttribMask & operator&=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) & static_cast<std::underlying_type<AttribMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline AttribMask operator^(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) ^ static_cast<std::underlying_type<AttribMask>::type>(b));
}

inline AttribMask & operator^=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) ^ static_cast<std::underlying_type<AttribMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::ClearBufferMask>
{
    hash<std::underlying_type<gl::ClearBufferMask>::type>::result_type operator()(const gl::ClearBufferMask & t) const
    {
        return hash<std::underlying_type<gl::ClearBufferMask>::type>()(static_cast<std::underlying_type<gl::ClearBufferMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline ClearBufferMask operator|(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) | static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

inline ClearBufferMask & operator|=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) | static_cast<std::underlying_type<ClearBufferMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline ClearBufferMask operator&(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) & static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

inline ClearBufferMask & operator&=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) & static_cast<std::underlying_type<ClearBufferMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline ClearBufferMask operator^(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) ^ static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

inline ClearBufferMask & operator^=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) ^ static_cast<std::underlying_type<ClearBufferMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::ClientAttribMask>
{
    hash<std::underlying_type<gl::ClientAttribMask>::type>::result_type operator()(const gl::ClientAttribMask & t) const
    {
        return hash<std::underlying_type<gl::ClientAttribMask>::type>()(static_cast<std::underlying_type<gl::ClientAttribMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const ClientAttribMask & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline ClientAttribMask operator|(const ClientAttribMask & a, const ClientAttribMask & b)
{
    return static_cast<ClientAttribMask>(static_cast<std::underlying_type<ClientAttribMask>::type>(a) | static_cast<std::underlying_type<ClientAttribMask>::type>(b));
}

inline ClientAttribMask & operator|=(ClientAttribMask & a, const ClientAttribMask & b)
{
    a = static_cast<ClientAttribMask>(static_cast<std::underlying_type<ClientAttribMask>::type>(a) | static_cast<std::underlying_type<ClientAttribMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline ClientAttribMask operator&(const ClientAttribMask & a, const ClientAttribMask & b)
{
    return static_cast<ClientAttribMask>(static_cast<std::underlying_type<ClientAttribMask>::type>(a) & static_cast<std::underlying_type<ClientAttribMask>::type>(b));
}

inline ClientAttribMask & operator&=(ClientAttribMask & a, const ClientAttribMask & b)
{
    a = static_cast<ClientAttribMask>(static_cast<std::underlying_type<ClientAttribMask>::type>(a) & static_cast<std::underlying_type<ClientAttribMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline ClientAttribMask operator^(const ClientAttribMask & a, const ClientAttribMask & b)
{
    return static_cast<ClientAttribMask>(static_cast<std::underlying_type<ClientAttribMask>::type>(a) ^ static_cast<std::underlying_type<ClientAttribMask>::type>(b));
}

inline ClientAttribMask & operator^=(ClientAttribMask & a, const ClientAttribMask & b)
{
    a = static_cast<ClientAttribMask>(static_cast<std::underlying_type<ClientAttribMask>::type>(a) ^ static_cast<std::underlying_type<ClientAttribMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::ContextFlagMask>
{
    hash<std::underlying_type<gl::ContextFlagMask>::type>::result_type operator()(const gl::ContextFlagMask & t) const
    {
        return hash<std::underlying_type<gl::ContextFlagMask>::type>()(static_cast<std::underlying_type<gl::ContextFlagMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline ContextFlagMask operator|(const ContextFlagMask & a, const ContextFlagMask & b)
{
    return static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) | static_cast<std::underlying_type<ContextFlagMask>::type>(b));
}

inline ContextFlagMask & operator|=(ContextFlagMask & a, const ContextFlagMask & b)
{
    a = static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) | static_cast<std::underlying_type<ContextFlagMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline ContextFlagMask operator&(const ContextFlagMask & a, const ContextFlagMask & b)
{
    return static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) & static_cast<std::underlying_type<ContextFlagMask>::type>(b));
}

inline ContextFlagMask & operator&=(ContextFlagMask & a, const ContextFlagMask & b)
{
    a = static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) & static_cast<std::underlying_type<ContextFlagMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline ContextFlagMask operator^(const ContextFlagMask & a, const ContextFlagMask & b)
{
    return static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) ^ static_cast<std::underlying_type<ContextFlagMask>::type>(b));
}

inline ContextFlagMask & operator^=(ContextFlagMask & a, const ContextFlagMask & b)
{
    a = static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) ^ static_cast<std::underlying_type<ContextFlagMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::ContextProfileMask>
{
    hash<std::underlying_type<gl::ContextProfileMask>::type>::result_type operator()(const gl::ContextProfileMask & t) const
    {
        return hash<std::underlying_type<gl::ContextProfileMask>::type>()(static_cast<std::underlying_type<gl::ContextProfileMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const ContextProfileMask & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline ContextProfileMask operator|(const ContextProfileMask & a, const ContextProfileMask & b)
{
    return static_cast<ContextProfileMask>(static_cast<std::underlying_type<ContextProfileMask>::type>(a) | static_cast<std::underlying_type<ContextProfileMask>::type>(b));
}

inline ContextProfileMask & operator|=(ContextProfileMask & a, const ContextProfileMask & b)
{
    a = static_cast<ContextProfileMask>(static_cast<std::underlying_type<ContextProfileMask>::type>(a) | static_cast<std::underlying_type<ContextProfileMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline ContextProfileMask operator&(const ContextProfileMask & a, const ContextProfileMask & b)
{
    return static_cast<ContextProfileMask>(static_cast<std::underlying_type<ContextProfileMask>::type>(a) & static_cast<std::underlying_type<ContextProfileMask>::type>(b));
}

inline ContextProfileMask & operator&=(ContextProfileMask & a, const ContextProfileMask & b)
{
    a = static_cast<ContextProfileMask>(static_cast<std::underlying_type<ContextProfileMask>::type>(a) & static_cast<std::underlying_type<ContextProfileMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline ContextProfileMask operator^(const ContextProfileMask & a, const ContextProfileMask & b)
{
    return static_cast<ContextProfileMask>(static_cast<std::underlying_type<ContextProfileMask>::type>(a) ^ static_cast<std::underlying_type<ContextProfileMask>::type>(b));
}

inline ContextProfileMask & operator^=(ContextProfileMask & a, const ContextProfileMask & b)
{
    a = static_cast<ContextProfileMask>(static_cast<std::underlying_type<ContextProfileMask>::type>(a) ^ static_cast<std::underlying_type<ContextProfileMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::FfdMaskSGIX>
{
    hash<std::underlying_type<gl::FfdMaskSGIX>::type>::result_type operator()(const gl::FfdMaskSGIX & t) const
    {
        return hash<std::underlying_type<gl::FfdMaskSGIX>::type>()(static_cast<std::underlying_type<gl::FfdMaskSGIX>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const FfdMaskSGIX & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline FfdMaskSGIX operator|(const FfdMaskSGIX & a, const FfdMaskSGIX & b)
{
    return static_cast<FfdMaskSGIX>(static_cast<std::underlying_type<FfdMaskSGIX>::type>(a) | static_cast<std::underlying_type<FfdMaskSGIX>::type>(b));
}

inline FfdMaskSGIX & operator|=(FfdMaskSGIX & a, const FfdMaskSGIX & b)
{
    a = static_cast<FfdMaskSGIX>(static_cast<std::underlying_type<FfdMaskSGIX>::type>(a) | static_cast<std::underlying_type<FfdMaskSGIX>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline FfdMaskSGIX operator&(const FfdMaskSGIX & a, const FfdMaskSGIX & b)
{
    return static_cast<FfdMaskSGIX>(static_cast<std::underlying_type<FfdMaskSGIX>::type>(a) & static_cast<std::underlying_type<FfdMaskSGIX>::type>(b));
}

inline FfdMaskSGIX & operator&=(FfdMaskSGIX & a, const FfdMaskSGIX & b)
{
    a = static_cast<FfdMaskSGIX>(static_cast<std::underlying_type<FfdMaskSGIX>::type>(a) & static_cast<std::underlying_type<FfdMaskSGIX>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline FfdMaskSGIX operator^(const FfdMaskSGIX & a, const FfdMaskSGIX & b)
{
    return static_cast<FfdMaskSGIX>(static_cast<std::underlying_type<FfdMaskSGIX>::type>(a) ^ static_cast<std::underlying_type<FfdMaskSGIX>::type>(b));
}

inline FfdMaskSGIX & operator^=(FfdMaskSGIX & a, const FfdMaskSGIX & b)
{
    a = static_cast<FfdMaskSGIX>(static_cast<std::underlying_type<FfdMaskSGIX>::type>(a) ^ static_cast<std::underlying_type<FfdMaskSGIX>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::FragmentShaderColorModMaskATI>
{
    hash<std::underlying_type<gl::FragmentShaderColorModMaskATI>::type>::result_type operator()(const gl::FragmentShaderColorModMaskATI & t) const
    {
        return hash<std::underlying_type<gl::FragmentShaderColorModMaskATI>::type>()(static_cast<std::underlying_type<gl::FragmentShaderColorModMaskATI>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderColorModMaskATI & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline FragmentShaderColorModMaskATI operator|(const FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b)
{
    return static_cast<FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(b));
}

inline FragmentShaderColorModMaskATI & operator|=(FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b)
{
    a = static_cast<FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline FragmentShaderColorModMaskATI operator&(const FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b)
{
    return static_cast<FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(b));
}

inline FragmentShaderColorModMaskATI & operator&=(FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b)
{
    a = static_cast<FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline FragmentShaderColorModMaskATI operator^(const FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b)
{
    return static_cast<FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(b));
}

inline FragmentShaderColorModMaskATI & operator^=(FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b)
{
    a = static_cast<FragmentShaderColorModMaskATI>(static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderColorModMaskATI>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::FragmentShaderDestMaskATI>
{
    hash<std::underlying_type<gl::FragmentShaderDestMaskATI>::type>::result_type operator()(const gl::FragmentShaderDestMaskATI & t) const
    {
        return hash<std::underlying_type<gl::FragmentShaderDestMaskATI>::type>()(static_cast<std::underlying_type<gl::FragmentShaderDestMaskATI>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestMaskATI & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline FragmentShaderDestMaskATI operator|(const FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    return static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));
}

inline FragmentShaderDestMaskATI & operator|=(FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    a = static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline FragmentShaderDestMaskATI operator&(const FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    return static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));
}

inline FragmentShaderDestMaskATI & operator&=(FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    a = static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline FragmentShaderDestMaskATI operator^(const FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    return static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));
}

inline FragmentShaderDestMaskATI & operator^=(FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    a = static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::FragmentShaderDestModMaskATI>
{
    hash<std::underlying_type<gl::FragmentShaderDestModMaskATI>::type>::result_type operator()(const gl::FragmentShaderDestModMaskATI & t) const
    {
        return hash<std::underlying_type<gl::FragmentShaderDestModMaskATI>::type>()(static_cast<std::underlying_type<gl::FragmentShaderDestModMaskATI>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestModMaskATI & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline FragmentShaderDestModMaskATI operator|(const FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    return static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));
}

inline FragmentShaderDestModMaskATI & operator|=(FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    a = static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline FragmentShaderDestModMaskATI operator&(const FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    return static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));
}

inline FragmentShaderDestModMaskATI & operator&=(FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    a = static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline FragmentShaderDestModMaskATI operator^(const FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    return static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));
}

inline FragmentShaderDestModMaskATI & operator^=(FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    a = static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::MapBufferUsageMask>
{
    hash<std::underlying_type<gl::MapBufferUsageMask>::type>::result_type operator()(const gl::MapBufferUsageMask & t) const
    {
        return hash<std::underlying_type<gl::MapBufferUsageMask>::type>()(static_cast<std::underlying_type<gl::MapBufferUsageMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const MapBufferUsageMask & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline MapBufferUsageMask operator|(const MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    return static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) | static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));
}

inline MapBufferUsageMask & operator|=(MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    a = static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) | static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline MapBufferUsageMask operator&(const MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    return static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) & static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));
}

inline MapBufferUsageMask & operator&=(MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    a = static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) & static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline MapBufferUsageMask operator^(const MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    return static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) ^ static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));
}

inline MapBufferUsageMask & operator^=(MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    a = static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) ^ static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::MemoryBarrierMask>
{
    hash<std::underlying_type<gl::MemoryBarrierMask>::type>::result_type operator()(const gl::MemoryBarrierMask & t) const
    {
        return hash<std::underlying_type<gl::MemoryBarrierMask>::type>()(static_cast<std::underlying_type<gl::MemoryBarrierMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline MemoryBarrierMask operator|(const MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    return static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) | static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
}

inline MemoryBarrierMask & operator|=(MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    a = static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) | static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline MemoryBarrierMask operator&(const MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    return static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) & static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
}

inline MemoryBarrierMask & operator&=(MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    a = static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) & static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline MemoryBarrierMask operator^(const MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    return static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) ^ static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
}

inline MemoryBarrierMask & operator^=(MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    a = static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) ^ static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::PathFontStyle>
{
    hash<std::underlying_type<gl::PathFontStyle>::type>::result_type operator()(const gl::PathFontStyle & t) const
    {
        return hash<std::underlying_type<gl::PathFontStyle>::type>()(static_cast<std::underlying_type<gl::PathFontStyle>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline PathFontStyle operator|(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) | static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

inline PathFontStyle & operator|=(PathFontStyle & a, const PathFontStyle & b)
{
    a = static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) | static_cast<std::underlying_type<PathFontStyle>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline PathFontStyle operator&(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) & static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

inline PathFontStyle & operator&=(PathFontStyle & a, const PathFontStyle & b)
{
    a = static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) & static_cast<std::underlying_type<PathFontStyle>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline PathFontStyle operator^(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) ^ static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

inline PathFontStyle & operator^=(PathFontStyle & a, const PathFontStyle & b)
{
    a = static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) ^ static_cast<std::underlying_type<PathFontStyle>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::PathMetricMask>
{
    hash<std::underlying_type<gl::PathMetricMask>::type>::result_type operator()(const gl::PathMetricMask & t) const
    {
        return hash<std::underlying_type<gl::PathMetricMask>::type>()(static_cast<std::underlying_type<gl::PathMetricMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const PathMetricMask & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline PathMetricMask operator|(const PathMetricMask & a, const PathMetricMask & b)
{
    return static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) | static_cast<std::underlying_type<PathMetricMask>::type>(b));
}

inline PathMetricMask & operator|=(PathMetricMask & a, const PathMetricMask & b)
{
    a = static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) | static_cast<std::underlying_type<PathMetricMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline PathMetricMask operator&(const PathMetricMask & a, const PathMetricMask & b)
{
    return static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) & static_cast<std::underlying_type<PathMetricMask>::type>(b));
}

inline PathMetricMask & operator&=(PathMetricMask & a, const PathMetricMask & b)
{
    a = static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) & static_cast<std::underlying_type<PathMetricMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline PathMetricMask operator^(const PathMetricMask & a, const PathMetricMask & b)
{
    return static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) ^ static_cast<std::underlying_type<PathMetricMask>::type>(b));
}

inline PathMetricMask & operator^=(PathMetricMask & a, const PathMetricMask & b)
{
    a = static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) ^ static_cast<std::underlying_type<PathMetricMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::PathRenderingMaskNV>
{
    hash<std::underlying_type<gl::PathRenderingMaskNV>::type>::result_type operator()(const gl::PathRenderingMaskNV & t) const
    {
        return hash<std::underlying_type<gl::PathRenderingMaskNV>::type>()(static_cast<std::underlying_type<gl::PathRenderingMaskNV>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline PathRenderingMaskNV operator|(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    return static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) | static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));
}

inline PathRenderingMaskNV & operator|=(PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    a = static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) | static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline PathRenderingMaskNV operator&(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    return static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) & static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));
}

inline PathRenderingMaskNV & operator&=(PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    a = static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) & static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline PathRenderingMaskNV operator^(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    return static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) ^ static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));
}

inline PathRenderingMaskNV & operator^=(PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    a = static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) ^ static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::PerformanceQueryCapsMaskINTEL>
{
    hash<std::underlying_type<gl::PerformanceQueryCapsMaskINTEL>::type>::result_type operator()(const gl::PerformanceQueryCapsMaskINTEL & t) const
    {
        return hash<std::underlying_type<gl::PerformanceQueryCapsMaskINTEL>::type>()(static_cast<std::underlying_type<gl::PerformanceQueryCapsMaskINTEL>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline PerformanceQueryCapsMaskINTEL operator|(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) | static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
}

inline PerformanceQueryCapsMaskINTEL & operator|=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    a = static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) | static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline PerformanceQueryCapsMaskINTEL operator&(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) & static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
}

inline PerformanceQueryCapsMaskINTEL & operator&=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    a = static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) & static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline PerformanceQueryCapsMaskINTEL operator^(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) ^ static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
}

inline PerformanceQueryCapsMaskINTEL & operator^=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    a = static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) ^ static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::SyncObjectMask>
{
    hash<std::underlying_type<gl::SyncObjectMask>::type>::result_type operator()(const gl::SyncObjectMask & t) const
    {
        return hash<std::underlying_type<gl::SyncObjectMask>::type>()(static_cast<std::underlying_type<gl::SyncObjectMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline SyncObjectMask operator|(const SyncObjectMask & a, const SyncObjectMask & b)
{
    return static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) | static_cast<std::underlying_type<SyncObjectMask>::type>(b));
}

inline SyncObjectMask & operator|=(SyncObjectMask & a, const SyncObjectMask & b)
{
    a = static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) | static_cast<std::underlying_type<SyncObjectMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline SyncObjectMask operator&(const SyncObjectMask & a, const SyncObjectMask & b)
{
    return static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) & static_cast<std::underlying_type<SyncObjectMask>::type>(b));
}

inline SyncObjectMask & operator&=(SyncObjectMask & a, const SyncObjectMask & b)
{
    a = static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) & static_cast<std::underlying_type<SyncObjectMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline SyncObjectMask operator^(const SyncObjectMask & a, const SyncObjectMask & b)
{
    return static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) ^ static_cast<std::underlying_type<SyncObjectMask>::type>(b));
}

inline SyncObjectMask & operator^=(SyncObjectMask & a, const SyncObjectMask & b)
{
    a = static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) ^ static_cast<std::underlying_type<SyncObjectMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::TextureStorageMaskAMD>
{
    hash<std::underlying_type<gl::TextureStorageMaskAMD>::type>::result_type operator()(const gl::TextureStorageMaskAMD & t) const
    {
        return hash<std::underlying_type<gl::TextureStorageMaskAMD>::type>()(static_cast<std::underlying_type<gl::TextureStorageMaskAMD>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const TextureStorageMaskAMD & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline TextureStorageMaskAMD operator|(const TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b)
{
    return static_cast<TextureStorageMaskAMD>(static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(a) | static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(b));
}

inline TextureStorageMaskAMD & operator|=(TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b)
{
    a = static_cast<TextureStorageMaskAMD>(static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(a) | static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline TextureStorageMaskAMD operator&(const TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b)
{
    return static_cast<TextureStorageMaskAMD>(static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(a) & static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(b));
}

inline TextureStorageMaskAMD & operator&=(TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b)
{
    a = static_cast<TextureStorageMaskAMD>(static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(a) & static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline TextureStorageMaskAMD operator^(const TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b)
{
    return static_cast<TextureStorageMaskAMD>(static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(a) ^ static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(b));
}

inline TextureStorageMaskAMD & operator^=(TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b)
{
    a = static_cast<TextureStorageMaskAMD>(static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(a) ^ static_cast<std::underlying_type<TextureStorageMaskAMD>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::UseProgramStageMask>
{
    hash<std::underlying_type<gl::UseProgramStageMask>::type>::result_type operator()(const gl::UseProgramStageMask & t) const
    {
        return hash<std::underlying_type<gl::UseProgramStageMask>::type>()(static_cast<std::underlying_type<gl::UseProgramStageMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline UseProgramStageMask operator|(const UseProgramStageMask & a, const UseProgramStageMask & b)
{
    return static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) | static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
}

inline UseProgramStageMask & operator|=(UseProgramStageMask & a, const UseProgramStageMask & b)
{
    a = static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) | static_cast<std::underlying_type<UseProgramStageMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline UseProgramStageMask operator&(const UseProgramStageMask & a, const UseProgramStageMask & b)
{
    return static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) & static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
}

inline UseProgramStageMask & operator&=(UseProgramStageMask & a, const UseProgramStageMask & b)
{
    a = static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) & static_cast<std::underlying_type<UseProgramStageMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline UseProgramStageMask operator^(const UseProgramStageMask & a, const UseProgramStageMask & b)
{
    return static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) ^ static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
}

inline UseProgramStageMask & operator^=(UseProgramStageMask & a, const UseProgramStageMask & b)
{
    a = static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) ^ static_cast<std::underlying_type<UseProgramStageMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::VertexHintsMaskPGI>
{
    hash<std::underlying_type<gl::VertexHintsMaskPGI>::type>::result_type operator()(const gl::VertexHintsMaskPGI & t) const
    {
        return hash<std::underlying_type<gl::VertexHintsMaskPGI>::type>()(static_cast<std::underlying_type<gl::VertexHintsMaskPGI>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const VertexHintsMaskPGI & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline VertexHintsMaskPGI operator|(const VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b)
{
    return static_cast<VertexHintsMaskPGI>(static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(a) | static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(b));
}

inline VertexHintsMaskPGI & operator|=(VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b)
{
    a = static_cast<VertexHintsMaskPGI>(static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(a) | static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline VertexHintsMaskPGI operator&(const VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b)
{
    return static_cast<VertexHintsMaskPGI>(static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(a) & static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(b));
}

inline VertexHintsMaskPGI & operator&=(VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b)
{
    a = static_cast<VertexHintsMaskPGI>(static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(a) & static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline VertexHintsMaskPGI operator^(const VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b)
{
    return static_cast<VertexHintsMaskPGI>(static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(a) ^ static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(b));
}

inline VertexHintsMaskPGI & operator^=(VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b)
{
    a = static_cast<VertexHintsMaskPGI>(static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(a) ^ static_cast<std::underlying_type<VertexHintsMaskPGI>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::UnusedMask>
{
    hash<std::underlying_type<gl::UnusedMask>::type>::result_type operator()(const gl::UnusedMask & t) const
    {
        return hash<std::underlying_type<gl::UnusedMask>::type>()(static_cast<std::underlying_type<gl::UnusedMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const UnusedMask & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline UnusedMask operator|(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) | static_cast<std::underlying_type<UnusedMask>::type>(b));
}

inline UnusedMask & operator|=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) | static_cast<std::underlying_type<UnusedMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline UnusedMask operator&(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) & static_cast<std::underlying_type<UnusedMask>::type>(b));
}

inline UnusedMask & operator&=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) & static_cast<std::underlying_type<UnusedMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline UnusedMask operator^(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) ^ static_cast<std::underlying_type<UnusedMask>::type>(b));
}

inline UnusedMask & operator^=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) ^ static_cast<std::underlying_type<UnusedMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::BufferAccessMask>
{
    hash<std::underlying_type<gl::BufferAccessMask>::type>::result_type operator()(const gl::BufferAccessMask & t) const
    {
        return hash<std::underlying_type<gl::BufferAccessMask>::type>()(static_cast<std::underlying_type<gl::BufferAccessMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const BufferAccessMask & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline BufferAccessMask operator|(const BufferAccessMask & a, const BufferAccessMask & b)
{
    return static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) | static_cast<std::underlying_type<BufferAccessMask>::type>(b));
}

inline BufferAccessMask & operator|=(BufferAccessMask & a, const BufferAccessMask & b)
{
    a = static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) | static_cast<std::underlying_type<BufferAccessMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline BufferAccessMask operator&(const BufferAccessMask & a, const BufferAccessMask & b)
{
    return static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) & static_cast<std::underlying_type<BufferAccessMask>::type>(b));
}

inline BufferAccessMask & operator&=(BufferAccessMask & a, const BufferAccessMask & b)
{
    a = static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) & static_cast<std::underlying_type<BufferAccessMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline BufferAccessMask operator^(const BufferAccessMask & a, const BufferAccessMask & b)
{
    return static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) ^ static_cast<std::underlying_type<BufferAccessMask>::type>(b));
}

inline BufferAccessMask & operator^=(BufferAccessMask & a, const BufferAccessMask & b)
{
    a = static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) ^ static_cast<std::underlying_type<BufferAccessMask>::type>(b));

    return a;
}


} // namespace gl


namespace std
{


template<>
struct hash<gl::BufferStorageMask>
{
    hash<std::underlying_type<gl::BufferStorageMask>::type>::result_type operator()(const gl::BufferStorageMask & t) const
    {
        return hash<std::underlying_type<gl::BufferStorageMask>::type>()(static_cast<std::underlying_type<gl::BufferStorageMask>::type>(t));
    }
};


} // namespace std


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value);


} // namespace gl



namespace gl
{


GLBINDING_CONSTEXPR inline BufferStorageMask operator|(const BufferStorageMask & a, const BufferStorageMask & b)
{
    return static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) | static_cast<std::underlying_type<BufferStorageMask>::type>(b));
}

inline BufferStorageMask & operator|=(BufferStorageMask & a, const BufferStorageMask & b)
{
    a = static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) | static_cast<std::underlying_type<BufferStorageMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline BufferStorageMask operator&(const BufferStorageMask & a, const BufferStorageMask & b)
{
    return static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) & static_cast<std::underlying_type<BufferStorageMask>::type>(b));
}

inline BufferStorageMask & operator&=(BufferStorageMask & a, const BufferStorageMask & b)
{
    a = static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) & static_cast<std::underlying_type<BufferStorageMask>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline BufferStorageMask operator^(const BufferStorageMask & a, const BufferStorageMask & b)
{
    return static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) ^ static_cast<std::underlying_type<BufferStorageMask>::type>(b));
}

inline BufferStorageMask & operator^=(BufferStorageMask & a, const BufferStorageMask & b)
{
    a = static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) ^ static_cast<std::underlying_type<BufferStorageMask>::type>(b));

    return a;
}


} // namespace gl

