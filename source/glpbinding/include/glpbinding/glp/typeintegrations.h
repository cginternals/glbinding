#pragma once

#include <glpbinding/noglp.h>
#include <glpbinding/glp/types.h>


namespace std
{

template<>
struct hash<glp::GLenum>
{
    using type = glp::GLenum;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std


namespace glp
{

GLPBINDING_API std::ostream & operator<<(std::ostream & stream, const GLenum & value);

} // namespace glp


namespace glp
{

GLPBINDING_API GLenum operator+(const GLenum & a, std::underlying_type<GLenum>::type b);
GLPBINDING_API GLenum operator-(const GLenum & a, std::underlying_type<GLenum>::type b);

} // namespace glp


namespace glp
{

GLPBINDING_API bool operator==(const GLenum & a, std::underlying_type<GLenum>::type b);
GLPBINDING_API bool operator!=(const GLenum & a, std::underlying_type<GLenum>::type b);
GLPBINDING_API bool operator< (const GLenum & a, std::underlying_type<GLenum>::type b);
GLPBINDING_API bool operator<=(const GLenum & a, std::underlying_type<GLenum>::type b);
GLPBINDING_API bool operator> (const GLenum & a, std::underlying_type<GLenum>::type b);
GLPBINDING_API bool operator>=(const GLenum & a, std::underlying_type<GLenum>::type b);

GLPBINDING_API bool operator==(std::underlying_type<GLenum>::type a, const GLenum & b);
GLPBINDING_API bool operator!=(std::underlying_type<GLenum>::type a, const GLenum & b);
GLPBINDING_API bool operator< (std::underlying_type<GLenum>::type a, const GLenum & b);
GLPBINDING_API bool operator<=(std::underlying_type<GLenum>::type a, const GLenum & b);
GLPBINDING_API bool operator> (std::underlying_type<GLenum>::type a, const GLenum & b);
GLPBINDING_API bool operator>=(std::underlying_type<GLenum>::type a, const GLenum & b);

} // namespace glp


namespace std
{

template<>
struct hash<glp::GLboolean>
{
    using type = glp::GLboolean;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std


namespace glp
{

GLPBINDING_API std::ostream & operator<<(std::ostream & stream, const GLboolean & value);

} // namespace glp


namespace glp
{

GLPBINDING_API bool operator!(const GLboolean & a);

} // namespace glp


namespace std
{

template<>
struct hash<glp::GLextension>
{
    using type = glp::GLextension;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std


namespace glp
{

GLPBINDING_API std::ostream & operator<<(std::ostream & stream, const GLextension & value);

} // namespace glp


namespace std
{

template<>
struct hash<glp::AttribMask>
{
    using type = glp::AttribMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace glp
{

GLPBINDING_API std::ostream & operator<<(std::ostream & stream, const AttribMask & value);

} // namespace glp

namespace glp
{

GLPBINDING_API AttribMask operator|(const AttribMask & a, const AttribMask & b);
GLPBINDING_API AttribMask & operator|=(AttribMask & a, const AttribMask & b);
GLPBINDING_API AttribMask operator&(const AttribMask & a, const AttribMask & b);
GLPBINDING_API AttribMask & operator&=(AttribMask & a, const AttribMask & b);
GLPBINDING_API AttribMask operator^(const AttribMask & a, const AttribMask & b);
GLPBINDING_API AttribMask & operator^=(AttribMask & a, const AttribMask & b);

} // namespace glp


namespace std
{

template<>
struct hash<glp::BufferBitQCOM>
{
    using type = glp::BufferBitQCOM;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace glp
{

GLPBINDING_API std::ostream & operator<<(std::ostream & stream, const BufferBitQCOM & value);

} // namespace glp

namespace glp
{

GLPBINDING_API BufferBitQCOM operator|(const BufferBitQCOM & a, const BufferBitQCOM & b);
GLPBINDING_API BufferBitQCOM & operator|=(BufferBitQCOM & a, const BufferBitQCOM & b);
GLPBINDING_API BufferBitQCOM operator&(const BufferBitQCOM & a, const BufferBitQCOM & b);
GLPBINDING_API BufferBitQCOM & operator&=(BufferBitQCOM & a, const BufferBitQCOM & b);
GLPBINDING_API BufferBitQCOM operator^(const BufferBitQCOM & a, const BufferBitQCOM & b);
GLPBINDING_API BufferBitQCOM & operator^=(BufferBitQCOM & a, const BufferBitQCOM & b);

} // namespace glp


namespace std
{

template<>
struct hash<glp::ClearBufferMask>
{
    using type = glp::ClearBufferMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace glp
{

GLPBINDING_API std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value);

} // namespace glp

namespace glp
{

GLPBINDING_API ClearBufferMask operator|(const ClearBufferMask & a, const ClearBufferMask & b);
GLPBINDING_API ClearBufferMask & operator|=(ClearBufferMask & a, const ClearBufferMask & b);
GLPBINDING_API ClearBufferMask operator&(const ClearBufferMask & a, const ClearBufferMask & b);
GLPBINDING_API ClearBufferMask & operator&=(ClearBufferMask & a, const ClearBufferMask & b);
GLPBINDING_API ClearBufferMask operator^(const ClearBufferMask & a, const ClearBufferMask & b);
GLPBINDING_API ClearBufferMask & operator^=(ClearBufferMask & a, const ClearBufferMask & b);

} // namespace glp


namespace std
{

template<>
struct hash<glp::ContextFlagMask>
{
    using type = glp::ContextFlagMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace glp
{

GLPBINDING_API std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value);

} // namespace glp

namespace glp
{

GLPBINDING_API ContextFlagMask operator|(const ContextFlagMask & a, const ContextFlagMask & b);
GLPBINDING_API ContextFlagMask & operator|=(ContextFlagMask & a, const ContextFlagMask & b);
GLPBINDING_API ContextFlagMask operator&(const ContextFlagMask & a, const ContextFlagMask & b);
GLPBINDING_API ContextFlagMask & operator&=(ContextFlagMask & a, const ContextFlagMask & b);
GLPBINDING_API ContextFlagMask operator^(const ContextFlagMask & a, const ContextFlagMask & b);
GLPBINDING_API ContextFlagMask & operator^=(ContextFlagMask & a, const ContextFlagMask & b);

} // namespace glp


namespace std
{

template<>
struct hash<glp::MapBufferUsageMask>
{
    using type = glp::MapBufferUsageMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace glp
{

GLPBINDING_API std::ostream & operator<<(std::ostream & stream, const MapBufferUsageMask & value);

} // namespace glp

namespace glp
{

GLPBINDING_API MapBufferUsageMask operator|(const MapBufferUsageMask & a, const MapBufferUsageMask & b);
GLPBINDING_API MapBufferUsageMask & operator|=(MapBufferUsageMask & a, const MapBufferUsageMask & b);
GLPBINDING_API MapBufferUsageMask operator&(const MapBufferUsageMask & a, const MapBufferUsageMask & b);
GLPBINDING_API MapBufferUsageMask & operator&=(MapBufferUsageMask & a, const MapBufferUsageMask & b);
GLPBINDING_API MapBufferUsageMask operator^(const MapBufferUsageMask & a, const MapBufferUsageMask & b);
GLPBINDING_API MapBufferUsageMask & operator^=(MapBufferUsageMask & a, const MapBufferUsageMask & b);

} // namespace glp


namespace std
{

template<>
struct hash<glp::MemoryBarrierMask>
{
    using type = glp::MemoryBarrierMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace glp
{

GLPBINDING_API std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value);

} // namespace glp

namespace glp
{

GLPBINDING_API MemoryBarrierMask operator|(const MemoryBarrierMask & a, const MemoryBarrierMask & b);
GLPBINDING_API MemoryBarrierMask & operator|=(MemoryBarrierMask & a, const MemoryBarrierMask & b);
GLPBINDING_API MemoryBarrierMask operator&(const MemoryBarrierMask & a, const MemoryBarrierMask & b);
GLPBINDING_API MemoryBarrierMask & operator&=(MemoryBarrierMask & a, const MemoryBarrierMask & b);
GLPBINDING_API MemoryBarrierMask operator^(const MemoryBarrierMask & a, const MemoryBarrierMask & b);
GLPBINDING_API MemoryBarrierMask & operator^=(MemoryBarrierMask & a, const MemoryBarrierMask & b);

} // namespace glp


namespace std
{

template<>
struct hash<glp::PathRenderingMaskNV>
{
    using type = glp::PathRenderingMaskNV;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace glp
{

GLPBINDING_API std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value);

} // namespace glp

namespace glp
{

GLPBINDING_API PathRenderingMaskNV operator|(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b);
GLPBINDING_API PathRenderingMaskNV & operator|=(PathRenderingMaskNV & a, const PathRenderingMaskNV & b);
GLPBINDING_API PathRenderingMaskNV operator&(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b);
GLPBINDING_API PathRenderingMaskNV & operator&=(PathRenderingMaskNV & a, const PathRenderingMaskNV & b);
GLPBINDING_API PathRenderingMaskNV operator^(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b);
GLPBINDING_API PathRenderingMaskNV & operator^=(PathRenderingMaskNV & a, const PathRenderingMaskNV & b);

} // namespace glp


namespace std
{

template<>
struct hash<glp::PerformanceQueryCapsMaskINTEL>
{
    using type = glp::PerformanceQueryCapsMaskINTEL;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace glp
{

GLPBINDING_API std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value);

} // namespace glp

namespace glp
{

GLPBINDING_API PerformanceQueryCapsMaskINTEL operator|(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);
GLPBINDING_API PerformanceQueryCapsMaskINTEL & operator|=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);
GLPBINDING_API PerformanceQueryCapsMaskINTEL operator&(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);
GLPBINDING_API PerformanceQueryCapsMaskINTEL & operator&=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);
GLPBINDING_API PerformanceQueryCapsMaskINTEL operator^(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);
GLPBINDING_API PerformanceQueryCapsMaskINTEL & operator^=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);

} // namespace glp


namespace std
{

template<>
struct hash<glp::SyncObjectMask>
{
    using type = glp::SyncObjectMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace glp
{

GLPBINDING_API std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value);

} // namespace glp

namespace glp
{

GLPBINDING_API SyncObjectMask operator|(const SyncObjectMask & a, const SyncObjectMask & b);
GLPBINDING_API SyncObjectMask & operator|=(SyncObjectMask & a, const SyncObjectMask & b);
GLPBINDING_API SyncObjectMask operator&(const SyncObjectMask & a, const SyncObjectMask & b);
GLPBINDING_API SyncObjectMask & operator&=(SyncObjectMask & a, const SyncObjectMask & b);
GLPBINDING_API SyncObjectMask operator^(const SyncObjectMask & a, const SyncObjectMask & b);
GLPBINDING_API SyncObjectMask & operator^=(SyncObjectMask & a, const SyncObjectMask & b);

} // namespace glp


namespace std
{

template<>
struct hash<glp::UseProgramStageMask>
{
    using type = glp::UseProgramStageMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace glp
{

GLPBINDING_API std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value);

} // namespace glp

namespace glp
{

GLPBINDING_API UseProgramStageMask operator|(const UseProgramStageMask & a, const UseProgramStageMask & b);
GLPBINDING_API UseProgramStageMask & operator|=(UseProgramStageMask & a, const UseProgramStageMask & b);
GLPBINDING_API UseProgramStageMask operator&(const UseProgramStageMask & a, const UseProgramStageMask & b);
GLPBINDING_API UseProgramStageMask & operator&=(UseProgramStageMask & a, const UseProgramStageMask & b);
GLPBINDING_API UseProgramStageMask operator^(const UseProgramStageMask & a, const UseProgramStageMask & b);
GLPBINDING_API UseProgramStageMask & operator^=(UseProgramStageMask & a, const UseProgramStageMask & b);

} // namespace glp


namespace std
{

template<>
struct hash<glp::UnusedMask>
{
    using type = glp::UnusedMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace glp
{

GLPBINDING_API std::ostream & operator<<(std::ostream & stream, const UnusedMask & value);

} // namespace glp

namespace glp
{

GLPBINDING_API UnusedMask operator|(const UnusedMask & a, const UnusedMask & b);
GLPBINDING_API UnusedMask & operator|=(UnusedMask & a, const UnusedMask & b);
GLPBINDING_API UnusedMask operator&(const UnusedMask & a, const UnusedMask & b);
GLPBINDING_API UnusedMask & operator&=(UnusedMask & a, const UnusedMask & b);
GLPBINDING_API UnusedMask operator^(const UnusedMask & a, const UnusedMask & b);
GLPBINDING_API UnusedMask & operator^=(UnusedMask & a, const UnusedMask & b);

} // namespace glp


namespace std
{

template<>
struct hash<glp::BufferAccessMask>
{
    using type = glp::BufferAccessMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace glp
{

GLPBINDING_API std::ostream & operator<<(std::ostream & stream, const BufferAccessMask & value);

} // namespace glp

namespace glp
{

GLPBINDING_API BufferAccessMask operator|(const BufferAccessMask & a, const BufferAccessMask & b);
GLPBINDING_API BufferAccessMask & operator|=(BufferAccessMask & a, const BufferAccessMask & b);
GLPBINDING_API BufferAccessMask operator&(const BufferAccessMask & a, const BufferAccessMask & b);
GLPBINDING_API BufferAccessMask & operator&=(BufferAccessMask & a, const BufferAccessMask & b);
GLPBINDING_API BufferAccessMask operator^(const BufferAccessMask & a, const BufferAccessMask & b);
GLPBINDING_API BufferAccessMask & operator^=(BufferAccessMask & a, const BufferAccessMask & b);

} // namespace glp


namespace std
{

template<>
struct hash<glp::BufferStorageMask>
{
    using type = glp::BufferStorageMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace glp
{

GLPBINDING_API std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value);

} // namespace glp

namespace glp
{

GLPBINDING_API BufferStorageMask operator|(const BufferStorageMask & a, const BufferStorageMask & b);
GLPBINDING_API BufferStorageMask & operator|=(BufferStorageMask & a, const BufferStorageMask & b);
GLPBINDING_API BufferStorageMask operator&(const BufferStorageMask & a, const BufferStorageMask & b);
GLPBINDING_API BufferStorageMask & operator&=(BufferStorageMask & a, const BufferStorageMask & b);
GLPBINDING_API BufferStorageMask operator^(const BufferStorageMask & a, const BufferStorageMask & b);
GLPBINDING_API BufferStorageMask & operator^=(BufferStorageMask & a, const BufferStorageMask & b);

} // namespace glp


namespace std
{

template<>
struct hash<glp::PathFontStyle>
{
    using type = glp::PathFontStyle;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace glp
{

GLPBINDING_API std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value);

} // namespace glp

namespace glp
{

GLPBINDING_API PathFontStyle operator|(const PathFontStyle & a, const PathFontStyle & b);
GLPBINDING_API PathFontStyle & operator|=(PathFontStyle & a, const PathFontStyle & b);
GLPBINDING_API PathFontStyle operator&(const PathFontStyle & a, const PathFontStyle & b);
GLPBINDING_API PathFontStyle & operator&=(PathFontStyle & a, const PathFontStyle & b);
GLPBINDING_API PathFontStyle operator^(const PathFontStyle & a, const PathFontStyle & b);
GLPBINDING_API PathFontStyle & operator^=(PathFontStyle & a, const PathFontStyle & b);

} // namespace glp

