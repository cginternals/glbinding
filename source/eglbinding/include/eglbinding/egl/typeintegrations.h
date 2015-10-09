#pragma once

#include <eglbinding/noegl.h>
#include <eglbinding/egl/types.h>


namespace std
{

template<>
struct hash<egl::EGLenum>
{
    using type = egl::EGLenum;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std


namespace egl
{

EGLBINDING_API std::ostream & operator<<(std::ostream & stream, const EGLenum & value);

} // namespace egl


namespace egl
{

EGLBINDING_API EGLenum operator+(const EGLenum & a, std::underlying_type<EGLenum>::type b);
EGLBINDING_API EGLenum operator-(const EGLenum & a, std::underlying_type<EGLenum>::type b);

} // namespace egl


namespace egl
{

EGLBINDING_API bool operator==(const EGLenum & a, std::underlying_type<EGLenum>::type b);
EGLBINDING_API bool operator!=(const EGLenum & a, std::underlying_type<EGLenum>::type b);
EGLBINDING_API bool operator< (const EGLenum & a, std::underlying_type<EGLenum>::type b);
EGLBINDING_API bool operator<=(const EGLenum & a, std::underlying_type<EGLenum>::type b);
EGLBINDING_API bool operator> (const EGLenum & a, std::underlying_type<EGLenum>::type b);
EGLBINDING_API bool operator>=(const EGLenum & a, std::underlying_type<EGLenum>::type b);

EGLBINDING_API bool operator==(std::underlying_type<EGLenum>::type a, const EGLenum & b);
EGLBINDING_API bool operator!=(std::underlying_type<EGLenum>::type a, const EGLenum & b);
EGLBINDING_API bool operator< (std::underlying_type<EGLenum>::type a, const EGLenum & b);
EGLBINDING_API bool operator<=(std::underlying_type<EGLenum>::type a, const EGLenum & b);
EGLBINDING_API bool operator> (std::underlying_type<EGLenum>::type a, const EGLenum & b);
EGLBINDING_API bool operator>=(std::underlying_type<EGLenum>::type a, const EGLenum & b);

} // namespace egl


namespace std
{

template<>
struct hash<egl::EGLboolean>
{
    using type = egl::EGLboolean;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std


namespace egl
{

EGLBINDING_API std::ostream & operator<<(std::ostream & stream, const EGLboolean & value);

} // namespace egl


namespace egl
{

EGLBINDING_API bool operator!(const EGLboolean & a);

} // namespace egl


namespace std
{

template<>
struct hash<egl::EGLextension>
{
    using type = egl::EGLextension;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std


namespace egl
{

EGLBINDING_API std::ostream & operator<<(std::ostream & stream, const EGLextension & value);

} // namespace egl


namespace std
{

template<>
struct hash<egl::EGLContextFlagMask>
{
    using type = egl::EGLContextFlagMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace egl
{

EGLBINDING_API std::ostream & operator<<(std::ostream & stream, const EGLContextFlagMask & value);

} // namespace egl

namespace egl
{

EGLBINDING_API EGLContextFlagMask operator|(const EGLContextFlagMask & a, const EGLContextFlagMask & b);
EGLBINDING_API EGLContextFlagMask & operator|=(EGLContextFlagMask & a, const EGLContextFlagMask & b);
EGLBINDING_API EGLContextFlagMask operator&(const EGLContextFlagMask & a, const EGLContextFlagMask & b);
EGLBINDING_API EGLContextFlagMask & operator&=(EGLContextFlagMask & a, const EGLContextFlagMask & b);
EGLBINDING_API EGLContextFlagMask operator^(const EGLContextFlagMask & a, const EGLContextFlagMask & b);
EGLBINDING_API EGLContextFlagMask & operator^=(EGLContextFlagMask & a, const EGLContextFlagMask & b);

} // namespace egl


namespace std
{

template<>
struct hash<egl::EGLContextProfileMask>
{
    using type = egl::EGLContextProfileMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace egl
{

EGLBINDING_API std::ostream & operator<<(std::ostream & stream, const EGLContextProfileMask & value);

} // namespace egl

namespace egl
{

EGLBINDING_API EGLContextProfileMask operator|(const EGLContextProfileMask & a, const EGLContextProfileMask & b);
EGLBINDING_API EGLContextProfileMask & operator|=(EGLContextProfileMask & a, const EGLContextProfileMask & b);
EGLBINDING_API EGLContextProfileMask operator&(const EGLContextProfileMask & a, const EGLContextProfileMask & b);
EGLBINDING_API EGLContextProfileMask & operator&=(EGLContextProfileMask & a, const EGLContextProfileMask & b);
EGLBINDING_API EGLContextProfileMask operator^(const EGLContextProfileMask & a, const EGLContextProfileMask & b);
EGLBINDING_API EGLContextProfileMask & operator^=(EGLContextProfileMask & a, const EGLContextProfileMask & b);

} // namespace egl


namespace std
{

template<>
struct hash<egl::EGLDRMBufferUseMESAMask>
{
    using type = egl::EGLDRMBufferUseMESAMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace egl
{

EGLBINDING_API std::ostream & operator<<(std::ostream & stream, const EGLDRMBufferUseMESAMask & value);

} // namespace egl

namespace egl
{

EGLBINDING_API EGLDRMBufferUseMESAMask operator|(const EGLDRMBufferUseMESAMask & a, const EGLDRMBufferUseMESAMask & b);
EGLBINDING_API EGLDRMBufferUseMESAMask & operator|=(EGLDRMBufferUseMESAMask & a, const EGLDRMBufferUseMESAMask & b);
EGLBINDING_API EGLDRMBufferUseMESAMask operator&(const EGLDRMBufferUseMESAMask & a, const EGLDRMBufferUseMESAMask & b);
EGLBINDING_API EGLDRMBufferUseMESAMask & operator&=(EGLDRMBufferUseMESAMask & a, const EGLDRMBufferUseMESAMask & b);
EGLBINDING_API EGLDRMBufferUseMESAMask operator^(const EGLDRMBufferUseMESAMask & a, const EGLDRMBufferUseMESAMask & b);
EGLBINDING_API EGLDRMBufferUseMESAMask & operator^=(EGLDRMBufferUseMESAMask & a, const EGLDRMBufferUseMESAMask & b);

} // namespace egl


namespace std
{

template<>
struct hash<egl::EGLLockUsageHintKHRMask>
{
    using type = egl::EGLLockUsageHintKHRMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace egl
{

EGLBINDING_API std::ostream & operator<<(std::ostream & stream, const EGLLockUsageHintKHRMask & value);

} // namespace egl

namespace egl
{

EGLBINDING_API EGLLockUsageHintKHRMask operator|(const EGLLockUsageHintKHRMask & a, const EGLLockUsageHintKHRMask & b);
EGLBINDING_API EGLLockUsageHintKHRMask & operator|=(EGLLockUsageHintKHRMask & a, const EGLLockUsageHintKHRMask & b);
EGLBINDING_API EGLLockUsageHintKHRMask operator&(const EGLLockUsageHintKHRMask & a, const EGLLockUsageHintKHRMask & b);
EGLBINDING_API EGLLockUsageHintKHRMask & operator&=(EGLLockUsageHintKHRMask & a, const EGLLockUsageHintKHRMask & b);
EGLBINDING_API EGLLockUsageHintKHRMask operator^(const EGLLockUsageHintKHRMask & a, const EGLLockUsageHintKHRMask & b);
EGLBINDING_API EGLLockUsageHintKHRMask & operator^=(EGLLockUsageHintKHRMask & a, const EGLLockUsageHintKHRMask & b);

} // namespace egl


namespace std
{

template<>
struct hash<egl::EGLRenderableTypeMask>
{
    using type = egl::EGLRenderableTypeMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace egl
{

EGLBINDING_API std::ostream & operator<<(std::ostream & stream, const EGLRenderableTypeMask & value);

} // namespace egl

namespace egl
{

EGLBINDING_API EGLRenderableTypeMask operator|(const EGLRenderableTypeMask & a, const EGLRenderableTypeMask & b);
EGLBINDING_API EGLRenderableTypeMask & operator|=(EGLRenderableTypeMask & a, const EGLRenderableTypeMask & b);
EGLBINDING_API EGLRenderableTypeMask operator&(const EGLRenderableTypeMask & a, const EGLRenderableTypeMask & b);
EGLBINDING_API EGLRenderableTypeMask & operator&=(EGLRenderableTypeMask & a, const EGLRenderableTypeMask & b);
EGLBINDING_API EGLRenderableTypeMask operator^(const EGLRenderableTypeMask & a, const EGLRenderableTypeMask & b);
EGLBINDING_API EGLRenderableTypeMask & operator^=(EGLRenderableTypeMask & a, const EGLRenderableTypeMask & b);

} // namespace egl


namespace std
{

template<>
struct hash<egl::EGLSurfaceTypeMask>
{
    using type = egl::EGLSurfaceTypeMask;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace egl
{

EGLBINDING_API std::ostream & operator<<(std::ostream & stream, const EGLSurfaceTypeMask & value);

} // namespace egl

namespace egl
{

EGLBINDING_API EGLSurfaceTypeMask operator|(const EGLSurfaceTypeMask & a, const EGLSurfaceTypeMask & b);
EGLBINDING_API EGLSurfaceTypeMask & operator|=(EGLSurfaceTypeMask & a, const EGLSurfaceTypeMask & b);
EGLBINDING_API EGLSurfaceTypeMask operator&(const EGLSurfaceTypeMask & a, const EGLSurfaceTypeMask & b);
EGLBINDING_API EGLSurfaceTypeMask & operator&=(EGLSurfaceTypeMask & a, const EGLSurfaceTypeMask & b);
EGLBINDING_API EGLSurfaceTypeMask operator^(const EGLSurfaceTypeMask & a, const EGLSurfaceTypeMask & b);
EGLBINDING_API EGLSurfaceTypeMask & operator^=(EGLSurfaceTypeMask & a, const EGLSurfaceTypeMask & b);

} // namespace egl


namespace std
{

template<>
struct hash<egl::EGLSyncFlagsKHR>
{
    using type = egl::EGLSyncFlagsKHR;
    using underlying_type = std::underlying_type<type>::type;
    
    hash<underlying_type>::result_type operator()(const type & t) const
    {
        return hash<underlying_type>()(static_cast<underlying_type>(t));
    }
};

} // namespace std

namespace egl
{

EGLBINDING_API std::ostream & operator<<(std::ostream & stream, const EGLSyncFlagsKHR & value);

} // namespace egl

namespace egl
{

EGLBINDING_API EGLSyncFlagsKHR operator|(const EGLSyncFlagsKHR & a, const EGLSyncFlagsKHR & b);
EGLBINDING_API EGLSyncFlagsKHR & operator|=(EGLSyncFlagsKHR & a, const EGLSyncFlagsKHR & b);
EGLBINDING_API EGLSyncFlagsKHR operator&(const EGLSyncFlagsKHR & a, const EGLSyncFlagsKHR & b);
EGLBINDING_API EGLSyncFlagsKHR & operator&=(EGLSyncFlagsKHR & a, const EGLSyncFlagsKHR & b);
EGLBINDING_API EGLSyncFlagsKHR operator^(const EGLSyncFlagsKHR & a, const EGLSyncFlagsKHR & b);
EGLBINDING_API EGLSyncFlagsKHR & operator^=(EGLSyncFlagsKHR & a, const EGLSyncFlagsKHR & b);

} // namespace egl

