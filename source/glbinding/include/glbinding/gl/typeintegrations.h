#pragma once

#include <glbinding/nogl.h>
#include <glbinding/gl/types.h>


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


namespace gl
{

GLBINDING_API bool operator!(const GLboolean & a);

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
GLBINDING_API PathFontStyle & operator|=(PathFontStyle & a, const PathFontStyle & b);
GLBINDING_API PathFontStyle operator&(const PathFontStyle & a, const PathFontStyle & b);
GLBINDING_API PathFontStyle & operator&=(PathFontStyle & a, const PathFontStyle & b);
GLBINDING_API PathFontStyle operator^(const PathFontStyle & a, const PathFontStyle & b);
GLBINDING_API PathFontStyle & operator^=(PathFontStyle & a, const PathFontStyle & b);

} // namespace gl

