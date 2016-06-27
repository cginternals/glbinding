#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>
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
struct hash<gl::GLextension>
{
    hash<std::underlying_type<gl::GLextension>::type>::result_type operator()(const gl::GLextension & t) const
    {
        return hash<std::underlying_type<gl::GLextension>::type>()(static_cast<std::underlying_type<gl::GLextension>::type>(t));
    }
};


}


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const GLenum & value);


} // namespace gl


namespace gl
{


GLBINDING_API GLenum operator+(const GLenum & a, std::underlying_type<GLenum>::type b);
GLBINDING_API GLenum operator-(const GLenum & a, std::underlying_type<GLenum>::type b);


} // namespace gl


namespace gl{GLBINDING_API bool operator==(const GLenum & a, std::underlying_type<GLenum>::type b);GLBINDING_API bool operator!=(const GLenum & a, std::underlying_type<GLenum>::type b);GLBINDING_API bool operator< (const GLenum & a, std::underlying_type<GLenum>::type b);GLBINDING_API bool operator<=(const GLenum & a, std::underlying_type<GLenum>::type b);GLBINDING_API bool operator> (const GLenum & a, std::underlying_type<GLenum>::type b);GLBINDING_API bool operator>=(const GLenum & a, std::underlying_type<GLenum>::type b);GLBINDING_API bool operator==(std::underlying_type<GLenum>::type a, const GLenum & b);GLBINDING_API bool operator!=(std::underlying_type<GLenum>::type a, const GLenum & b);GLBINDING_API bool operator< (std::underlying_type<GLenum>::type a, const GLenum & b);GLBINDING_API bool operator<=(std::underlying_type<GLenum>::type a, const GLenum & b);GLBINDING_API bool operator> (std::underlying_type<GLenum>::type a, const GLenum & b);GLBINDING_API bool operator>=(std::underlying_type<GLenum>::type a, const GLenum & b);} // namespace gl


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const AttribMask & value);


} // namespace gl



namespace gl
{


GLBINDING_API AttribMask operator|(const AttribMask & a, const AttribMask & b);
GLBINDING_API AttribMask & operator|=(AttribMask & a, const AttribMask & b);
GLBINDING_API AttribMask operator&(const AttribMask & a, const AttribMask & b);
GLBINDING_API AttribMask & operator&=(AttribMask & a, const AttribMask & b);
GLBINDING_API AttribMask operator^(const AttribMask & a, const AttribMask & b);
GLBINDING_API AttribMask & operator^=(AttribMask & a, const AttribMask & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value);


} // namespace gl



namespace gl
{


GLBINDING_API ClearBufferMask operator|(const ClearBufferMask & a, const ClearBufferMask & b);
GLBINDING_API ClearBufferMask & operator|=(ClearBufferMask & a, const ClearBufferMask & b);
GLBINDING_API ClearBufferMask operator&(const ClearBufferMask & a, const ClearBufferMask & b);
GLBINDING_API ClearBufferMask & operator&=(ClearBufferMask & a, const ClearBufferMask & b);
GLBINDING_API ClearBufferMask operator^(const ClearBufferMask & a, const ClearBufferMask & b);
GLBINDING_API ClearBufferMask & operator^=(ClearBufferMask & a, const ClearBufferMask & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const ClientAttribMask & value);


} // namespace gl



namespace gl
{


GLBINDING_API ClientAttribMask operator|(const ClientAttribMask & a, const ClientAttribMask & b);
GLBINDING_API ClientAttribMask & operator|=(ClientAttribMask & a, const ClientAttribMask & b);
GLBINDING_API ClientAttribMask operator&(const ClientAttribMask & a, const ClientAttribMask & b);
GLBINDING_API ClientAttribMask & operator&=(ClientAttribMask & a, const ClientAttribMask & b);
GLBINDING_API ClientAttribMask operator^(const ClientAttribMask & a, const ClientAttribMask & b);
GLBINDING_API ClientAttribMask & operator^=(ClientAttribMask & a, const ClientAttribMask & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value);


} // namespace gl



namespace gl
{


GLBINDING_API ContextFlagMask operator|(const ContextFlagMask & a, const ContextFlagMask & b);
GLBINDING_API ContextFlagMask & operator|=(ContextFlagMask & a, const ContextFlagMask & b);
GLBINDING_API ContextFlagMask operator&(const ContextFlagMask & a, const ContextFlagMask & b);
GLBINDING_API ContextFlagMask & operator&=(ContextFlagMask & a, const ContextFlagMask & b);
GLBINDING_API ContextFlagMask operator^(const ContextFlagMask & a, const ContextFlagMask & b);
GLBINDING_API ContextFlagMask & operator^=(ContextFlagMask & a, const ContextFlagMask & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const ContextProfileMask & value);


} // namespace gl



namespace gl
{


GLBINDING_API ContextProfileMask operator|(const ContextProfileMask & a, const ContextProfileMask & b);
GLBINDING_API ContextProfileMask & operator|=(ContextProfileMask & a, const ContextProfileMask & b);
GLBINDING_API ContextProfileMask operator&(const ContextProfileMask & a, const ContextProfileMask & b);
GLBINDING_API ContextProfileMask & operator&=(ContextProfileMask & a, const ContextProfileMask & b);
GLBINDING_API ContextProfileMask operator^(const ContextProfileMask & a, const ContextProfileMask & b);
GLBINDING_API ContextProfileMask & operator^=(ContextProfileMask & a, const ContextProfileMask & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const FfdMaskSGIX & value);


} // namespace gl



namespace gl
{


GLBINDING_API FfdMaskSGIX operator|(const FfdMaskSGIX & a, const FfdMaskSGIX & b);
GLBINDING_API FfdMaskSGIX & operator|=(FfdMaskSGIX & a, const FfdMaskSGIX & b);
GLBINDING_API FfdMaskSGIX operator&(const FfdMaskSGIX & a, const FfdMaskSGIX & b);
GLBINDING_API FfdMaskSGIX & operator&=(FfdMaskSGIX & a, const FfdMaskSGIX & b);
GLBINDING_API FfdMaskSGIX operator^(const FfdMaskSGIX & a, const FfdMaskSGIX & b);
GLBINDING_API FfdMaskSGIX & operator^=(FfdMaskSGIX & a, const FfdMaskSGIX & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderColorModMaskATI & value);


} // namespace gl



namespace gl
{


GLBINDING_API FragmentShaderColorModMaskATI operator|(const FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b);
GLBINDING_API FragmentShaderColorModMaskATI & operator|=(FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b);
GLBINDING_API FragmentShaderColorModMaskATI operator&(const FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b);
GLBINDING_API FragmentShaderColorModMaskATI & operator&=(FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b);
GLBINDING_API FragmentShaderColorModMaskATI operator^(const FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b);
GLBINDING_API FragmentShaderColorModMaskATI & operator^=(FragmentShaderColorModMaskATI & a, const FragmentShaderColorModMaskATI & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestMaskATI & value);


} // namespace gl



namespace gl
{


GLBINDING_API FragmentShaderDestMaskATI operator|(const FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b);
GLBINDING_API FragmentShaderDestMaskATI & operator|=(FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b);
GLBINDING_API FragmentShaderDestMaskATI operator&(const FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b);
GLBINDING_API FragmentShaderDestMaskATI & operator&=(FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b);
GLBINDING_API FragmentShaderDestMaskATI operator^(const FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b);
GLBINDING_API FragmentShaderDestMaskATI & operator^=(FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestModMaskATI & value);


} // namespace gl



namespace gl
{


GLBINDING_API FragmentShaderDestModMaskATI operator|(const FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b);
GLBINDING_API FragmentShaderDestModMaskATI & operator|=(FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b);
GLBINDING_API FragmentShaderDestModMaskATI operator&(const FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b);
GLBINDING_API FragmentShaderDestModMaskATI & operator&=(FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b);
GLBINDING_API FragmentShaderDestModMaskATI operator^(const FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b);
GLBINDING_API FragmentShaderDestModMaskATI & operator^=(FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const MapBufferUsageMask & value);


} // namespace gl



namespace gl
{


GLBINDING_API MapBufferUsageMask operator|(const MapBufferUsageMask & a, const MapBufferUsageMask & b);
GLBINDING_API MapBufferUsageMask & operator|=(MapBufferUsageMask & a, const MapBufferUsageMask & b);
GLBINDING_API MapBufferUsageMask operator&(const MapBufferUsageMask & a, const MapBufferUsageMask & b);
GLBINDING_API MapBufferUsageMask & operator&=(MapBufferUsageMask & a, const MapBufferUsageMask & b);
GLBINDING_API MapBufferUsageMask operator^(const MapBufferUsageMask & a, const MapBufferUsageMask & b);
GLBINDING_API MapBufferUsageMask & operator^=(MapBufferUsageMask & a, const MapBufferUsageMask & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value);


} // namespace gl



namespace gl
{


GLBINDING_API MemoryBarrierMask operator|(const MemoryBarrierMask & a, const MemoryBarrierMask & b);
GLBINDING_API MemoryBarrierMask & operator|=(MemoryBarrierMask & a, const MemoryBarrierMask & b);
GLBINDING_API MemoryBarrierMask operator&(const MemoryBarrierMask & a, const MemoryBarrierMask & b);
GLBINDING_API MemoryBarrierMask & operator&=(MemoryBarrierMask & a, const MemoryBarrierMask & b);
GLBINDING_API MemoryBarrierMask operator^(const MemoryBarrierMask & a, const MemoryBarrierMask & b);
GLBINDING_API MemoryBarrierMask & operator^=(MemoryBarrierMask & a, const MemoryBarrierMask & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value);


} // namespace gl



namespace gl
{


GLBINDING_API PathRenderingMaskNV operator|(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b);
GLBINDING_API PathRenderingMaskNV & operator|=(PathRenderingMaskNV & a, const PathRenderingMaskNV & b);
GLBINDING_API PathRenderingMaskNV operator&(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b);
GLBINDING_API PathRenderingMaskNV & operator&=(PathRenderingMaskNV & a, const PathRenderingMaskNV & b);
GLBINDING_API PathRenderingMaskNV operator^(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b);
GLBINDING_API PathRenderingMaskNV & operator^=(PathRenderingMaskNV & a, const PathRenderingMaskNV & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value);


} // namespace gl



namespace gl
{


GLBINDING_API PerformanceQueryCapsMaskINTEL operator|(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);
GLBINDING_API PerformanceQueryCapsMaskINTEL & operator|=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);
GLBINDING_API PerformanceQueryCapsMaskINTEL operator&(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);
GLBINDING_API PerformanceQueryCapsMaskINTEL & operator&=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);
GLBINDING_API PerformanceQueryCapsMaskINTEL operator^(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);
GLBINDING_API PerformanceQueryCapsMaskINTEL & operator^=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value);


} // namespace gl



namespace gl
{


GLBINDING_API SyncObjectMask operator|(const SyncObjectMask & a, const SyncObjectMask & b);
GLBINDING_API SyncObjectMask & operator|=(SyncObjectMask & a, const SyncObjectMask & b);
GLBINDING_API SyncObjectMask operator&(const SyncObjectMask & a, const SyncObjectMask & b);
GLBINDING_API SyncObjectMask & operator&=(SyncObjectMask & a, const SyncObjectMask & b);
GLBINDING_API SyncObjectMask operator^(const SyncObjectMask & a, const SyncObjectMask & b);
GLBINDING_API SyncObjectMask & operator^=(SyncObjectMask & a, const SyncObjectMask & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const TextureStorageMaskAMD & value);


} // namespace gl



namespace gl
{


GLBINDING_API TextureStorageMaskAMD operator|(const TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b);
GLBINDING_API TextureStorageMaskAMD & operator|=(TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b);
GLBINDING_API TextureStorageMaskAMD operator&(const TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b);
GLBINDING_API TextureStorageMaskAMD & operator&=(TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b);
GLBINDING_API TextureStorageMaskAMD operator^(const TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b);
GLBINDING_API TextureStorageMaskAMD & operator^=(TextureStorageMaskAMD & a, const TextureStorageMaskAMD & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value);


} // namespace gl



namespace gl
{


GLBINDING_API UseProgramStageMask operator|(const UseProgramStageMask & a, const UseProgramStageMask & b);
GLBINDING_API UseProgramStageMask & operator|=(UseProgramStageMask & a, const UseProgramStageMask & b);
GLBINDING_API UseProgramStageMask operator&(const UseProgramStageMask & a, const UseProgramStageMask & b);
GLBINDING_API UseProgramStageMask & operator&=(UseProgramStageMask & a, const UseProgramStageMask & b);
GLBINDING_API UseProgramStageMask operator^(const UseProgramStageMask & a, const UseProgramStageMask & b);
GLBINDING_API UseProgramStageMask & operator^=(UseProgramStageMask & a, const UseProgramStageMask & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const VertexHintsMaskPGI & value);


} // namespace gl



namespace gl
{


GLBINDING_API VertexHintsMaskPGI operator|(const VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b);
GLBINDING_API VertexHintsMaskPGI & operator|=(VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b);
GLBINDING_API VertexHintsMaskPGI operator&(const VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b);
GLBINDING_API VertexHintsMaskPGI & operator&=(VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b);
GLBINDING_API VertexHintsMaskPGI operator^(const VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b);
GLBINDING_API VertexHintsMaskPGI & operator^=(VertexHintsMaskPGI & a, const VertexHintsMaskPGI & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const UnusedMask & value);


} // namespace gl



namespace gl
{


GLBINDING_API UnusedMask operator|(const UnusedMask & a, const UnusedMask & b);
GLBINDING_API UnusedMask & operator|=(UnusedMask & a, const UnusedMask & b);
GLBINDING_API UnusedMask operator&(const UnusedMask & a, const UnusedMask & b);
GLBINDING_API UnusedMask & operator&=(UnusedMask & a, const UnusedMask & b);
GLBINDING_API UnusedMask operator^(const UnusedMask & a, const UnusedMask & b);
GLBINDING_API UnusedMask & operator^=(UnusedMask & a, const UnusedMask & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const BufferAccessMask & value);


} // namespace gl



namespace gl
{


GLBINDING_API BufferAccessMask operator|(const BufferAccessMask & a, const BufferAccessMask & b);
GLBINDING_API BufferAccessMask & operator|=(BufferAccessMask & a, const BufferAccessMask & b);
GLBINDING_API BufferAccessMask operator&(const BufferAccessMask & a, const BufferAccessMask & b);
GLBINDING_API BufferAccessMask & operator&=(BufferAccessMask & a, const BufferAccessMask & b);
GLBINDING_API BufferAccessMask operator^(const BufferAccessMask & a, const BufferAccessMask & b);
GLBINDING_API BufferAccessMask & operator^=(BufferAccessMask & a, const BufferAccessMask & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value);


} // namespace gl



namespace gl
{


GLBINDING_API BufferStorageMask operator|(const BufferStorageMask & a, const BufferStorageMask & b);
GLBINDING_API BufferStorageMask & operator|=(BufferStorageMask & a, const BufferStorageMask & b);
GLBINDING_API BufferStorageMask operator&(const BufferStorageMask & a, const BufferStorageMask & b);
GLBINDING_API BufferStorageMask & operator&=(BufferStorageMask & a, const BufferStorageMask & b);
GLBINDING_API BufferStorageMask operator^(const BufferStorageMask & a, const BufferStorageMask & b);
GLBINDING_API BufferStorageMask & operator^=(BufferStorageMask & a, const BufferStorageMask & b);


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


}


namespace gl
{


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value);


} // namespace gl



namespace gl
{


GLBINDING_API PathFontStyle operator|(const PathFontStyle & a, const PathFontStyle & b);
GLBINDING_API PathFontStyle & operator|=(PathFontStyle & a, const PathFontStyle & b);
GLBINDING_API PathFontStyle operator&(const PathFontStyle & a, const PathFontStyle & b);
GLBINDING_API PathFontStyle & operator&=(PathFontStyle & a, const PathFontStyle & b);
GLBINDING_API PathFontStyle operator^(const PathFontStyle & a, const PathFontStyle & b);
GLBINDING_API PathFontStyle & operator^=(PathFontStyle & a, const PathFontStyle & b);


} // namespace gl

