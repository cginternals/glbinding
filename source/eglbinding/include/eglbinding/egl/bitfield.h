
#pragma once


#include <eglbinding/noegl.h>

#include <eglbinding/eglbinding_features.h>

#include <eglbinding/SharedBitfield.h>


namespace egl
{


enum class EGLContextFlagMask : unsigned int
{
    EGL_NONE_BIT                                     = 0x0, // Generic EGL_NONE_BIT
    EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR                 = 0x00000001,
    EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR    = 0x00000002,
    EGL_CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR         = 0x00000004,
};


enum class EGLContextProfileMask : unsigned int
{
    EGL_NONE_BIT                                     = 0x0, // Generic EGL_NONE_BIT
    EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT              = 0x00000001,
    EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR          = 0x00000001,
    EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT     = 0x00000002,
    EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT_KHR = 0x00000002,
};


enum class EGLDRMBufferUseMESAMask : unsigned int
{
    EGL_NONE_BIT                                     = 0x0, // Generic EGL_NONE_BIT
    EGL_DRM_BUFFER_USE_SCANOUT_MESA                  = 0x00000001,
    EGL_DRM_BUFFER_USE_SHARE_MESA                    = 0x00000002,
    EGL_DRM_BUFFER_USE_CURSOR_MESA                   = 0x00000004,
};


enum class EGLLockUsageHintKHRMask : unsigned int
{
    EGL_NONE_BIT                                     = 0x0, // Generic EGL_NONE_BIT
    EGL_READ_SURFACE_BIT_KHR                         = 0x0001,
    EGL_WRITE_SURFACE_BIT_KHR                        = 0x0002,
};


enum class EGLNativeBufferUsageFlags : unsigned int
{
    EGL_NONE_BIT                                     = 0x0, // Generic EGL_NONE_BIT
    EGL_NATIVE_BUFFER_USAGE_PROTECTED_BIT_ANDROID    = 0x00000001,
    EGL_NATIVE_BUFFER_USAGE_RENDERBUFFER_BIT_ANDROID = 0x00000002,
    EGL_NATIVE_BUFFER_USAGE_TEXTURE_BIT_ANDROID      = 0x00000004,
};


enum class EGLRenderableTypeMask : unsigned int
{
    EGL_NONE_BIT                                     = 0x0, // Generic EGL_NONE_BIT
    EGL_OPENGL_ES3_BIT                               = 0x00000040,
    EGL_OPENGL_ES3_BIT_KHR                           = 0x00000040,
    EGL_OPENGL_ES_BIT                                = 0x0001,
    EGL_OPENVG_BIT                                   = 0x0002,
    EGL_OPENGL_ES2_BIT                               = 0x0004,
    EGL_OPENGL_BIT                                   = 0x0008,
};


enum class EGLSurfaceTypeMask : unsigned int
{
    EGL_NONE_BIT                                     = 0x0, // Generic EGL_NONE_BIT
    EGL_PBUFFER_BIT                                  = 0x0001,
    EGL_PIXMAP_BIT                                   = 0x0002,
    EGL_WINDOW_BIT                                   = 0x0004,
    EGL_VG_COLORSPACE_LINEAR_BIT                     = 0x0020,
    EGL_VG_COLORSPACE_LINEAR_BIT_KHR                 = 0x0020,
    EGL_VG_ALPHA_FORMAT_PRE_BIT                      = 0x0040,
    EGL_VG_ALPHA_FORMAT_PRE_BIT_KHR                  = 0x0040,
    EGL_LOCK_SURFACE_BIT_KHR                         = 0x0080,
    EGL_OPTIMAL_FORMAT_BIT_KHR                       = 0x0100,
    EGL_MULTISAMPLE_RESOLVE_BOX_BIT                  = 0x0200,
    EGL_SWAP_BEHAVIOR_PRESERVED_BIT                  = 0x0400,
    EGL_STREAM_BIT_KHR                               = 0x0800,
    EGL_MUTABLE_RENDER_BUFFER_BIT_KHR                = 0x1000,
};


enum class EGLSyncFlagsKHR : unsigned int
{
    EGL_NONE_BIT                                     = 0x0, // Generic EGL_NONE_BIT
    EGL_SYNC_FLUSH_COMMANDS_BIT                      = 0x0001,
    EGL_SYNC_FLUSH_COMMANDS_BIT_KHR                  = 0x0001,
    EGL_SYNC_FLUSH_COMMANDS_BIT_NV                   = 0x0001,
};



// import bitfields to namespace

EGLBINDING_CONSTEXPR static const eglbinding::SharedBitfield<EGLContextFlagMask, EGLContextProfileMask, EGLDRMBufferUseMESAMask, EGLLockUsageHintKHRMask, EGLNativeBufferUsageFlags, EGLRenderableTypeMask, EGLSurfaceTypeMask, EGLSyncFlagsKHR> EGL_NONE_BIT = EGLContextFlagMask::EGL_NONE_BIT;
EGLBINDING_CONSTEXPR static const EGLContextProfileMask EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT = EGLContextProfileMask::EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT;
EGLBINDING_CONSTEXPR static const EGLContextProfileMask EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR = EGLContextProfileMask::EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR;
EGLBINDING_CONSTEXPR static const EGLContextFlagMask EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR = EGLContextFlagMask::EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR;
EGLBINDING_CONSTEXPR static const EGLDRMBufferUseMESAMask EGL_DRM_BUFFER_USE_SCANOUT_MESA = EGLDRMBufferUseMESAMask::EGL_DRM_BUFFER_USE_SCANOUT_MESA;
EGLBINDING_CONSTEXPR static const EGLNativeBufferUsageFlags EGL_NATIVE_BUFFER_USAGE_PROTECTED_BIT_ANDROID = EGLNativeBufferUsageFlags::EGL_NATIVE_BUFFER_USAGE_PROTECTED_BIT_ANDROID;
EGLBINDING_CONSTEXPR static const EGLContextProfileMask EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT = EGLContextProfileMask::EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT;
EGLBINDING_CONSTEXPR static const EGLContextProfileMask EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT_KHR = EGLContextProfileMask::EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT_KHR;
EGLBINDING_CONSTEXPR static const EGLContextFlagMask EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR = EGLContextFlagMask::EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR;
EGLBINDING_CONSTEXPR static const EGLDRMBufferUseMESAMask EGL_DRM_BUFFER_USE_SHARE_MESA = EGLDRMBufferUseMESAMask::EGL_DRM_BUFFER_USE_SHARE_MESA;
EGLBINDING_CONSTEXPR static const EGLNativeBufferUsageFlags EGL_NATIVE_BUFFER_USAGE_RENDERBUFFER_BIT_ANDROID = EGLNativeBufferUsageFlags::EGL_NATIVE_BUFFER_USAGE_RENDERBUFFER_BIT_ANDROID;
EGLBINDING_CONSTEXPR static const EGLContextFlagMask EGL_CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR = EGLContextFlagMask::EGL_CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR;
EGLBINDING_CONSTEXPR static const EGLDRMBufferUseMESAMask EGL_DRM_BUFFER_USE_CURSOR_MESA = EGLDRMBufferUseMESAMask::EGL_DRM_BUFFER_USE_CURSOR_MESA;
EGLBINDING_CONSTEXPR static const EGLNativeBufferUsageFlags EGL_NATIVE_BUFFER_USAGE_TEXTURE_BIT_ANDROID = EGLNativeBufferUsageFlags::EGL_NATIVE_BUFFER_USAGE_TEXTURE_BIT_ANDROID;
EGLBINDING_CONSTEXPR static const EGLRenderableTypeMask EGL_OPENGL_ES3_BIT = EGLRenderableTypeMask::EGL_OPENGL_ES3_BIT;
EGLBINDING_CONSTEXPR static const EGLRenderableTypeMask EGL_OPENGL_ES3_BIT_KHR = EGLRenderableTypeMask::EGL_OPENGL_ES3_BIT_KHR;
EGLBINDING_CONSTEXPR static const EGLRenderableTypeMask EGL_OPENGL_ES_BIT = EGLRenderableTypeMask::EGL_OPENGL_ES_BIT;
EGLBINDING_CONSTEXPR static const EGLSurfaceTypeMask EGL_PBUFFER_BIT = EGLSurfaceTypeMask::EGL_PBUFFER_BIT;
EGLBINDING_CONSTEXPR static const EGLLockUsageHintKHRMask EGL_READ_SURFACE_BIT_KHR = EGLLockUsageHintKHRMask::EGL_READ_SURFACE_BIT_KHR;
EGLBINDING_CONSTEXPR static const EGLSyncFlagsKHR EGL_SYNC_FLUSH_COMMANDS_BIT = EGLSyncFlagsKHR::EGL_SYNC_FLUSH_COMMANDS_BIT;
EGLBINDING_CONSTEXPR static const EGLSyncFlagsKHR EGL_SYNC_FLUSH_COMMANDS_BIT_KHR = EGLSyncFlagsKHR::EGL_SYNC_FLUSH_COMMANDS_BIT_KHR;
EGLBINDING_CONSTEXPR static const EGLSyncFlagsKHR EGL_SYNC_FLUSH_COMMANDS_BIT_NV = EGLSyncFlagsKHR::EGL_SYNC_FLUSH_COMMANDS_BIT_NV;
EGLBINDING_CONSTEXPR static const EGLRenderableTypeMask EGL_OPENVG_BIT = EGLRenderableTypeMask::EGL_OPENVG_BIT;
EGLBINDING_CONSTEXPR static const EGLSurfaceTypeMask EGL_PIXMAP_BIT = EGLSurfaceTypeMask::EGL_PIXMAP_BIT;
EGLBINDING_CONSTEXPR static const EGLLockUsageHintKHRMask EGL_WRITE_SURFACE_BIT_KHR = EGLLockUsageHintKHRMask::EGL_WRITE_SURFACE_BIT_KHR;
EGLBINDING_CONSTEXPR static const EGLRenderableTypeMask EGL_OPENGL_ES2_BIT = EGLRenderableTypeMask::EGL_OPENGL_ES2_BIT;
EGLBINDING_CONSTEXPR static const EGLSurfaceTypeMask EGL_WINDOW_BIT = EGLSurfaceTypeMask::EGL_WINDOW_BIT;
EGLBINDING_CONSTEXPR static const EGLRenderableTypeMask EGL_OPENGL_BIT = EGLRenderableTypeMask::EGL_OPENGL_BIT;
EGLBINDING_CONSTEXPR static const EGLSurfaceTypeMask EGL_VG_COLORSPACE_LINEAR_BIT = EGLSurfaceTypeMask::EGL_VG_COLORSPACE_LINEAR_BIT;
EGLBINDING_CONSTEXPR static const EGLSurfaceTypeMask EGL_VG_COLORSPACE_LINEAR_BIT_KHR = EGLSurfaceTypeMask::EGL_VG_COLORSPACE_LINEAR_BIT_KHR;
EGLBINDING_CONSTEXPR static const EGLSurfaceTypeMask EGL_VG_ALPHA_FORMAT_PRE_BIT = EGLSurfaceTypeMask::EGL_VG_ALPHA_FORMAT_PRE_BIT;
EGLBINDING_CONSTEXPR static const EGLSurfaceTypeMask EGL_VG_ALPHA_FORMAT_PRE_BIT_KHR = EGLSurfaceTypeMask::EGL_VG_ALPHA_FORMAT_PRE_BIT_KHR;
EGLBINDING_CONSTEXPR static const EGLSurfaceTypeMask EGL_LOCK_SURFACE_BIT_KHR = EGLSurfaceTypeMask::EGL_LOCK_SURFACE_BIT_KHR;
EGLBINDING_CONSTEXPR static const EGLSurfaceTypeMask EGL_OPTIMAL_FORMAT_BIT_KHR = EGLSurfaceTypeMask::EGL_OPTIMAL_FORMAT_BIT_KHR;
EGLBINDING_CONSTEXPR static const EGLSurfaceTypeMask EGL_MULTISAMPLE_RESOLVE_BOX_BIT = EGLSurfaceTypeMask::EGL_MULTISAMPLE_RESOLVE_BOX_BIT;
EGLBINDING_CONSTEXPR static const EGLSurfaceTypeMask EGL_SWAP_BEHAVIOR_PRESERVED_BIT = EGLSurfaceTypeMask::EGL_SWAP_BEHAVIOR_PRESERVED_BIT;
EGLBINDING_CONSTEXPR static const EGLSurfaceTypeMask EGL_STREAM_BIT_KHR = EGLSurfaceTypeMask::EGL_STREAM_BIT_KHR;
EGLBINDING_CONSTEXPR static const EGLSurfaceTypeMask EGL_MUTABLE_RENDER_BUFFER_BIT_KHR = EGLSurfaceTypeMask::EGL_MUTABLE_RENDER_BUFFER_BIT_KHR;


} // namespace egl
