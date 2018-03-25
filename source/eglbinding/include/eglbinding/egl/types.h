
#pragma once


#include <eglbinding/noegl.h>
#include <eglbinding/eglbinding_api.h>
#include <eglbinding/eglbinding_features.h>
#include <eglbinding/egl/boolean.h>

#include <cstddef>
#include <cstdint>
#include <array>
#include <KHR/khrplatform.h>

#include <string>


#ifdef _MSC_VER
#define EGL_APIENTRY __stdcall
#else
#define EGL_APIENTRY
#endif


namespace egl
{

using EGLint = int;
using EGLchar = char;
using EGLNativeDisplayType = void*;
using EGLNativePixmapType = void*;
using EGLNativeWindowType = void*;
enum class EGLextension : int;
enum class EGLbitfield : unsigned int;
struct AHardwareBuffer;
// Import of EGLBoolean is an include
enum class EGLenum : unsigned int;
using EGLAttribKHR = intptr_t;
using EGLAttrib = intptr_t;
using EGLClientBuffer = void *;
using EGLConfig = void *;
using EGLContext = void *;
using EGLDeviceEXT = void *;
using EGLDisplay = void *;
using EGLImage = void *;
using EGLImageKHR = void *;
using EGLLabelKHR = void *;
using EGLObjectKHR = void *;
using EGLOutputLayerEXT = void *;
using EGLOutputPortEXT = void *;
using EGLStreamKHR = void *;
using EGLSurface = void *;
using EGLSync = void *;
using EGLSyncKHR = void *;
using EGLSyncNV = void *;
using __eglMustCastToProperFunctionPointerType = void (EGL_APIENTRY *)(void);
using EGLTimeKHR = khronos_utime_nanoseconds_t;
using EGLTime = khronos_utime_nanoseconds_t;
using EGLTimeNV = khronos_utime_nanoseconds_t;
using EGLuint64NV = khronos_utime_nanoseconds_t;
using EGLuint64KHR = khronos_uint64_t;
using EGLnsecsANDROID = khronos_stime_nanoseconds_t;
using EGLNativeFileDescriptorKHR = int;
using EGLsizeiANDROID = khronos_ssize_t;
using EGLSetBlobFuncANDROID = void (EGL_APIENTRY *) (const void *key, EGLsizeiANDROID keySize, const void *value, EGLsizeiANDROID valueSize);
using EGLGetBlobFuncANDROID = EGLsizeiANDROID (EGL_APIENTRY *) (const void *key, EGLsizeiANDROID keySize, void *value, EGLsizeiANDROID valueSize);
struct EGLClientPixmapHI {
    void  *pData;
    EGLint iWidth;
    EGLint iHeight;
    EGLint iStride;
};
using EGLDEBUGPROCKHR = void (EGL_APIENTRY *)(EGLenum error,const char *command,EGLint messageType,EGLLabelKHR threadLabel,EGLLabelKHR objectLabel,const char* message);
enum class EGLContextFlagMask : unsigned int;
enum class EGLContextProfileMask : unsigned int;
enum class EGLDRMBufferUseMESAMask : unsigned int;
enum class EGLLockUsageHintKHRMask : unsigned int;
enum class EGLNativeBufferUsageFlags : unsigned int;
enum class EGLRenderableTypeMask : unsigned int;
enum class EGLSurfaceTypeMask : unsigned int;
enum class EGLSyncFlagsKHR : unsigned int;

} // namespace egl


// Type Integrations


namespace std
{


template<>
struct hash<egl::EGLextension>
{
    hash<std::underlying_type<egl::EGLextension>::type>::result_type operator()(const egl::EGLextension & t) const
    {
        return hash<std::underlying_type<egl::EGLextension>::type>()(static_cast<std::underlying_type<egl::EGLextension>::type>(t));
    }
};


} // namespace std


namespace std
{


template<>
struct hash<egl::EGLenum>
{
    hash<std::underlying_type<egl::EGLenum>::type>::result_type operator()(const egl::EGLenum & t) const
    {
        return hash<std::underlying_type<egl::EGLenum>::type>()(static_cast<std::underlying_type<egl::EGLenum>::type>(t));
    }
};


} // namespace std


namespace egl
{


EGLBINDING_CONSTEXPR inline EGLenum operator+(const EGLenum & a, const std::underlying_type<EGLenum>::type b)
{
    return static_cast<EGLenum>(static_cast<std::underlying_type<EGLenum>::type>(a) + b);
}

EGLBINDING_CONSTEXPR inline EGLenum operator-(const EGLenum & a, const std::underlying_type<EGLenum>::type b)
{
    return static_cast<EGLenum>(static_cast<std::underlying_type<EGLenum>::type>(a) - b);
}


} // namespace egl


namespace egl{EGLBINDING_CONSTEXPR inline bool operator==(const EGLenum & a, std::underlying_type<EGLenum>::type b){    return static_cast<std::underlying_type<EGLenum>::type>(a) == b;}EGLBINDING_CONSTEXPR inline bool operator!=(const EGLenum & a, std::underlying_type<EGLenum>::type b){    return static_cast<std::underlying_type<EGLenum>::type>(a) != b;}EGLBINDING_CONSTEXPR inline bool operator< (const EGLenum & a, std::underlying_type<EGLenum>::type b){    return static_cast<std::underlying_type<EGLenum>::type>(a) < b;}EGLBINDING_CONSTEXPR inline bool operator<=(const EGLenum & a, std::underlying_type<EGLenum>::type b){    return static_cast<std::underlying_type<EGLenum>::type>(a) <= b;}EGLBINDING_CONSTEXPR inline bool operator> (const EGLenum & a, std::underlying_type<EGLenum>::type b){    return static_cast<std::underlying_type<EGLenum>::type>(a) > b;}EGLBINDING_CONSTEXPR inline bool operator>=(const EGLenum & a, std::underlying_type<EGLenum>::type b){    return static_cast<std::underlying_type<EGLenum>::type>(a) >= b;}EGLBINDING_CONSTEXPR inline bool operator==(std::underlying_type<EGLenum>::type a, const EGLenum & b){    return a == static_cast<std::underlying_type<EGLenum>::type>(b);}EGLBINDING_CONSTEXPR inline bool operator!=(std::underlying_type<EGLenum>::type a, const EGLenum & b){    return a != static_cast<std::underlying_type<EGLenum>::type>(b);}EGLBINDING_CONSTEXPR inline bool operator< (std::underlying_type<EGLenum>::type a, const EGLenum & b){    return a < static_cast<std::underlying_type<EGLenum>::type>(b);}EGLBINDING_CONSTEXPR inline bool operator<=(std::underlying_type<EGLenum>::type a, const EGLenum & b){    return a <= static_cast<std::underlying_type<EGLenum>::type>(b);}EGLBINDING_CONSTEXPR inline bool operator> (std::underlying_type<EGLenum>::type a, const EGLenum & b){    return a > static_cast<std::underlying_type<EGLenum>::type>(b);}EGLBINDING_CONSTEXPR inline bool operator>=(std::underlying_type<EGLenum>::type a, const EGLenum & b){    return a >= static_cast<std::underlying_type<EGLenum>::type>(b);}} // namespace egl


namespace std
{


template<>
struct hash<egl::EGLContextFlagMask>
{
    hash<std::underlying_type<egl::EGLContextFlagMask>::type>::result_type operator()(const egl::EGLContextFlagMask & t) const
    {
        return hash<std::underlying_type<egl::EGLContextFlagMask>::type>()(static_cast<std::underlying_type<egl::EGLContextFlagMask>::type>(t));
    }
};


} // namespace std


namespace egl
{


EGLBINDING_CONSTEXPR inline EGLContextFlagMask operator|(const EGLContextFlagMask & a, const EGLContextFlagMask & b)
{
    return static_cast<EGLContextFlagMask>(static_cast<std::underlying_type<EGLContextFlagMask>::type>(a) | static_cast<std::underlying_type<EGLContextFlagMask>::type>(b));
}

inline EGLContextFlagMask & operator|=(EGLContextFlagMask & a, const EGLContextFlagMask & b)
{
    a = static_cast<EGLContextFlagMask>(static_cast<std::underlying_type<EGLContextFlagMask>::type>(a) | static_cast<std::underlying_type<EGLContextFlagMask>::type>(b));

    return a;
}

EGLBINDING_CONSTEXPR inline EGLContextFlagMask operator&(const EGLContextFlagMask & a, const EGLContextFlagMask & b)
{
    return static_cast<EGLContextFlagMask>(static_cast<std::underlying_type<EGLContextFlagMask>::type>(a) & static_cast<std::underlying_type<EGLContextFlagMask>::type>(b));
}

inline EGLContextFlagMask & operator&=(EGLContextFlagMask & a, const EGLContextFlagMask & b)
{
    a = static_cast<EGLContextFlagMask>(static_cast<std::underlying_type<EGLContextFlagMask>::type>(a) & static_cast<std::underlying_type<EGLContextFlagMask>::type>(b));

    return a;
}

EGLBINDING_CONSTEXPR inline EGLContextFlagMask operator^(const EGLContextFlagMask & a, const EGLContextFlagMask & b)
{
    return static_cast<EGLContextFlagMask>(static_cast<std::underlying_type<EGLContextFlagMask>::type>(a) ^ static_cast<std::underlying_type<EGLContextFlagMask>::type>(b));
}

inline EGLContextFlagMask & operator^=(EGLContextFlagMask & a, const EGLContextFlagMask & b)
{
    a = static_cast<EGLContextFlagMask>(static_cast<std::underlying_type<EGLContextFlagMask>::type>(a) ^ static_cast<std::underlying_type<EGLContextFlagMask>::type>(b));

    return a;
}


} // namespace egl



namespace std
{


template<>
struct hash<egl::EGLContextProfileMask>
{
    hash<std::underlying_type<egl::EGLContextProfileMask>::type>::result_type operator()(const egl::EGLContextProfileMask & t) const
    {
        return hash<std::underlying_type<egl::EGLContextProfileMask>::type>()(static_cast<std::underlying_type<egl::EGLContextProfileMask>::type>(t));
    }
};


} // namespace std


namespace egl
{


EGLBINDING_CONSTEXPR inline EGLContextProfileMask operator|(const EGLContextProfileMask & a, const EGLContextProfileMask & b)
{
    return static_cast<EGLContextProfileMask>(static_cast<std::underlying_type<EGLContextProfileMask>::type>(a) | static_cast<std::underlying_type<EGLContextProfileMask>::type>(b));
}

inline EGLContextProfileMask & operator|=(EGLContextProfileMask & a, const EGLContextProfileMask & b)
{
    a = static_cast<EGLContextProfileMask>(static_cast<std::underlying_type<EGLContextProfileMask>::type>(a) | static_cast<std::underlying_type<EGLContextProfileMask>::type>(b));

    return a;
}

EGLBINDING_CONSTEXPR inline EGLContextProfileMask operator&(const EGLContextProfileMask & a, const EGLContextProfileMask & b)
{
    return static_cast<EGLContextProfileMask>(static_cast<std::underlying_type<EGLContextProfileMask>::type>(a) & static_cast<std::underlying_type<EGLContextProfileMask>::type>(b));
}

inline EGLContextProfileMask & operator&=(EGLContextProfileMask & a, const EGLContextProfileMask & b)
{
    a = static_cast<EGLContextProfileMask>(static_cast<std::underlying_type<EGLContextProfileMask>::type>(a) & static_cast<std::underlying_type<EGLContextProfileMask>::type>(b));

    return a;
}

EGLBINDING_CONSTEXPR inline EGLContextProfileMask operator^(const EGLContextProfileMask & a, const EGLContextProfileMask & b)
{
    return static_cast<EGLContextProfileMask>(static_cast<std::underlying_type<EGLContextProfileMask>::type>(a) ^ static_cast<std::underlying_type<EGLContextProfileMask>::type>(b));
}

inline EGLContextProfileMask & operator^=(EGLContextProfileMask & a, const EGLContextProfileMask & b)
{
    a = static_cast<EGLContextProfileMask>(static_cast<std::underlying_type<EGLContextProfileMask>::type>(a) ^ static_cast<std::underlying_type<EGLContextProfileMask>::type>(b));

    return a;
}


} // namespace egl



namespace std
{


template<>
struct hash<egl::EGLDRMBufferUseMESAMask>
{
    hash<std::underlying_type<egl::EGLDRMBufferUseMESAMask>::type>::result_type operator()(const egl::EGLDRMBufferUseMESAMask & t) const
    {
        return hash<std::underlying_type<egl::EGLDRMBufferUseMESAMask>::type>()(static_cast<std::underlying_type<egl::EGLDRMBufferUseMESAMask>::type>(t));
    }
};


} // namespace std


namespace egl
{


EGLBINDING_CONSTEXPR inline EGLDRMBufferUseMESAMask operator|(const EGLDRMBufferUseMESAMask & a, const EGLDRMBufferUseMESAMask & b)
{
    return static_cast<EGLDRMBufferUseMESAMask>(static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(a) | static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(b));
}

inline EGLDRMBufferUseMESAMask & operator|=(EGLDRMBufferUseMESAMask & a, const EGLDRMBufferUseMESAMask & b)
{
    a = static_cast<EGLDRMBufferUseMESAMask>(static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(a) | static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(b));

    return a;
}

EGLBINDING_CONSTEXPR inline EGLDRMBufferUseMESAMask operator&(const EGLDRMBufferUseMESAMask & a, const EGLDRMBufferUseMESAMask & b)
{
    return static_cast<EGLDRMBufferUseMESAMask>(static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(a) & static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(b));
}

inline EGLDRMBufferUseMESAMask & operator&=(EGLDRMBufferUseMESAMask & a, const EGLDRMBufferUseMESAMask & b)
{
    a = static_cast<EGLDRMBufferUseMESAMask>(static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(a) & static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(b));

    return a;
}

EGLBINDING_CONSTEXPR inline EGLDRMBufferUseMESAMask operator^(const EGLDRMBufferUseMESAMask & a, const EGLDRMBufferUseMESAMask & b)
{
    return static_cast<EGLDRMBufferUseMESAMask>(static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(a) ^ static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(b));
}

inline EGLDRMBufferUseMESAMask & operator^=(EGLDRMBufferUseMESAMask & a, const EGLDRMBufferUseMESAMask & b)
{
    a = static_cast<EGLDRMBufferUseMESAMask>(static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(a) ^ static_cast<std::underlying_type<EGLDRMBufferUseMESAMask>::type>(b));

    return a;
}


} // namespace egl



namespace std
{


template<>
struct hash<egl::EGLLockUsageHintKHRMask>
{
    hash<std::underlying_type<egl::EGLLockUsageHintKHRMask>::type>::result_type operator()(const egl::EGLLockUsageHintKHRMask & t) const
    {
        return hash<std::underlying_type<egl::EGLLockUsageHintKHRMask>::type>()(static_cast<std::underlying_type<egl::EGLLockUsageHintKHRMask>::type>(t));
    }
};


} // namespace std


namespace egl
{


EGLBINDING_CONSTEXPR inline EGLLockUsageHintKHRMask operator|(const EGLLockUsageHintKHRMask & a, const EGLLockUsageHintKHRMask & b)
{
    return static_cast<EGLLockUsageHintKHRMask>(static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(a) | static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(b));
}

inline EGLLockUsageHintKHRMask & operator|=(EGLLockUsageHintKHRMask & a, const EGLLockUsageHintKHRMask & b)
{
    a = static_cast<EGLLockUsageHintKHRMask>(static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(a) | static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(b));

    return a;
}

EGLBINDING_CONSTEXPR inline EGLLockUsageHintKHRMask operator&(const EGLLockUsageHintKHRMask & a, const EGLLockUsageHintKHRMask & b)
{
    return static_cast<EGLLockUsageHintKHRMask>(static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(a) & static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(b));
}

inline EGLLockUsageHintKHRMask & operator&=(EGLLockUsageHintKHRMask & a, const EGLLockUsageHintKHRMask & b)
{
    a = static_cast<EGLLockUsageHintKHRMask>(static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(a) & static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(b));

    return a;
}

EGLBINDING_CONSTEXPR inline EGLLockUsageHintKHRMask operator^(const EGLLockUsageHintKHRMask & a, const EGLLockUsageHintKHRMask & b)
{
    return static_cast<EGLLockUsageHintKHRMask>(static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(a) ^ static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(b));
}

inline EGLLockUsageHintKHRMask & operator^=(EGLLockUsageHintKHRMask & a, const EGLLockUsageHintKHRMask & b)
{
    a = static_cast<EGLLockUsageHintKHRMask>(static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(a) ^ static_cast<std::underlying_type<EGLLockUsageHintKHRMask>::type>(b));

    return a;
}


} // namespace egl



namespace std
{


template<>
struct hash<egl::EGLNativeBufferUsageFlags>
{
    hash<std::underlying_type<egl::EGLNativeBufferUsageFlags>::type>::result_type operator()(const egl::EGLNativeBufferUsageFlags & t) const
    {
        return hash<std::underlying_type<egl::EGLNativeBufferUsageFlags>::type>()(static_cast<std::underlying_type<egl::EGLNativeBufferUsageFlags>::type>(t));
    }
};


} // namespace std


namespace egl
{


EGLBINDING_CONSTEXPR inline EGLNativeBufferUsageFlags operator|(const EGLNativeBufferUsageFlags & a, const EGLNativeBufferUsageFlags & b)
{
    return static_cast<EGLNativeBufferUsageFlags>(static_cast<std::underlying_type<EGLNativeBufferUsageFlags>::type>(a) | static_cast<std::underlying_type<EGLNativeBufferUsageFlags>::type>(b));
}

inline EGLNativeBufferUsageFlags & operator|=(EGLNativeBufferUsageFlags & a, const EGLNativeBufferUsageFlags & b)
{
    a = static_cast<EGLNativeBufferUsageFlags>(static_cast<std::underlying_type<EGLNativeBufferUsageFlags>::type>(a) | static_cast<std::underlying_type<EGLNativeBufferUsageFlags>::type>(b));

    return a;
}

EGLBINDING_CONSTEXPR inline EGLNativeBufferUsageFlags operator&(const EGLNativeBufferUsageFlags & a, const EGLNativeBufferUsageFlags & b)
{
    return static_cast<EGLNativeBufferUsageFlags>(static_cast<std::underlying_type<EGLNativeBufferUsageFlags>::type>(a) & static_cast<std::underlying_type<EGLNativeBufferUsageFlags>::type>(b));
}

inline EGLNativeBufferUsageFlags & operator&=(EGLNativeBufferUsageFlags & a, const EGLNativeBufferUsageFlags & b)
{
    a = static_cast<EGLNativeBufferUsageFlags>(static_cast<std::underlying_type<EGLNativeBufferUsageFlags>::type>(a) & static_cast<std::underlying_type<EGLNativeBufferUsageFlags>::type>(b));

    return a;
}

EGLBINDING_CONSTEXPR inline EGLNativeBufferUsageFlags operator^(const EGLNativeBufferUsageFlags & a, const EGLNativeBufferUsageFlags & b)
{
    return static_cast<EGLNativeBufferUsageFlags>(static_cast<std::underlying_type<EGLNativeBufferUsageFlags>::type>(a) ^ static_cast<std::underlying_type<EGLNativeBufferUsageFlags>::type>(b));
}

inline EGLNativeBufferUsageFlags & operator^=(EGLNativeBufferUsageFlags & a, const EGLNativeBufferUsageFlags & b)
{
    a = static_cast<EGLNativeBufferUsageFlags>(static_cast<std::underlying_type<EGLNativeBufferUsageFlags>::type>(a) ^ static_cast<std::underlying_type<EGLNativeBufferUsageFlags>::type>(b));

    return a;
}


} // namespace egl



namespace std
{


template<>
struct hash<egl::EGLRenderableTypeMask>
{
    hash<std::underlying_type<egl::EGLRenderableTypeMask>::type>::result_type operator()(const egl::EGLRenderableTypeMask & t) const
    {
        return hash<std::underlying_type<egl::EGLRenderableTypeMask>::type>()(static_cast<std::underlying_type<egl::EGLRenderableTypeMask>::type>(t));
    }
};


} // namespace std


namespace egl
{


EGLBINDING_CONSTEXPR inline EGLRenderableTypeMask operator|(const EGLRenderableTypeMask & a, const EGLRenderableTypeMask & b)
{
    return static_cast<EGLRenderableTypeMask>(static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(a) | static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(b));
}

inline EGLRenderableTypeMask & operator|=(EGLRenderableTypeMask & a, const EGLRenderableTypeMask & b)
{
    a = static_cast<EGLRenderableTypeMask>(static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(a) | static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(b));

    return a;
}

EGLBINDING_CONSTEXPR inline EGLRenderableTypeMask operator&(const EGLRenderableTypeMask & a, const EGLRenderableTypeMask & b)
{
    return static_cast<EGLRenderableTypeMask>(static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(a) & static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(b));
}

inline EGLRenderableTypeMask & operator&=(EGLRenderableTypeMask & a, const EGLRenderableTypeMask & b)
{
    a = static_cast<EGLRenderableTypeMask>(static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(a) & static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(b));

    return a;
}

EGLBINDING_CONSTEXPR inline EGLRenderableTypeMask operator^(const EGLRenderableTypeMask & a, const EGLRenderableTypeMask & b)
{
    return static_cast<EGLRenderableTypeMask>(static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(a) ^ static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(b));
}

inline EGLRenderableTypeMask & operator^=(EGLRenderableTypeMask & a, const EGLRenderableTypeMask & b)
{
    a = static_cast<EGLRenderableTypeMask>(static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(a) ^ static_cast<std::underlying_type<EGLRenderableTypeMask>::type>(b));

    return a;
}


} // namespace egl



namespace std
{


template<>
struct hash<egl::EGLSurfaceTypeMask>
{
    hash<std::underlying_type<egl::EGLSurfaceTypeMask>::type>::result_type operator()(const egl::EGLSurfaceTypeMask & t) const
    {
        return hash<std::underlying_type<egl::EGLSurfaceTypeMask>::type>()(static_cast<std::underlying_type<egl::EGLSurfaceTypeMask>::type>(t));
    }
};


} // namespace std


namespace egl
{


EGLBINDING_CONSTEXPR inline EGLSurfaceTypeMask operator|(const EGLSurfaceTypeMask & a, const EGLSurfaceTypeMask & b)
{
    return static_cast<EGLSurfaceTypeMask>(static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(a) | static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(b));
}

inline EGLSurfaceTypeMask & operator|=(EGLSurfaceTypeMask & a, const EGLSurfaceTypeMask & b)
{
    a = static_cast<EGLSurfaceTypeMask>(static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(a) | static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(b));

    return a;
}

EGLBINDING_CONSTEXPR inline EGLSurfaceTypeMask operator&(const EGLSurfaceTypeMask & a, const EGLSurfaceTypeMask & b)
{
    return static_cast<EGLSurfaceTypeMask>(static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(a) & static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(b));
}

inline EGLSurfaceTypeMask & operator&=(EGLSurfaceTypeMask & a, const EGLSurfaceTypeMask & b)
{
    a = static_cast<EGLSurfaceTypeMask>(static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(a) & static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(b));

    return a;
}

EGLBINDING_CONSTEXPR inline EGLSurfaceTypeMask operator^(const EGLSurfaceTypeMask & a, const EGLSurfaceTypeMask & b)
{
    return static_cast<EGLSurfaceTypeMask>(static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(a) ^ static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(b));
}

inline EGLSurfaceTypeMask & operator^=(EGLSurfaceTypeMask & a, const EGLSurfaceTypeMask & b)
{
    a = static_cast<EGLSurfaceTypeMask>(static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(a) ^ static_cast<std::underlying_type<EGLSurfaceTypeMask>::type>(b));

    return a;
}


} // namespace egl



namespace std
{


template<>
struct hash<egl::EGLSyncFlagsKHR>
{
    hash<std::underlying_type<egl::EGLSyncFlagsKHR>::type>::result_type operator()(const egl::EGLSyncFlagsKHR & t) const
    {
        return hash<std::underlying_type<egl::EGLSyncFlagsKHR>::type>()(static_cast<std::underlying_type<egl::EGLSyncFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace egl
{


EGLBINDING_CONSTEXPR inline EGLSyncFlagsKHR operator|(const EGLSyncFlagsKHR & a, const EGLSyncFlagsKHR & b)
{
    return static_cast<EGLSyncFlagsKHR>(static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(a) | static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(b));
}

inline EGLSyncFlagsKHR & operator|=(EGLSyncFlagsKHR & a, const EGLSyncFlagsKHR & b)
{
    a = static_cast<EGLSyncFlagsKHR>(static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(a) | static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(b));

    return a;
}

EGLBINDING_CONSTEXPR inline EGLSyncFlagsKHR operator&(const EGLSyncFlagsKHR & a, const EGLSyncFlagsKHR & b)
{
    return static_cast<EGLSyncFlagsKHR>(static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(a) & static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(b));
}

inline EGLSyncFlagsKHR & operator&=(EGLSyncFlagsKHR & a, const EGLSyncFlagsKHR & b)
{
    a = static_cast<EGLSyncFlagsKHR>(static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(a) & static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(b));

    return a;
}

EGLBINDING_CONSTEXPR inline EGLSyncFlagsKHR operator^(const EGLSyncFlagsKHR & a, const EGLSyncFlagsKHR & b)
{
    return static_cast<EGLSyncFlagsKHR>(static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(b));
}

inline EGLSyncFlagsKHR & operator^=(EGLSyncFlagsKHR & a, const EGLSyncFlagsKHR & b)
{
    a = static_cast<EGLSyncFlagsKHR>(static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<EGLSyncFlagsKHR>::type>(b));

    return a;
}


} // namespace egl


