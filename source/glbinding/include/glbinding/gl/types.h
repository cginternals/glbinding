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


namespace gl
{

enum class GLextension : int;
enum class GLenum : unsigned int;
enum class GLboolean : unsigned char;
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
struct hash<gl::GLenum>
{
    hash<std::underlying_type<gl::GLenum>::type>::result_type operator()(const gl::GLenum & t) const
    {
        return hash<std::underlying_type<gl::GLenum>::type>()(static_cast<std::underlying_type<gl::GLenum>::type>(t));
    }
};

}


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::GLenum & value);


GLBINDING_API gl::GLenum operator+(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b);
GLBINDING_API gl::GLenum operator-(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b);


GLBINDING_API bool operator==(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b);
GLBINDING_API bool operator!=(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b);
GLBINDING_API bool operator< (const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b);
GLBINDING_API bool operator<=(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b);
GLBINDING_API bool operator> (const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b);
GLBINDING_API bool operator>=(const gl::GLenum & a, std::underlying_type<gl::GLenum>::type b);

GLBINDING_API bool operator==(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b);
GLBINDING_API bool operator!=(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b);
GLBINDING_API bool operator< (std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b);
GLBINDING_API bool operator<=(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b);
GLBINDING_API bool operator> (std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b);
GLBINDING_API bool operator>=(std::underlying_type<gl::GLenum>::type a, const gl::GLenum & b);


namespace std
{

template<>
struct hash<gl::GLboolean>
{
    hash<std::underlying_type<gl::GLboolean>::type>::result_type operator()(const gl::GLboolean & t) const
    {
        return hash<std::underlying_type<gl::GLboolean>::type>()(static_cast<std::underlying_type<gl::GLboolean>::type>(t));
    }
};

}


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::GLboolean & value);


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


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::GLextension & value);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::AttribMask & value);

GLBINDING_API gl::AttribMask operator|(const gl::AttribMask & a, const gl::AttribMask & b);
GLBINDING_API gl::AttribMask operator&(const gl::AttribMask & a, const gl::AttribMask & b);
GLBINDING_API gl::AttribMask operator^(const gl::AttribMask & a, const gl::AttribMask & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::ClearBufferMask & value);

GLBINDING_API gl::ClearBufferMask operator|(const gl::ClearBufferMask & a, const gl::ClearBufferMask & b);
GLBINDING_API gl::ClearBufferMask operator&(const gl::ClearBufferMask & a, const gl::ClearBufferMask & b);
GLBINDING_API gl::ClearBufferMask operator^(const gl::ClearBufferMask & a, const gl::ClearBufferMask & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::ClientAttribMask & value);

GLBINDING_API gl::ClientAttribMask operator|(const gl::ClientAttribMask & a, const gl::ClientAttribMask & b);
GLBINDING_API gl::ClientAttribMask operator&(const gl::ClientAttribMask & a, const gl::ClientAttribMask & b);
GLBINDING_API gl::ClientAttribMask operator^(const gl::ClientAttribMask & a, const gl::ClientAttribMask & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::ContextFlagMask & value);

GLBINDING_API gl::ContextFlagMask operator|(const gl::ContextFlagMask & a, const gl::ContextFlagMask & b);
GLBINDING_API gl::ContextFlagMask operator&(const gl::ContextFlagMask & a, const gl::ContextFlagMask & b);
GLBINDING_API gl::ContextFlagMask operator^(const gl::ContextFlagMask & a, const gl::ContextFlagMask & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::ContextProfileMask & value);

GLBINDING_API gl::ContextProfileMask operator|(const gl::ContextProfileMask & a, const gl::ContextProfileMask & b);
GLBINDING_API gl::ContextProfileMask operator&(const gl::ContextProfileMask & a, const gl::ContextProfileMask & b);
GLBINDING_API gl::ContextProfileMask operator^(const gl::ContextProfileMask & a, const gl::ContextProfileMask & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::FfdMaskSGIX & value);

GLBINDING_API gl::FfdMaskSGIX operator|(const gl::FfdMaskSGIX & a, const gl::FfdMaskSGIX & b);
GLBINDING_API gl::FfdMaskSGIX operator&(const gl::FfdMaskSGIX & a, const gl::FfdMaskSGIX & b);
GLBINDING_API gl::FfdMaskSGIX operator^(const gl::FfdMaskSGIX & a, const gl::FfdMaskSGIX & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::FragmentShaderColorModMaskATI & value);

GLBINDING_API gl::FragmentShaderColorModMaskATI operator|(const gl::FragmentShaderColorModMaskATI & a, const gl::FragmentShaderColorModMaskATI & b);
GLBINDING_API gl::FragmentShaderColorModMaskATI operator&(const gl::FragmentShaderColorModMaskATI & a, const gl::FragmentShaderColorModMaskATI & b);
GLBINDING_API gl::FragmentShaderColorModMaskATI operator^(const gl::FragmentShaderColorModMaskATI & a, const gl::FragmentShaderColorModMaskATI & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::FragmentShaderDestMaskATI & value);

GLBINDING_API gl::FragmentShaderDestMaskATI operator|(const gl::FragmentShaderDestMaskATI & a, const gl::FragmentShaderDestMaskATI & b);
GLBINDING_API gl::FragmentShaderDestMaskATI operator&(const gl::FragmentShaderDestMaskATI & a, const gl::FragmentShaderDestMaskATI & b);
GLBINDING_API gl::FragmentShaderDestMaskATI operator^(const gl::FragmentShaderDestMaskATI & a, const gl::FragmentShaderDestMaskATI & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::FragmentShaderDestModMaskATI & value);

GLBINDING_API gl::FragmentShaderDestModMaskATI operator|(const gl::FragmentShaderDestModMaskATI & a, const gl::FragmentShaderDestModMaskATI & b);
GLBINDING_API gl::FragmentShaderDestModMaskATI operator&(const gl::FragmentShaderDestModMaskATI & a, const gl::FragmentShaderDestModMaskATI & b);
GLBINDING_API gl::FragmentShaderDestModMaskATI operator^(const gl::FragmentShaderDestModMaskATI & a, const gl::FragmentShaderDestModMaskATI & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::MapBufferUsageMask & value);

GLBINDING_API gl::MapBufferUsageMask operator|(const gl::MapBufferUsageMask & a, const gl::MapBufferUsageMask & b);
GLBINDING_API gl::MapBufferUsageMask operator&(const gl::MapBufferUsageMask & a, const gl::MapBufferUsageMask & b);
GLBINDING_API gl::MapBufferUsageMask operator^(const gl::MapBufferUsageMask & a, const gl::MapBufferUsageMask & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::MemoryBarrierMask & value);

GLBINDING_API gl::MemoryBarrierMask operator|(const gl::MemoryBarrierMask & a, const gl::MemoryBarrierMask & b);
GLBINDING_API gl::MemoryBarrierMask operator&(const gl::MemoryBarrierMask & a, const gl::MemoryBarrierMask & b);
GLBINDING_API gl::MemoryBarrierMask operator^(const gl::MemoryBarrierMask & a, const gl::MemoryBarrierMask & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::PathRenderingMaskNV & value);

GLBINDING_API gl::PathRenderingMaskNV operator|(const gl::PathRenderingMaskNV & a, const gl::PathRenderingMaskNV & b);
GLBINDING_API gl::PathRenderingMaskNV operator&(const gl::PathRenderingMaskNV & a, const gl::PathRenderingMaskNV & b);
GLBINDING_API gl::PathRenderingMaskNV operator^(const gl::PathRenderingMaskNV & a, const gl::PathRenderingMaskNV & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::PerformanceQueryCapsMaskINTEL & value);

GLBINDING_API gl::PerformanceQueryCapsMaskINTEL operator|(const gl::PerformanceQueryCapsMaskINTEL & a, const gl::PerformanceQueryCapsMaskINTEL & b);
GLBINDING_API gl::PerformanceQueryCapsMaskINTEL operator&(const gl::PerformanceQueryCapsMaskINTEL & a, const gl::PerformanceQueryCapsMaskINTEL & b);
GLBINDING_API gl::PerformanceQueryCapsMaskINTEL operator^(const gl::PerformanceQueryCapsMaskINTEL & a, const gl::PerformanceQueryCapsMaskINTEL & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::SyncObjectMask & value);

GLBINDING_API gl::SyncObjectMask operator|(const gl::SyncObjectMask & a, const gl::SyncObjectMask & b);
GLBINDING_API gl::SyncObjectMask operator&(const gl::SyncObjectMask & a, const gl::SyncObjectMask & b);
GLBINDING_API gl::SyncObjectMask operator^(const gl::SyncObjectMask & a, const gl::SyncObjectMask & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::TextureStorageMaskAMD & value);

GLBINDING_API gl::TextureStorageMaskAMD operator|(const gl::TextureStorageMaskAMD & a, const gl::TextureStorageMaskAMD & b);
GLBINDING_API gl::TextureStorageMaskAMD operator&(const gl::TextureStorageMaskAMD & a, const gl::TextureStorageMaskAMD & b);
GLBINDING_API gl::TextureStorageMaskAMD operator^(const gl::TextureStorageMaskAMD & a, const gl::TextureStorageMaskAMD & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::UseProgramStageMask & value);

GLBINDING_API gl::UseProgramStageMask operator|(const gl::UseProgramStageMask & a, const gl::UseProgramStageMask & b);
GLBINDING_API gl::UseProgramStageMask operator&(const gl::UseProgramStageMask & a, const gl::UseProgramStageMask & b);
GLBINDING_API gl::UseProgramStageMask operator^(const gl::UseProgramStageMask & a, const gl::UseProgramStageMask & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::VertexHintsMaskPGI & value);

GLBINDING_API gl::VertexHintsMaskPGI operator|(const gl::VertexHintsMaskPGI & a, const gl::VertexHintsMaskPGI & b);
GLBINDING_API gl::VertexHintsMaskPGI operator&(const gl::VertexHintsMaskPGI & a, const gl::VertexHintsMaskPGI & b);
GLBINDING_API gl::VertexHintsMaskPGI operator^(const gl::VertexHintsMaskPGI & a, const gl::VertexHintsMaskPGI & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::UnusedMask & value);

GLBINDING_API gl::UnusedMask operator|(const gl::UnusedMask & a, const gl::UnusedMask & b);
GLBINDING_API gl::UnusedMask operator&(const gl::UnusedMask & a, const gl::UnusedMask & b);
GLBINDING_API gl::UnusedMask operator^(const gl::UnusedMask & a, const gl::UnusedMask & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::BufferAccessMask & value);

GLBINDING_API gl::BufferAccessMask operator|(const gl::BufferAccessMask & a, const gl::BufferAccessMask & b);
GLBINDING_API gl::BufferAccessMask operator&(const gl::BufferAccessMask & a, const gl::BufferAccessMask & b);
GLBINDING_API gl::BufferAccessMask operator^(const gl::BufferAccessMask & a, const gl::BufferAccessMask & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::BufferStorageMask & value);

GLBINDING_API gl::BufferStorageMask operator|(const gl::BufferStorageMask & a, const gl::BufferStorageMask & b);
GLBINDING_API gl::BufferStorageMask operator&(const gl::BufferStorageMask & a, const gl::BufferStorageMask & b);
GLBINDING_API gl::BufferStorageMask operator^(const gl::BufferStorageMask & a, const gl::BufferStorageMask & b);


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

GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gl::PathFontStyle & value);

GLBINDING_API gl::PathFontStyle operator|(const gl::PathFontStyle & a, const gl::PathFontStyle & b);
GLBINDING_API gl::PathFontStyle operator&(const gl::PathFontStyle & a, const gl::PathFontStyle & b);
GLBINDING_API gl::PathFontStyle operator^(const gl::PathFontStyle & a, const gl::PathFontStyle & b);
