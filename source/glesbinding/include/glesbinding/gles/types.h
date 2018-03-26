
#pragma once


#include <glesbinding/nogles.h>
#include <glesbinding/glesbinding_api.h>
#include <glesbinding/glesbinding_features.h>
#include <glesbinding/gles/boolean.h>

#include <cstddef>
#include <cstdint>
#include <array>
#include <KHR/khrplatform.h>

#include <string>


#ifdef _MSC_VER
#define GLES_APIENTRY __stdcall
#else
#define GLES_APIENTRY
#endif


namespace gles
{

using EGLint = int;
using EGLchar = char;
using EGLNativeDisplayType = void*;
using EGLNativePixmapType = void*;
using EGLNativeWindowType = void*;
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
using GLDEBUGPROC = void (GLES_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
using GLDEBUGPROCARB = void (GLES_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
using GLDEBUGPROCKHR = void (GLES_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
using GLbyte = khronos_int8_t;
using GLubyte = khronos_uint8_t;
using GLfloat = khronos_float_t;
using GLclampf = khronos_float_t;
using GLfixed = khronos_int32_t;
using GLint64 = khronos_int64_t;
using GLuint64 = khronos_uint64_t;
using GLint64EXT = khronos_int64_t;
using GLuint64EXT = khronos_uint64_t;
using GLintptr = khronos_intptr_t;
using GLsizeiptr = khronos_ssize_t;
using GLDEBUGPROCAMD = void (GLES_APIENTRY *)(GLuint id,GLenum category,GLenum severity,GLsizei length,const GLchar *message,void *userParam);
using GLhalfNV = unsigned short;
using GLvdpauSurfaceNV = GLintptr;
using GLVULKANPROCNV = void (GLES_APIENTRY *)(void);
using GLuint_array_2 = std::array<GLuint, 2>;
enum class AttribMask : unsigned int;
enum class BufferAccessMask : unsigned int;
enum class BufferBitQCOM : unsigned int;
enum class ClearBufferMask : unsigned int;
enum class ContextFlagMask : unsigned int;
enum class FoveationConfigBitQCOM : unsigned int;
enum class MapBufferUsageMask : unsigned int;
enum class MemoryBarrierMask : unsigned int;
enum class PathFontStyle : unsigned int;
enum class PathMetricMask : unsigned int;
enum class PathRenderingMaskNV : unsigned int;
enum class PerformanceQueryCapsMaskINTEL : unsigned int;
enum class SyncObjectMask : unsigned int;
enum class UseProgramStageMask : unsigned int;
enum class UnusedMask : unsigned int;
enum class BufferStorageMask : unsigned int;

} // namespace gles


// Type Integrations


namespace std
{


template<>
struct hash<gles::GLextension>
{
    hash<std::underlying_type<gles::GLextension>::type>::result_type operator()(const gles::GLextension & t) const
    {
        return hash<std::underlying_type<gles::GLextension>::type>()(static_cast<std::underlying_type<gles::GLextension>::type>(t));
    }
};


} // namespace std


namespace std
{


template<>
struct hash<gles::GLenum>
{
    hash<std::underlying_type<gles::GLenum>::type>::result_type operator()(const gles::GLenum & t) const
    {
        return hash<std::underlying_type<gles::GLenum>::type>()(static_cast<std::underlying_type<gles::GLenum>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline GLenum operator+(const GLenum & a, const std::underlying_type<GLenum>::type b)
{
    return static_cast<GLenum>(static_cast<std::underlying_type<GLenum>::type>(a) + b);
}

GLESBINDING_CONSTEXPR inline GLenum operator-(const GLenum & a, const std::underlying_type<GLenum>::type b)
{
    return static_cast<GLenum>(static_cast<std::underlying_type<GLenum>::type>(a) - b);
}


} // namespace gles


namespace gles{GLESBINDING_CONSTEXPR inline bool operator==(const GLenum & a, std::underlying_type<GLenum>::type b){    return static_cast<std::underlying_type<GLenum>::type>(a) == b;}GLESBINDING_CONSTEXPR inline bool operator!=(const GLenum & a, std::underlying_type<GLenum>::type b){    return static_cast<std::underlying_type<GLenum>::type>(a) != b;}GLESBINDING_CONSTEXPR inline bool operator< (const GLenum & a, std::underlying_type<GLenum>::type b){    return static_cast<std::underlying_type<GLenum>::type>(a) < b;}GLESBINDING_CONSTEXPR inline bool operator<=(const GLenum & a, std::underlying_type<GLenum>::type b){    return static_cast<std::underlying_type<GLenum>::type>(a) <= b;}GLESBINDING_CONSTEXPR inline bool operator> (const GLenum & a, std::underlying_type<GLenum>::type b){    return static_cast<std::underlying_type<GLenum>::type>(a) > b;}GLESBINDING_CONSTEXPR inline bool operator>=(const GLenum & a, std::underlying_type<GLenum>::type b){    return static_cast<std::underlying_type<GLenum>::type>(a) >= b;}GLESBINDING_CONSTEXPR inline bool operator==(std::underlying_type<GLenum>::type a, const GLenum & b){    return a == static_cast<std::underlying_type<GLenum>::type>(b);}GLESBINDING_CONSTEXPR inline bool operator!=(std::underlying_type<GLenum>::type a, const GLenum & b){    return a != static_cast<std::underlying_type<GLenum>::type>(b);}GLESBINDING_CONSTEXPR inline bool operator< (std::underlying_type<GLenum>::type a, const GLenum & b){    return a < static_cast<std::underlying_type<GLenum>::type>(b);}GLESBINDING_CONSTEXPR inline bool operator<=(std::underlying_type<GLenum>::type a, const GLenum & b){    return a <= static_cast<std::underlying_type<GLenum>::type>(b);}GLESBINDING_CONSTEXPR inline bool operator> (std::underlying_type<GLenum>::type a, const GLenum & b){    return a > static_cast<std::underlying_type<GLenum>::type>(b);}GLESBINDING_CONSTEXPR inline bool operator>=(std::underlying_type<GLenum>::type a, const GLenum & b){    return a >= static_cast<std::underlying_type<GLenum>::type>(b);}} // namespace gles


namespace std
{


template<>
struct hash<gles::AttribMask>
{
    hash<std::underlying_type<gles::AttribMask>::type>::result_type operator()(const gles::AttribMask & t) const
    {
        return hash<std::underlying_type<gles::AttribMask>::type>()(static_cast<std::underlying_type<gles::AttribMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline AttribMask operator|(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) | static_cast<std::underlying_type<AttribMask>::type>(b));
}

inline AttribMask & operator|=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) | static_cast<std::underlying_type<AttribMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline AttribMask operator&(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) & static_cast<std::underlying_type<AttribMask>::type>(b));
}

inline AttribMask & operator&=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) & static_cast<std::underlying_type<AttribMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline AttribMask operator^(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) ^ static_cast<std::underlying_type<AttribMask>::type>(b));
}

inline AttribMask & operator^=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) ^ static_cast<std::underlying_type<AttribMask>::type>(b));

    return a;
}


} // namespace gles



namespace std
{


template<>
struct hash<gles::BufferAccessMask>
{
    hash<std::underlying_type<gles::BufferAccessMask>::type>::result_type operator()(const gles::BufferAccessMask & t) const
    {
        return hash<std::underlying_type<gles::BufferAccessMask>::type>()(static_cast<std::underlying_type<gles::BufferAccessMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline BufferAccessMask operator|(const BufferAccessMask & a, const BufferAccessMask & b)
{
    return static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) | static_cast<std::underlying_type<BufferAccessMask>::type>(b));
}

inline BufferAccessMask & operator|=(BufferAccessMask & a, const BufferAccessMask & b)
{
    a = static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) | static_cast<std::underlying_type<BufferAccessMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline BufferAccessMask operator&(const BufferAccessMask & a, const BufferAccessMask & b)
{
    return static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) & static_cast<std::underlying_type<BufferAccessMask>::type>(b));
}

inline BufferAccessMask & operator&=(BufferAccessMask & a, const BufferAccessMask & b)
{
    a = static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) & static_cast<std::underlying_type<BufferAccessMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline BufferAccessMask operator^(const BufferAccessMask & a, const BufferAccessMask & b)
{
    return static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) ^ static_cast<std::underlying_type<BufferAccessMask>::type>(b));
}

inline BufferAccessMask & operator^=(BufferAccessMask & a, const BufferAccessMask & b)
{
    a = static_cast<BufferAccessMask>(static_cast<std::underlying_type<BufferAccessMask>::type>(a) ^ static_cast<std::underlying_type<BufferAccessMask>::type>(b));

    return a;
}


} // namespace gles



namespace std
{


template<>
struct hash<gles::BufferBitQCOM>
{
    hash<std::underlying_type<gles::BufferBitQCOM>::type>::result_type operator()(const gles::BufferBitQCOM & t) const
    {
        return hash<std::underlying_type<gles::BufferBitQCOM>::type>()(static_cast<std::underlying_type<gles::BufferBitQCOM>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline BufferBitQCOM operator|(const BufferBitQCOM & a, const BufferBitQCOM & b)
{
    return static_cast<BufferBitQCOM>(static_cast<std::underlying_type<BufferBitQCOM>::type>(a) | static_cast<std::underlying_type<BufferBitQCOM>::type>(b));
}

inline BufferBitQCOM & operator|=(BufferBitQCOM & a, const BufferBitQCOM & b)
{
    a = static_cast<BufferBitQCOM>(static_cast<std::underlying_type<BufferBitQCOM>::type>(a) | static_cast<std::underlying_type<BufferBitQCOM>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline BufferBitQCOM operator&(const BufferBitQCOM & a, const BufferBitQCOM & b)
{
    return static_cast<BufferBitQCOM>(static_cast<std::underlying_type<BufferBitQCOM>::type>(a) & static_cast<std::underlying_type<BufferBitQCOM>::type>(b));
}

inline BufferBitQCOM & operator&=(BufferBitQCOM & a, const BufferBitQCOM & b)
{
    a = static_cast<BufferBitQCOM>(static_cast<std::underlying_type<BufferBitQCOM>::type>(a) & static_cast<std::underlying_type<BufferBitQCOM>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline BufferBitQCOM operator^(const BufferBitQCOM & a, const BufferBitQCOM & b)
{
    return static_cast<BufferBitQCOM>(static_cast<std::underlying_type<BufferBitQCOM>::type>(a) ^ static_cast<std::underlying_type<BufferBitQCOM>::type>(b));
}

inline BufferBitQCOM & operator^=(BufferBitQCOM & a, const BufferBitQCOM & b)
{
    a = static_cast<BufferBitQCOM>(static_cast<std::underlying_type<BufferBitQCOM>::type>(a) ^ static_cast<std::underlying_type<BufferBitQCOM>::type>(b));

    return a;
}


} // namespace gles



namespace std
{


template<>
struct hash<gles::ClearBufferMask>
{
    hash<std::underlying_type<gles::ClearBufferMask>::type>::result_type operator()(const gles::ClearBufferMask & t) const
    {
        return hash<std::underlying_type<gles::ClearBufferMask>::type>()(static_cast<std::underlying_type<gles::ClearBufferMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline ClearBufferMask operator|(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) | static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

inline ClearBufferMask & operator|=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) | static_cast<std::underlying_type<ClearBufferMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline ClearBufferMask operator&(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) & static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

inline ClearBufferMask & operator&=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) & static_cast<std::underlying_type<ClearBufferMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline ClearBufferMask operator^(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) ^ static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

inline ClearBufferMask & operator^=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) ^ static_cast<std::underlying_type<ClearBufferMask>::type>(b));

    return a;
}


} // namespace gles



namespace std
{


template<>
struct hash<gles::ContextFlagMask>
{
    hash<std::underlying_type<gles::ContextFlagMask>::type>::result_type operator()(const gles::ContextFlagMask & t) const
    {
        return hash<std::underlying_type<gles::ContextFlagMask>::type>()(static_cast<std::underlying_type<gles::ContextFlagMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline ContextFlagMask operator|(const ContextFlagMask & a, const ContextFlagMask & b)
{
    return static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) | static_cast<std::underlying_type<ContextFlagMask>::type>(b));
}

inline ContextFlagMask & operator|=(ContextFlagMask & a, const ContextFlagMask & b)
{
    a = static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) | static_cast<std::underlying_type<ContextFlagMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline ContextFlagMask operator&(const ContextFlagMask & a, const ContextFlagMask & b)
{
    return static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) & static_cast<std::underlying_type<ContextFlagMask>::type>(b));
}

inline ContextFlagMask & operator&=(ContextFlagMask & a, const ContextFlagMask & b)
{
    a = static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) & static_cast<std::underlying_type<ContextFlagMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline ContextFlagMask operator^(const ContextFlagMask & a, const ContextFlagMask & b)
{
    return static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) ^ static_cast<std::underlying_type<ContextFlagMask>::type>(b));
}

inline ContextFlagMask & operator^=(ContextFlagMask & a, const ContextFlagMask & b)
{
    a = static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) ^ static_cast<std::underlying_type<ContextFlagMask>::type>(b));

    return a;
}


} // namespace gles



namespace std
{


template<>
struct hash<gles::FoveationConfigBitQCOM>
{
    hash<std::underlying_type<gles::FoveationConfigBitQCOM>::type>::result_type operator()(const gles::FoveationConfigBitQCOM & t) const
    {
        return hash<std::underlying_type<gles::FoveationConfigBitQCOM>::type>()(static_cast<std::underlying_type<gles::FoveationConfigBitQCOM>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline FoveationConfigBitQCOM operator|(const FoveationConfigBitQCOM & a, const FoveationConfigBitQCOM & b)
{
    return static_cast<FoveationConfigBitQCOM>(static_cast<std::underlying_type<FoveationConfigBitQCOM>::type>(a) | static_cast<std::underlying_type<FoveationConfigBitQCOM>::type>(b));
}

inline FoveationConfigBitQCOM & operator|=(FoveationConfigBitQCOM & a, const FoveationConfigBitQCOM & b)
{
    a = static_cast<FoveationConfigBitQCOM>(static_cast<std::underlying_type<FoveationConfigBitQCOM>::type>(a) | static_cast<std::underlying_type<FoveationConfigBitQCOM>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline FoveationConfigBitQCOM operator&(const FoveationConfigBitQCOM & a, const FoveationConfigBitQCOM & b)
{
    return static_cast<FoveationConfigBitQCOM>(static_cast<std::underlying_type<FoveationConfigBitQCOM>::type>(a) & static_cast<std::underlying_type<FoveationConfigBitQCOM>::type>(b));
}

inline FoveationConfigBitQCOM & operator&=(FoveationConfigBitQCOM & a, const FoveationConfigBitQCOM & b)
{
    a = static_cast<FoveationConfigBitQCOM>(static_cast<std::underlying_type<FoveationConfigBitQCOM>::type>(a) & static_cast<std::underlying_type<FoveationConfigBitQCOM>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline FoveationConfigBitQCOM operator^(const FoveationConfigBitQCOM & a, const FoveationConfigBitQCOM & b)
{
    return static_cast<FoveationConfigBitQCOM>(static_cast<std::underlying_type<FoveationConfigBitQCOM>::type>(a) ^ static_cast<std::underlying_type<FoveationConfigBitQCOM>::type>(b));
}

inline FoveationConfigBitQCOM & operator^=(FoveationConfigBitQCOM & a, const FoveationConfigBitQCOM & b)
{
    a = static_cast<FoveationConfigBitQCOM>(static_cast<std::underlying_type<FoveationConfigBitQCOM>::type>(a) ^ static_cast<std::underlying_type<FoveationConfigBitQCOM>::type>(b));

    return a;
}


} // namespace gles



namespace std
{


template<>
struct hash<gles::MapBufferUsageMask>
{
    hash<std::underlying_type<gles::MapBufferUsageMask>::type>::result_type operator()(const gles::MapBufferUsageMask & t) const
    {
        return hash<std::underlying_type<gles::MapBufferUsageMask>::type>()(static_cast<std::underlying_type<gles::MapBufferUsageMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline MapBufferUsageMask operator|(const MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    return static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) | static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));
}

inline MapBufferUsageMask & operator|=(MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    a = static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) | static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline MapBufferUsageMask operator&(const MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    return static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) & static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));
}

inline MapBufferUsageMask & operator&=(MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    a = static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) & static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline MapBufferUsageMask operator^(const MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    return static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) ^ static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));
}

inline MapBufferUsageMask & operator^=(MapBufferUsageMask & a, const MapBufferUsageMask & b)
{
    a = static_cast<MapBufferUsageMask>(static_cast<std::underlying_type<MapBufferUsageMask>::type>(a) ^ static_cast<std::underlying_type<MapBufferUsageMask>::type>(b));

    return a;
}


} // namespace gles



namespace std
{


template<>
struct hash<gles::MemoryBarrierMask>
{
    hash<std::underlying_type<gles::MemoryBarrierMask>::type>::result_type operator()(const gles::MemoryBarrierMask & t) const
    {
        return hash<std::underlying_type<gles::MemoryBarrierMask>::type>()(static_cast<std::underlying_type<gles::MemoryBarrierMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline MemoryBarrierMask operator|(const MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    return static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) | static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
}

inline MemoryBarrierMask & operator|=(MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    a = static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) | static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline MemoryBarrierMask operator&(const MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    return static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) & static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
}

inline MemoryBarrierMask & operator&=(MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    a = static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) & static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline MemoryBarrierMask operator^(const MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    return static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) ^ static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
}

inline MemoryBarrierMask & operator^=(MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    a = static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) ^ static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));

    return a;
}


} // namespace gles



namespace std
{


template<>
struct hash<gles::PathFontStyle>
{
    hash<std::underlying_type<gles::PathFontStyle>::type>::result_type operator()(const gles::PathFontStyle & t) const
    {
        return hash<std::underlying_type<gles::PathFontStyle>::type>()(static_cast<std::underlying_type<gles::PathFontStyle>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline PathFontStyle operator|(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) | static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

inline PathFontStyle & operator|=(PathFontStyle & a, const PathFontStyle & b)
{
    a = static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) | static_cast<std::underlying_type<PathFontStyle>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline PathFontStyle operator&(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) & static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

inline PathFontStyle & operator&=(PathFontStyle & a, const PathFontStyle & b)
{
    a = static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) & static_cast<std::underlying_type<PathFontStyle>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline PathFontStyle operator^(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) ^ static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

inline PathFontStyle & operator^=(PathFontStyle & a, const PathFontStyle & b)
{
    a = static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) ^ static_cast<std::underlying_type<PathFontStyle>::type>(b));

    return a;
}


} // namespace gles



namespace std
{


template<>
struct hash<gles::PathMetricMask>
{
    hash<std::underlying_type<gles::PathMetricMask>::type>::result_type operator()(const gles::PathMetricMask & t) const
    {
        return hash<std::underlying_type<gles::PathMetricMask>::type>()(static_cast<std::underlying_type<gles::PathMetricMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline PathMetricMask operator|(const PathMetricMask & a, const PathMetricMask & b)
{
    return static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) | static_cast<std::underlying_type<PathMetricMask>::type>(b));
}

inline PathMetricMask & operator|=(PathMetricMask & a, const PathMetricMask & b)
{
    a = static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) | static_cast<std::underlying_type<PathMetricMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline PathMetricMask operator&(const PathMetricMask & a, const PathMetricMask & b)
{
    return static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) & static_cast<std::underlying_type<PathMetricMask>::type>(b));
}

inline PathMetricMask & operator&=(PathMetricMask & a, const PathMetricMask & b)
{
    a = static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) & static_cast<std::underlying_type<PathMetricMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline PathMetricMask operator^(const PathMetricMask & a, const PathMetricMask & b)
{
    return static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) ^ static_cast<std::underlying_type<PathMetricMask>::type>(b));
}

inline PathMetricMask & operator^=(PathMetricMask & a, const PathMetricMask & b)
{
    a = static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) ^ static_cast<std::underlying_type<PathMetricMask>::type>(b));

    return a;
}


} // namespace gles



namespace std
{


template<>
struct hash<gles::PathRenderingMaskNV>
{
    hash<std::underlying_type<gles::PathRenderingMaskNV>::type>::result_type operator()(const gles::PathRenderingMaskNV & t) const
    {
        return hash<std::underlying_type<gles::PathRenderingMaskNV>::type>()(static_cast<std::underlying_type<gles::PathRenderingMaskNV>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline PathRenderingMaskNV operator|(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    return static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) | static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));
}

inline PathRenderingMaskNV & operator|=(PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    a = static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) | static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline PathRenderingMaskNV operator&(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    return static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) & static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));
}

inline PathRenderingMaskNV & operator&=(PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    a = static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) & static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline PathRenderingMaskNV operator^(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    return static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) ^ static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));
}

inline PathRenderingMaskNV & operator^=(PathRenderingMaskNV & a, const PathRenderingMaskNV & b)
{
    a = static_cast<PathRenderingMaskNV>(static_cast<std::underlying_type<PathRenderingMaskNV>::type>(a) ^ static_cast<std::underlying_type<PathRenderingMaskNV>::type>(b));

    return a;
}


} // namespace gles



namespace std
{


template<>
struct hash<gles::PerformanceQueryCapsMaskINTEL>
{
    hash<std::underlying_type<gles::PerformanceQueryCapsMaskINTEL>::type>::result_type operator()(const gles::PerformanceQueryCapsMaskINTEL & t) const
    {
        return hash<std::underlying_type<gles::PerformanceQueryCapsMaskINTEL>::type>()(static_cast<std::underlying_type<gles::PerformanceQueryCapsMaskINTEL>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline PerformanceQueryCapsMaskINTEL operator|(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) | static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
}

inline PerformanceQueryCapsMaskINTEL & operator|=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    a = static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) | static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline PerformanceQueryCapsMaskINTEL operator&(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) & static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
}

inline PerformanceQueryCapsMaskINTEL & operator&=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    a = static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) & static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline PerformanceQueryCapsMaskINTEL operator^(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) ^ static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
}

inline PerformanceQueryCapsMaskINTEL & operator^=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    a = static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) ^ static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));

    return a;
}


} // namespace gles



namespace std
{


template<>
struct hash<gles::SyncObjectMask>
{
    hash<std::underlying_type<gles::SyncObjectMask>::type>::result_type operator()(const gles::SyncObjectMask & t) const
    {
        return hash<std::underlying_type<gles::SyncObjectMask>::type>()(static_cast<std::underlying_type<gles::SyncObjectMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline SyncObjectMask operator|(const SyncObjectMask & a, const SyncObjectMask & b)
{
    return static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) | static_cast<std::underlying_type<SyncObjectMask>::type>(b));
}

inline SyncObjectMask & operator|=(SyncObjectMask & a, const SyncObjectMask & b)
{
    a = static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) | static_cast<std::underlying_type<SyncObjectMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline SyncObjectMask operator&(const SyncObjectMask & a, const SyncObjectMask & b)
{
    return static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) & static_cast<std::underlying_type<SyncObjectMask>::type>(b));
}

inline SyncObjectMask & operator&=(SyncObjectMask & a, const SyncObjectMask & b)
{
    a = static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) & static_cast<std::underlying_type<SyncObjectMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline SyncObjectMask operator^(const SyncObjectMask & a, const SyncObjectMask & b)
{
    return static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) ^ static_cast<std::underlying_type<SyncObjectMask>::type>(b));
}

inline SyncObjectMask & operator^=(SyncObjectMask & a, const SyncObjectMask & b)
{
    a = static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) ^ static_cast<std::underlying_type<SyncObjectMask>::type>(b));

    return a;
}


} // namespace gles



namespace std
{


template<>
struct hash<gles::UseProgramStageMask>
{
    hash<std::underlying_type<gles::UseProgramStageMask>::type>::result_type operator()(const gles::UseProgramStageMask & t) const
    {
        return hash<std::underlying_type<gles::UseProgramStageMask>::type>()(static_cast<std::underlying_type<gles::UseProgramStageMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline UseProgramStageMask operator|(const UseProgramStageMask & a, const UseProgramStageMask & b)
{
    return static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) | static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
}

inline UseProgramStageMask & operator|=(UseProgramStageMask & a, const UseProgramStageMask & b)
{
    a = static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) | static_cast<std::underlying_type<UseProgramStageMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline UseProgramStageMask operator&(const UseProgramStageMask & a, const UseProgramStageMask & b)
{
    return static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) & static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
}

inline UseProgramStageMask & operator&=(UseProgramStageMask & a, const UseProgramStageMask & b)
{
    a = static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) & static_cast<std::underlying_type<UseProgramStageMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline UseProgramStageMask operator^(const UseProgramStageMask & a, const UseProgramStageMask & b)
{
    return static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) ^ static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
}

inline UseProgramStageMask & operator^=(UseProgramStageMask & a, const UseProgramStageMask & b)
{
    a = static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) ^ static_cast<std::underlying_type<UseProgramStageMask>::type>(b));

    return a;
}


} // namespace gles



namespace std
{


template<>
struct hash<gles::UnusedMask>
{
    hash<std::underlying_type<gles::UnusedMask>::type>::result_type operator()(const gles::UnusedMask & t) const
    {
        return hash<std::underlying_type<gles::UnusedMask>::type>()(static_cast<std::underlying_type<gles::UnusedMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline UnusedMask operator|(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) | static_cast<std::underlying_type<UnusedMask>::type>(b));
}

inline UnusedMask & operator|=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) | static_cast<std::underlying_type<UnusedMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline UnusedMask operator&(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) & static_cast<std::underlying_type<UnusedMask>::type>(b));
}

inline UnusedMask & operator&=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) & static_cast<std::underlying_type<UnusedMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline UnusedMask operator^(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) ^ static_cast<std::underlying_type<UnusedMask>::type>(b));
}

inline UnusedMask & operator^=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) ^ static_cast<std::underlying_type<UnusedMask>::type>(b));

    return a;
}


} // namespace gles



namespace std
{


template<>
struct hash<gles::BufferStorageMask>
{
    hash<std::underlying_type<gles::BufferStorageMask>::type>::result_type operator()(const gles::BufferStorageMask & t) const
    {
        return hash<std::underlying_type<gles::BufferStorageMask>::type>()(static_cast<std::underlying_type<gles::BufferStorageMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline BufferStorageMask operator|(const BufferStorageMask & a, const BufferStorageMask & b)
{
    return static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) | static_cast<std::underlying_type<BufferStorageMask>::type>(b));
}

inline BufferStorageMask & operator|=(BufferStorageMask & a, const BufferStorageMask & b)
{
    a = static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) | static_cast<std::underlying_type<BufferStorageMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline BufferStorageMask operator&(const BufferStorageMask & a, const BufferStorageMask & b)
{
    return static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) & static_cast<std::underlying_type<BufferStorageMask>::type>(b));
}

inline BufferStorageMask & operator&=(BufferStorageMask & a, const BufferStorageMask & b)
{
    a = static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) & static_cast<std::underlying_type<BufferStorageMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline BufferStorageMask operator^(const BufferStorageMask & a, const BufferStorageMask & b)
{
    return static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) ^ static_cast<std::underlying_type<BufferStorageMask>::type>(b));
}

inline BufferStorageMask & operator^=(BufferStorageMask & a, const BufferStorageMask & b)
{
    a = static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) ^ static_cast<std::underlying_type<BufferStorageMask>::type>(b));

    return a;
}


} // namespace gles


