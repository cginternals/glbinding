#pragma once

#include <eglbinding/noegl.h>
#include <eglbinding/eglbinding_api.h>

#include <cstddef>
#include <cstdint>
#include <array>

#include <functional>
#include <ostream>
#include <string>

#ifdef _MSC_VER
#define EGL_APIENTRY __stdcall
#else
#define EGL_APIENTRY
#endif

#include <KHR/khrplatform.h>

namespace egl
{

enum class EGLextension : int;
using EGLint = khronos_int32_t;
enum class EGLboolean : unsigned int;
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
using EGLNativeDisplayType = void *;
using EGLNativePixmapType = khronos_uintptr_t;
using EGLNativeWindowType = khronos_uintptr_t;
using NativeDisplayType = EGLNativeDisplayType;
using NativePixmapType = EGLNativePixmapType;
using NativeWindowType = EGLNativeWindowType;
using EGLbitfield = unsigned int;
enum class EGLContextFlagMask : unsigned int;
enum class EGLContextProfileMask : unsigned int;
enum class EGLDRMBufferUseMESAMask : unsigned int;
enum class EGLLockUsageHintKHRMask : unsigned int;
enum class EGLRenderableTypeMask : unsigned int;
enum class EGLSurfaceTypeMask : unsigned int;
enum class EGLSyncFlagsKHR : unsigned int;

} // namespace egl

#include <eglbinding/egl/typeintegrations.h>
