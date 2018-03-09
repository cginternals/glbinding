
#pragma once


#include <eglbinding/nogl.h>
#include <eglbinding/eglbinding_api.h>
#include <eglbinding/eglbinding_features.h>
#include <eglbinding/egl/boolean.h>

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


namespace egl
{


enum class GLextension : int;
struct AHardwareBuffer;
using EGLBoolean = unsigned int;
using EGLenum = unsigned int;
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
using __eglMustCastToProperFunctionPointerType = void (GL_APIENTRY *)(void);
using EGLTimeKHR = khronos_utime_nanoseconds_t;
using EGLTime = khronos_utime_nanoseconds_t;
using EGLTimeNV = khronos_utime_nanoseconds_t;
using EGLuint64NV = khronos_utime_nanoseconds_t;
using EGLuint64KHR = khronos_uint64_t;
using EGLnsecsANDROID = khronos_stime_nanoseconds_t;
using EGLNativeFileDescriptorKHR = int;
using EGLsizeiANDROID = khronos_ssize_t;
using EGLSetBlobFuncANDROID = void (GL_APIENTRY *) (const void *key, EGLsizeiANDROID keySize, const void *value, EGLsizeiANDROID valueSize);
using EGLGetBlobFuncANDROID = EGLsizeiANDROID (GL_APIENTRY *) (const void *key, EGLsizeiANDROID keySize, void *value, EGLsizeiANDROID valueSize);
struct EGLClientPixmapHI {
    void  *pData;
    EGLint iWidth;
    EGLint iHeight;
    EGLint iStride;
};
using EGLDEBUGPROCKHR = void (GL_APIENTRY *)(EGLenum error,const char *command,EGLint messageType,EGLLabelKHR threadLabel,EGLLabelKHR objectLabel,const char* message);
using GLuint_array_2 = std::array<GLuint, 2>;

} // namespace egl


// Type Integrations


namespace std
{


template<>
struct hash<egl::GLextension>
{
    hash<std::underlying_type<egl::GLextension>::type>::result_type operator()(const egl::GLextension & t) const
    {
        return hash<std::underlying_type<egl::GLextension>::type>()(static_cast<std::underlying_type<egl::GLextension>::type>(t));
    }
};


} // namespace std


namespace egl
{


EGLBINDING_API std::ostream & operator<<(std::ostream & stream, const GLextension & value);


} // namespace egl


