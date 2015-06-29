#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

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

namespace gl
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
using GLDEBUGPROCAMD = void (GL_APIENTRY *)(GLuint id,GLenum category,GLenum severity,GLsizei length,const GLchar *message,void *userParam);
using GLhalfNV = unsigned short;
using GLvdpauSurfaceNV = GLintptr;
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
enum class PathRenderingMaskNV : unsigned int;
enum class PerformanceQueryCapsMaskINTEL : unsigned int;
enum class SyncObjectMask : unsigned int;
enum class TextureStorageMaskAMD : unsigned int;
enum class UseProgramStageMask : unsigned int;
enum class VertexHintsMaskPGI : unsigned int;
enum class UnusedMask : unsigned int;
enum class BufferAccessMask : unsigned int;
enum class BufferStorageMask : unsigned int;
enum class PathFontStyle : unsigned int;

} // namespace gl


// Type Integrations


namespace std
{

template<>
struct hash<gl::GLenum>
{
    using type = gl::GLenum;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std


namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const GLenum & value);

} // namespace gl


namespace gl
{

GLBINDING_API GLenum operator+(const GLenum & a, std::underlying_type<GLenum>::type b);
GLBINDING_API GLenum operator-(const GLenum & a, std::underlying_type<GLenum>::type b);

} // namespace gl


namespace gl
{

GLBINDING_API bool operator==(const GLenum & a, std::underlying_type<GLenum>::type b);
GLBINDING_API bool operator!=(const GLenum & a, std::underlying_type<GLenum>::type b);
GLBINDING_API bool operator< (const GLenum & a, std::underlying_type<GLenum>::type b);
GLBINDING_API bool operator<=(const GLenum & a, std::underlying_type<GLenum>::type b);
GLBINDING_API bool operator> (const GLenum & a, std::underlying_type<GLenum>::type b);
GLBINDING_API bool operator>=(const GLenum & a, std::underlying_type<GLenum>::type b);

GLBINDING_API bool operator==(std::underlying_type<GLenum>::type a, const GLenum & b);
GLBINDING_API bool operator!=(std::underlying_type<GLenum>::type a, const GLenum & b);
GLBINDING_API bool operator< (std::underlying_type<GLenum>::type a, const GLenum & b);
GLBINDING_API bool operator<=(std::underlying_type<GLenum>::type a, const GLenum & b);
GLBINDING_API bool operator> (std::underlying_type<GLenum>::type a, const GLenum & b);
GLBINDING_API bool operator>=(std::underlying_type<GLenum>::type a, const GLenum & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::GLboolean>
{
    using type = gl::GLboolean;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std


namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const GLboolean & value);

} // namespace gl


namespace std
{

template<>
struct hash<gl::GLextension>
{
    using type = gl::GLextension;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
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
struct hash<gl::AttribMask>
{
    using type = gl::AttribMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const AttribMask & value);

} // namespace gl

namespace gl
{

GLBINDING_API AttribMask operator|(const AttribMask & a, const AttribMask & b);
GLBINDING_API AttribMask operator&(const AttribMask & a, const AttribMask & b);
GLBINDING_API AttribMask operator^(const AttribMask & a, const AttribMask & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::ClearBufferMask>
{
    using type = gl::ClearBufferMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value);

} // namespace gl

namespace gl
{

GLBINDING_API ClearBufferMask operator|(const ClearBufferMask & a, const ClearBufferMask & b);
GLBINDING_API ClearBufferMask operator&(const ClearBufferMask & a, const ClearBufferMask & b);
GLBINDING_API ClearBufferMask operator^(const ClearBufferMask & a, const ClearBufferMask & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::ClientAttribMask>
{
    using type = gl::ClientAttribMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const ClientAttribMask & value);

} // namespace gl

namespace gl
{

GLBINDING_API ClientAttribMask operator|(const ClientAttribMask & a, const ClientAttribMask & b);
GLBINDING_API ClientAttribMask operator&(const ClientAttribMask & a, const ClientAttribMask & b);
GLBINDING_API ClientAttribMask operator^(const ClientAttribMask & a, const ClientAttribMask & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::ContextFlagMask>
{
    using type = gl::ContextFlagMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value);

} // namespace gl

namespace gl
{

GLBINDING_API ContextFlagMask operator|(const ContextFlagMask & a, const ContextFlagMask & b);
GLBINDING_API ContextFlagMask operator&(const ContextFlagMask & a, const ContextFlagMask & b);
GLBINDING_API ContextFlagMask operator^(const ContextFlagMask & a, const ContextFlagMask & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::ContextProfileMask>
{
    using type = gl::ContextProfileMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const ContextProfileMask & value);

} // namespace gl

namespace gl
{

GLBINDING_API ContextProfileMask operator|(const ContextProfileMask & a, const ContextProfileMask & b);
GLBINDING_API ContextProfileMask operator&(const ContextProfileMask & a, const ContextProfileMask & b);
GLBINDING_API ContextProfileMask operator^(const ContextProfileMask & a, const ContextProfileMask & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::FfdMaskSGIX>
{
    using type = gl::FfdMaskSGIX;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const FfdMaskSGIX & value);

} // namespace gl

namespace gl
{

GLBINDING_API FfdMaskSGIX operator|(const FfdMaskSGIX & a, const FfdMaskSGIX & b);
GLBINDING_API FfdMaskSGIX operator&(const FfdMaskSGIX & a, const FfdMaskSGIX & b);
GLBINDING_API FfdMaskSGIX operator^(const FfdMaskSGIX & a, const FfdMaskSGIX & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::FragmentShaderColorModMaskATI>
{
    using type = gl::FragmentShaderColorModMaskATI;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderColorModMaskATI & value);

} // namespace gl

namespace gl
{

GLBINDING_API FragmentShaderColorModMaskATI operator|(const FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b);
GLBINDING_API FragmentShaderColorModMaskATI operator&(const FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b);
GLBINDING_API FragmentShaderColorModMaskATI operator^(const FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::FragmentShaderDestMaskATI>
{
    using type = gl::FragmentShaderDestMaskATI;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestMaskATI & value);

} // namespace gl

namespace gl
{

GLBINDING_API FragmentShaderDestMaskATI operator|(const FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b);
GLBINDING_API FragmentShaderDestMaskATI operator&(const FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b);
GLBINDING_API FragmentShaderDestMaskATI operator^(const FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::FragmentShaderDestModMaskATI>
{
    using type = gl::FragmentShaderDestModMaskATI;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestModMaskATI & value);

} // namespace gl

namespace gl
{

GLBINDING_API FragmentShaderDestModMaskATI operator|(const FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b);
GLBINDING_API FragmentShaderDestModMaskATI operator&(const FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b);
GLBINDING_API FragmentShaderDestModMaskATI operator^(const FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::MapBufferUsageMask>
{
    using type = gl::MapBufferUsageMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const MapBufferUsageMask & value);

} // namespace gl

namespace gl
{

GLBINDING_API MapBufferUsageMask operator|(const MapBufferUsageMask & a, const MapBufferUsageMask & b);
GLBINDING_API MapBufferUsageMask operator&(const MapBufferUsageMask & a, const MapBufferUsageMask & b);
GLBINDING_API MapBufferUsageMask operator^(const MapBufferUsageMask & a, const MapBufferUsageMask & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::MemoryBarrierMask>
{
    using type = gl::MemoryBarrierMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value);

} // namespace gl

namespace gl
{

GLBINDING_API MemoryBarrierMask operator|(const MemoryBarrierMask & a, const MemoryBarrierMask & b);
GLBINDING_API MemoryBarrierMask operator&(const MemoryBarrierMask & a, const MemoryBarrierMask & b);
GLBINDING_API MemoryBarrierMask operator^(const MemoryBarrierMask & a, const MemoryBarrierMask & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::PathRenderingMaskNV>
{
    using type = gl::PathRenderingMaskNV;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value);

} // namespace gl

namespace gl
{

GLBINDING_API PathRenderingMaskNV operator|(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b);
GLBINDING_API PathRenderingMaskNV operator&(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b);
GLBINDING_API PathRenderingMaskNV operator^(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::PerformanceQueryCapsMaskINTEL>
{
    using type = gl::PerformanceQueryCapsMaskINTEL;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value);

} // namespace gl

namespace gl
{

GLBINDING_API PerformanceQueryCapsMaskINTEL operator|(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);
GLBINDING_API PerformanceQueryCapsMaskINTEL operator&(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);
GLBINDING_API PerformanceQueryCapsMaskINTEL operator^(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::SyncObjectMask>
{
    using type = gl::SyncObjectMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value);

} // namespace gl

namespace gl
{

GLBINDING_API SyncObjectMask operator|(const SyncObjectMask & a, const SyncObjectMask & b);
GLBINDING_API SyncObjectMask operator&(const SyncObjectMask & a, const SyncObjectMask & b);
GLBINDING_API SyncObjectMask operator^(const SyncObjectMask & a, const SyncObjectMask & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::TextureStorageMaskAMD>
{
    using type = gl::TextureStorageMaskAMD;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const TextureStorageMaskAMD & value);

} // namespace gl

namespace gl
{

GLBINDING_API TextureStorageMaskAMD operator|(const TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b);
GLBINDING_API TextureStorageMaskAMD operator&(const TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b);
GLBINDING_API TextureStorageMaskAMD operator^(const TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::UseProgramStageMask>
{
    using type = gl::UseProgramStageMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value);

} // namespace gl

namespace gl
{

GLBINDING_API UseProgramStageMask operator|(const UseProgramStageMask & a, const UseProgramStageMask & b);
GLBINDING_API UseProgramStageMask operator&(const UseProgramStageMask & a, const UseProgramStageMask & b);
GLBINDING_API UseProgramStageMask operator^(const UseProgramStageMask & a, const UseProgramStageMask & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::VertexHintsMaskPGI>
{
    using type = gl::VertexHintsMaskPGI;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const VertexHintsMaskPGI & value);

} // namespace gl

namespace gl
{

GLBINDING_API VertexHintsMaskPGI operator|(const VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b);
GLBINDING_API VertexHintsMaskPGI operator&(const VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b);
GLBINDING_API VertexHintsMaskPGI operator^(const VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::UnusedMask>
{
    using type = gl::UnusedMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const UnusedMask & value);

} // namespace gl

namespace gl
{

GLBINDING_API UnusedMask operator|(const UnusedMask & a, const UnusedMask & b);
GLBINDING_API UnusedMask operator&(const UnusedMask & a, const UnusedMask & b);
GLBINDING_API UnusedMask operator^(const UnusedMask & a, const UnusedMask & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::BufferAccessMask>
{
    using type = gl::BufferAccessMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const BufferAccessMask & value);

} // namespace gl

namespace gl
{

GLBINDING_API BufferAccessMask operator|(const BufferAccessMask & a, const BufferAccessMask & b);
GLBINDING_API BufferAccessMask operator&(const BufferAccessMask & a, const BufferAccessMask & b);
GLBINDING_API BufferAccessMask operator^(const BufferAccessMask & a, const BufferAccessMask & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::BufferStorageMask>
{
    using type = gl::BufferStorageMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value);

} // namespace gl

namespace gl
{

GLBINDING_API BufferStorageMask operator|(const BufferStorageMask & a, const BufferStorageMask & b);
GLBINDING_API BufferStorageMask operator&(const BufferStorageMask & a, const BufferStorageMask & b);
GLBINDING_API BufferStorageMask operator^(const BufferStorageMask & a, const BufferStorageMask & b);

} // namespace gl


namespace std
{

template<>
struct hash<gl::PathFontStyle>
{
    using type = gl::PathFontStyle;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace gl
{

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value);

} // namespace gl

namespace gl
{

GLBINDING_API PathFontStyle operator|(const PathFontStyle & a, const PathFontStyle & b);
GLBINDING_API PathFontStyle operator&(const PathFontStyle & a, const PathFontStyle & b);
GLBINDING_API PathFontStyle operator^(const PathFontStyle & a, const PathFontStyle & b);

} // namespace gl

