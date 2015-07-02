#pragma once

#include <glesbinding/nogles.h>
#include <glesbinding/glesbinding_api.h>

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

#include <KHR/khrplatform.h>

namespace gles
{

enum class GLextension : int;
#ifndef GLEXT_64_TYPES_DEFINED
/* This code block is duplicated in glxext.h, so must be protected */
#define GLEXT_64_TYPES_DEFINED
/* Define int32_t, int64_t, and uint64_t types for UST/MSC */
/* (as used in the GL_EXT_timer_query extension). */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#include <inttypes.h>
#elif defined(__sun__) || defined(__digital__)
#include <inttypes.h>
#if defined(__STDC__)
#if defined(__arch64__) || defined(_LP64)
typedef long int int64_t;
typedef unsigned long int uint64_t;
#else
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
#endif /* __arch64__ */
#endif /* __STDC__ */
#elif defined( __VMS ) || defined(__sgi)
#include <inttypes.h>
#elif defined(__SCO__) || defined(__USLC__)
#include <stdint.h>
#elif defined(__UNIXOS2__) || defined(__SOL64__)
typedef long int int32_t;
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
#elif defined(_WIN32) && defined(__GNUC__)
#include <stdint.h>
#elif defined(_WIN32)
typedef __int32 int32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;
#else
/* Fallback if nothing above works */
#include <inttypes.h>
#endif
#endif
enum class GLenum : unsigned int;
enum class GLboolean : unsigned int;
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
using GLeglImageOES = void *;
using GLchar = char;
using GLcharARB = char;
#ifdef __APPLE__
typedef void *GLhandleARB;
#else
typedef unsigned int GLhandleARB;
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
using GLDEBUGPROCAMD = void (GL_APIENTRY *)(GLuint id,GLenum category,GLenum severity,GLsizei length,const GLchar *message,void *userParam);
using GLhalfNV = unsigned short;
using GLvdpauSurfaceNV = GLintptr;
using GLuint_array_2 = std::array<GLuint, 2>;
enum class AttribMask : unsigned int;
enum class BufferBitQCOM : unsigned int;
enum class ClearBufferMask : unsigned int;
enum class ContextFlagMask : unsigned int;
enum class MapBufferUsageMask : unsigned int;
enum class MemoryBarrierMask : unsigned int;
enum class PathRenderingMaskNV : unsigned int;
enum class PerformanceQueryCapsMaskINTEL : unsigned int;
enum class SyncObjectMask : unsigned int;
enum class UseProgramStageMask : unsigned int;
enum class UnusedMask : unsigned int;
enum class BufferAccessMask : unsigned int;
enum class BufferStorageMask : unsigned int;
enum class PathFontStyle : unsigned int;

} // namespace gles


// Type Integrations


namespace std
{

template<>
struct hash<gles::GLenum>
{
    using type = gles::GLenum;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std


namespace gles
{

GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const GLenum & value);

} // namespace gles


namespace gles
{

GLESBINDING_API GLenum operator+(const GLenum & a, std::underlying_type<GLenum>::type b);
GLESBINDING_API GLenum operator-(const GLenum & a, std::underlying_type<GLenum>::type b);

} // namespace gles


namespace gles
{

GLESBINDING_API bool operator==(const GLenum & a, std::underlying_type<GLenum>::type b);
GLESBINDING_API bool operator!=(const GLenum & a, std::underlying_type<GLenum>::type b);
GLESBINDING_API bool operator< (const GLenum & a, std::underlying_type<GLenum>::type b);
GLESBINDING_API bool operator<=(const GLenum & a, std::underlying_type<GLenum>::type b);
GLESBINDING_API bool operator> (const GLenum & a, std::underlying_type<GLenum>::type b);
GLESBINDING_API bool operator>=(const GLenum & a, std::underlying_type<GLenum>::type b);

GLESBINDING_API bool operator==(std::underlying_type<GLenum>::type a, const GLenum & b);
GLESBINDING_API bool operator!=(std::underlying_type<GLenum>::type a, const GLenum & b);
GLESBINDING_API bool operator< (std::underlying_type<GLenum>::type a, const GLenum & b);
GLESBINDING_API bool operator<=(std::underlying_type<GLenum>::type a, const GLenum & b);
GLESBINDING_API bool operator> (std::underlying_type<GLenum>::type a, const GLenum & b);
GLESBINDING_API bool operator>=(std::underlying_type<GLenum>::type a, const GLenum & b);

} // namespace gles


namespace std
{

template<>
struct hash<gles::GLboolean>
{
    using type = gles::GLboolean;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std


namespace gles
{

GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const GLboolean & value);

} // namespace gles


namespace gles
{

GLESBINDING_API bool operator!(const GLboolean & a);

} // namespace gles


namespace std
{

template<>
struct hash<gles::GLextension>
{
    using type = gles::GLextension;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std


namespace gles
{

GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const GLextension & value);

} // namespace gles


namespace std
{

template<>
struct hash<gles::AttribMask>
{
    using type = gles::AttribMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gles
{

GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const AttribMask & value);

} // namespace gles

namespace gles
{

GLESBINDING_API AttribMask operator|(const AttribMask & a, const AttribMask & b);
GLESBINDING_API AttribMask operator&(const AttribMask & a, const AttribMask & b);
GLESBINDING_API AttribMask operator^(const AttribMask & a, const AttribMask & b);

} // namespace gles


namespace std
{

template<>
struct hash<gles::BufferBitQCOM>
{
    using type = gles::BufferBitQCOM;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gles
{

GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const BufferBitQCOM & value);

} // namespace gles

namespace gles
{

GLESBINDING_API BufferBitQCOM operator|(const BufferBitQCOM & a, const BufferBitQCOM & b);
GLESBINDING_API BufferBitQCOM operator&(const BufferBitQCOM & a, const BufferBitQCOM & b);
GLESBINDING_API BufferBitQCOM operator^(const BufferBitQCOM & a, const BufferBitQCOM & b);

} // namespace gles


namespace std
{

template<>
struct hash<gles::ClearBufferMask>
{
    using type = gles::ClearBufferMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gles
{

GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value);

} // namespace gles

namespace gles
{

GLESBINDING_API ClearBufferMask operator|(const ClearBufferMask & a, const ClearBufferMask & b);
GLESBINDING_API ClearBufferMask operator&(const ClearBufferMask & a, const ClearBufferMask & b);
GLESBINDING_API ClearBufferMask operator^(const ClearBufferMask & a, const ClearBufferMask & b);

} // namespace gles


namespace std
{

template<>
struct hash<gles::ContextFlagMask>
{
    using type = gles::ContextFlagMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gles
{

GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value);

} // namespace gles

namespace gles
{

GLESBINDING_API ContextFlagMask operator|(const ContextFlagMask & a, const ContextFlagMask & b);
GLESBINDING_API ContextFlagMask operator&(const ContextFlagMask & a, const ContextFlagMask & b);
GLESBINDING_API ContextFlagMask operator^(const ContextFlagMask & a, const ContextFlagMask & b);

} // namespace gles


namespace std
{

template<>
struct hash<gles::MapBufferUsageMask>
{
    using type = gles::MapBufferUsageMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gles
{

GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const MapBufferUsageMask & value);

} // namespace gles

namespace gles
{

GLESBINDING_API MapBufferUsageMask operator|(const MapBufferUsageMask & a, const MapBufferUsageMask & b);
GLESBINDING_API MapBufferUsageMask operator&(const MapBufferUsageMask & a, const MapBufferUsageMask & b);
GLESBINDING_API MapBufferUsageMask operator^(const MapBufferUsageMask & a, const MapBufferUsageMask & b);

} // namespace gles


namespace std
{

template<>
struct hash<gles::MemoryBarrierMask>
{
    using type = gles::MemoryBarrierMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gles
{

GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value);

} // namespace gles

namespace gles
{

GLESBINDING_API MemoryBarrierMask operator|(const MemoryBarrierMask & a, const MemoryBarrierMask & b);
GLESBINDING_API MemoryBarrierMask operator&(const MemoryBarrierMask & a, const MemoryBarrierMask & b);
GLESBINDING_API MemoryBarrierMask operator^(const MemoryBarrierMask & a, const MemoryBarrierMask & b);

} // namespace gles


namespace std
{

template<>
struct hash<gles::PathRenderingMaskNV>
{
    using type = gles::PathRenderingMaskNV;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gles
{

GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value);

} // namespace gles

namespace gles
{

GLESBINDING_API PathRenderingMaskNV operator|(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b);
GLESBINDING_API PathRenderingMaskNV operator&(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b);
GLESBINDING_API PathRenderingMaskNV operator^(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b);

} // namespace gles


namespace std
{

template<>
struct hash<gles::PerformanceQueryCapsMaskINTEL>
{
    using type = gles::PerformanceQueryCapsMaskINTEL;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gles
{

GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value);

} // namespace gles

namespace gles
{

GLESBINDING_API PerformanceQueryCapsMaskINTEL operator|(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);
GLESBINDING_API PerformanceQueryCapsMaskINTEL operator&(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);
GLESBINDING_API PerformanceQueryCapsMaskINTEL operator^(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);

} // namespace gles


namespace std
{

template<>
struct hash<gles::SyncObjectMask>
{
    using type = gles::SyncObjectMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gles
{

GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value);

} // namespace gles

namespace gles
{

GLESBINDING_API SyncObjectMask operator|(const SyncObjectMask & a, const SyncObjectMask & b);
GLESBINDING_API SyncObjectMask operator&(const SyncObjectMask & a, const SyncObjectMask & b);
GLESBINDING_API SyncObjectMask operator^(const SyncObjectMask & a, const SyncObjectMask & b);

} // namespace gles


namespace std
{

template<>
struct hash<gles::UseProgramStageMask>
{
    using type = gles::UseProgramStageMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gles
{

GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value);

} // namespace gles

namespace gles
{

GLESBINDING_API UseProgramStageMask operator|(const UseProgramStageMask & a, const UseProgramStageMask & b);
GLESBINDING_API UseProgramStageMask operator&(const UseProgramStageMask & a, const UseProgramStageMask & b);
GLESBINDING_API UseProgramStageMask operator^(const UseProgramStageMask & a, const UseProgramStageMask & b);

} // namespace gles


namespace std
{

template<>
struct hash<gles::UnusedMask>
{
    using type = gles::UnusedMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gles
{

GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const UnusedMask & value);

} // namespace gles

namespace gles
{

GLESBINDING_API UnusedMask operator|(const UnusedMask & a, const UnusedMask & b);
GLESBINDING_API UnusedMask operator&(const UnusedMask & a, const UnusedMask & b);
GLESBINDING_API UnusedMask operator^(const UnusedMask & a, const UnusedMask & b);

} // namespace gles


namespace std
{

template<>
struct hash<gles::BufferAccessMask>
{
    using type = gles::BufferAccessMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gles
{

GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const BufferAccessMask & value);

} // namespace gles

namespace gles
{

GLESBINDING_API BufferAccessMask operator|(const BufferAccessMask & a, const BufferAccessMask & b);
GLESBINDING_API BufferAccessMask operator&(const BufferAccessMask & a, const BufferAccessMask & b);
GLESBINDING_API BufferAccessMask operator^(const BufferAccessMask & a, const BufferAccessMask & b);

} // namespace gles


namespace std
{

template<>
struct hash<gles::BufferStorageMask>
{
    using type = gles::BufferStorageMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gles
{

GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value);

} // namespace gles

namespace gles
{

GLESBINDING_API BufferStorageMask operator|(const BufferStorageMask & a, const BufferStorageMask & b);
GLESBINDING_API BufferStorageMask operator&(const BufferStorageMask & a, const BufferStorageMask & b);
GLESBINDING_API BufferStorageMask operator^(const BufferStorageMask & a, const BufferStorageMask & b);

} // namespace gles


namespace std
{

template<>
struct hash<gles::PathFontStyle>
{
    using type = gles::PathFontStyle;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gles
{

GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value);

} // namespace gles

namespace gles
{

GLESBINDING_API PathFontStyle operator|(const PathFontStyle & a, const PathFontStyle & b);
GLESBINDING_API PathFontStyle operator&(const PathFontStyle & a, const PathFontStyle & b);
GLESBINDING_API PathFontStyle operator^(const PathFontStyle & a, const PathFontStyle & b);

} // namespace gles

