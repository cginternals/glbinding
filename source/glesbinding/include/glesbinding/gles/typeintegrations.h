#pragma once

#include <glesbinding/nogles.h>
#include <glesbinding/gles/types.h>


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
GLESBINDING_API AttribMask & operator|=(AttribMask & a, const AttribMask & b);
GLESBINDING_API AttribMask operator&(const AttribMask & a, const AttribMask & b);
GLESBINDING_API AttribMask & operator&=(AttribMask & a, const AttribMask & b);
GLESBINDING_API AttribMask operator^(const AttribMask & a, const AttribMask & b);
GLESBINDING_API AttribMask & operator^=(AttribMask & a, const AttribMask & b);

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
GLESBINDING_API BufferBitQCOM & operator|=(BufferBitQCOM & a, const BufferBitQCOM & b);
GLESBINDING_API BufferBitQCOM operator&(const BufferBitQCOM & a, const BufferBitQCOM & b);
GLESBINDING_API BufferBitQCOM & operator&=(BufferBitQCOM & a, const BufferBitQCOM & b);
GLESBINDING_API BufferBitQCOM operator^(const BufferBitQCOM & a, const BufferBitQCOM & b);
GLESBINDING_API BufferBitQCOM & operator^=(BufferBitQCOM & a, const BufferBitQCOM & b);

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
GLESBINDING_API ClearBufferMask & operator|=(ClearBufferMask & a, const ClearBufferMask & b);
GLESBINDING_API ClearBufferMask operator&(const ClearBufferMask & a, const ClearBufferMask & b);
GLESBINDING_API ClearBufferMask & operator&=(ClearBufferMask & a, const ClearBufferMask & b);
GLESBINDING_API ClearBufferMask operator^(const ClearBufferMask & a, const ClearBufferMask & b);
GLESBINDING_API ClearBufferMask & operator^=(ClearBufferMask & a, const ClearBufferMask & b);

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
GLESBINDING_API ContextFlagMask & operator|=(ContextFlagMask & a, const ContextFlagMask & b);
GLESBINDING_API ContextFlagMask operator&(const ContextFlagMask & a, const ContextFlagMask & b);
GLESBINDING_API ContextFlagMask & operator&=(ContextFlagMask & a, const ContextFlagMask & b);
GLESBINDING_API ContextFlagMask operator^(const ContextFlagMask & a, const ContextFlagMask & b);
GLESBINDING_API ContextFlagMask & operator^=(ContextFlagMask & a, const ContextFlagMask & b);

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
GLESBINDING_API MapBufferUsageMask & operator|=(MapBufferUsageMask & a, const MapBufferUsageMask & b);
GLESBINDING_API MapBufferUsageMask operator&(const MapBufferUsageMask & a, const MapBufferUsageMask & b);
GLESBINDING_API MapBufferUsageMask & operator&=(MapBufferUsageMask & a, const MapBufferUsageMask & b);
GLESBINDING_API MapBufferUsageMask operator^(const MapBufferUsageMask & a, const MapBufferUsageMask & b);
GLESBINDING_API MapBufferUsageMask & operator^=(MapBufferUsageMask & a, const MapBufferUsageMask & b);

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
GLESBINDING_API MemoryBarrierMask & operator|=(MemoryBarrierMask & a, const MemoryBarrierMask & b);
GLESBINDING_API MemoryBarrierMask operator&(const MemoryBarrierMask & a, const MemoryBarrierMask & b);
GLESBINDING_API MemoryBarrierMask & operator&=(MemoryBarrierMask & a, const MemoryBarrierMask & b);
GLESBINDING_API MemoryBarrierMask operator^(const MemoryBarrierMask & a, const MemoryBarrierMask & b);
GLESBINDING_API MemoryBarrierMask & operator^=(MemoryBarrierMask & a, const MemoryBarrierMask & b);

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
GLESBINDING_API PathRenderingMaskNV & operator|=(PathRenderingMaskNV & a, const PathRenderingMaskNV & b);
GLESBINDING_API PathRenderingMaskNV operator&(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b);
GLESBINDING_API PathRenderingMaskNV & operator&=(PathRenderingMaskNV & a, const PathRenderingMaskNV & b);
GLESBINDING_API PathRenderingMaskNV operator^(const PathRenderingMaskNV & a, const PathRenderingMaskNV & b);
GLESBINDING_API PathRenderingMaskNV & operator^=(PathRenderingMaskNV & a, const PathRenderingMaskNV & b);

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
GLESBINDING_API PerformanceQueryCapsMaskINTEL & operator|=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);
GLESBINDING_API PerformanceQueryCapsMaskINTEL operator&(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);
GLESBINDING_API PerformanceQueryCapsMaskINTEL & operator&=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);
GLESBINDING_API PerformanceQueryCapsMaskINTEL operator^(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);
GLESBINDING_API PerformanceQueryCapsMaskINTEL & operator^=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b);

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
GLESBINDING_API SyncObjectMask & operator|=(SyncObjectMask & a, const SyncObjectMask & b);
GLESBINDING_API SyncObjectMask operator&(const SyncObjectMask & a, const SyncObjectMask & b);
GLESBINDING_API SyncObjectMask & operator&=(SyncObjectMask & a, const SyncObjectMask & b);
GLESBINDING_API SyncObjectMask operator^(const SyncObjectMask & a, const SyncObjectMask & b);
GLESBINDING_API SyncObjectMask & operator^=(SyncObjectMask & a, const SyncObjectMask & b);

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
GLESBINDING_API UseProgramStageMask & operator|=(UseProgramStageMask & a, const UseProgramStageMask & b);
GLESBINDING_API UseProgramStageMask operator&(const UseProgramStageMask & a, const UseProgramStageMask & b);
GLESBINDING_API UseProgramStageMask & operator&=(UseProgramStageMask & a, const UseProgramStageMask & b);
GLESBINDING_API UseProgramStageMask operator^(const UseProgramStageMask & a, const UseProgramStageMask & b);
GLESBINDING_API UseProgramStageMask & operator^=(UseProgramStageMask & a, const UseProgramStageMask & b);

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
GLESBINDING_API UnusedMask & operator|=(UnusedMask & a, const UnusedMask & b);
GLESBINDING_API UnusedMask operator&(const UnusedMask & a, const UnusedMask & b);
GLESBINDING_API UnusedMask & operator&=(UnusedMask & a, const UnusedMask & b);
GLESBINDING_API UnusedMask operator^(const UnusedMask & a, const UnusedMask & b);
GLESBINDING_API UnusedMask & operator^=(UnusedMask & a, const UnusedMask & b);

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
GLESBINDING_API BufferAccessMask & operator|=(BufferAccessMask & a, const BufferAccessMask & b);
GLESBINDING_API BufferAccessMask operator&(const BufferAccessMask & a, const BufferAccessMask & b);
GLESBINDING_API BufferAccessMask & operator&=(BufferAccessMask & a, const BufferAccessMask & b);
GLESBINDING_API BufferAccessMask operator^(const BufferAccessMask & a, const BufferAccessMask & b);
GLESBINDING_API BufferAccessMask & operator^=(BufferAccessMask & a, const BufferAccessMask & b);

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
GLESBINDING_API BufferStorageMask & operator|=(BufferStorageMask & a, const BufferStorageMask & b);
GLESBINDING_API BufferStorageMask operator&(const BufferStorageMask & a, const BufferStorageMask & b);
GLESBINDING_API BufferStorageMask & operator&=(BufferStorageMask & a, const BufferStorageMask & b);
GLESBINDING_API BufferStorageMask operator^(const BufferStorageMask & a, const BufferStorageMask & b);
GLESBINDING_API BufferStorageMask & operator^=(BufferStorageMask & a, const BufferStorageMask & b);

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
GLESBINDING_API PathFontStyle & operator|=(PathFontStyle & a, const PathFontStyle & b);
GLESBINDING_API PathFontStyle operator&(const PathFontStyle & a, const PathFontStyle & b);
GLESBINDING_API PathFontStyle & operator&=(PathFontStyle & a, const PathFontStyle & b);
GLESBINDING_API PathFontStyle operator^(const PathFontStyle & a, const PathFontStyle & b);
GLESBINDING_API PathFontStyle & operator^=(PathFontStyle & a, const PathFontStyle & b);

} // namespace gles

