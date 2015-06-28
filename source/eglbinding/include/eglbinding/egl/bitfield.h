#pragma once

#include <eglbinding/noegl.h>

#include <eglbinding/SharedBitfield.h>

namespace egl
{

enum class EGLContextFlagMask : unsigned int
{
    EGL_NONE_BIT                                  = 0x0, // Generic EGL_NONE_BIT
    EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR              = 0x00000001,
    EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR = 0x00000002,
    EGL_CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR      = 0x00000004,
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
    EGL_NONE_BIT                    = 0x0, // Generic EGL_NONE_BIT
    EGL_DRM_BUFFER_USE_SCANOUT_MESA = 0x00000001,
    EGL_DRM_BUFFER_USE_SHARE_MESA   = 0x00000002,
};


enum class EGLLockUsageHintKHRMask : unsigned int
{
    EGL_NONE_BIT              = 0x0, // Generic EGL_NONE_BIT
    EGL_READ_SURFACE_BIT_KHR  = 0x0001,
    EGL_WRITE_SURFACE_BIT_KHR = 0x0002,
};


enum class EGLRenderableTypeMask : unsigned int
{
    EGL_NONE_BIT           = 0x0, // Generic EGL_NONE_BIT
    EGL_OPENGL_ES3_BIT     = 0x00000040,
    EGL_OPENGL_ES3_BIT_KHR = 0x00000040,
    EGL_OPENGL_ES_BIT      = 0x0001,
    EGL_OPENVG_BIT         = 0x0002,
    EGL_OPENGL_ES2_BIT     = 0x0004,
    EGL_OPENGL_BIT         = 0x0008,
};


enum class EGLSurfaceTypeMask : unsigned int
{
    EGL_NONE_BIT                     = 0x0, // Generic EGL_NONE_BIT
    EGL_PBUFFER_BIT                  = 0x0001,
    EGL_PIXMAP_BIT                   = 0x0002,
    EGL_WINDOW_BIT                   = 0x0004,
    EGL_VG_COLORSPACE_LINEAR_BIT     = 0x0020,
    EGL_VG_COLORSPACE_LINEAR_BIT_KHR = 0x0020,
    EGL_VG_ALPHA_FORMAT_PRE_BIT      = 0x0040,
    EGL_VG_ALPHA_FORMAT_PRE_BIT_KHR  = 0x0040,
    EGL_LOCK_SURFACE_BIT_KHR         = 0x0080,
    EGL_OPTIMAL_FORMAT_BIT_KHR       = 0x0100,
    EGL_MULTISAMPLE_RESOLVE_BOX_BIT  = 0x0200,
    EGL_SWAP_BEHAVIOR_PRESERVED_BIT  = 0x0400,
    EGL_STREAM_BIT_KHR               = 0x0800,
};


enum class EGLSyncFlagsKHR : unsigned int
{
    EGL_NONE_BIT                    = 0x0, // Generic EGL_NONE_BIT
    EGL_SYNC_FLUSH_COMMANDS_BIT     = 0x0001,
    EGL_SYNC_FLUSH_COMMANDS_BIT_KHR = 0x0001,
    EGL_SYNC_FLUSH_COMMANDS_BIT_NV  = 0x0001,
};



// import bitfields to namespace

static const eglbinding::SharedBitfield<egl::EGLContextFlagMask, egl::EGLContextProfileMask, egl::EGLDRMBufferUseMESAMask, egl::EGLLockUsageHintKHRMask, egl::EGLRenderableTypeMask, egl::EGLSurfaceTypeMask, egl::EGLSyncFlagsKHR> EGL_NONE_BIT = egl::EGLContextFlagMask::EGL_NONE_BIT;
static const EGLContextProfileMask EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT = EGLContextProfileMask::EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT;
static const EGLContextProfileMask EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR = EGLContextProfileMask::EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR;
static const EGLContextFlagMask EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR = EGLContextFlagMask::EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR;
static const EGLDRMBufferUseMESAMask EGL_DRM_BUFFER_USE_SCANOUT_MESA = EGLDRMBufferUseMESAMask::EGL_DRM_BUFFER_USE_SCANOUT_MESA;
static const EGLContextProfileMask EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT = EGLContextProfileMask::EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT;
static const EGLContextProfileMask EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT_KHR = EGLContextProfileMask::EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT_KHR;
static const EGLContextFlagMask EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR = EGLContextFlagMask::EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR;
static const EGLDRMBufferUseMESAMask EGL_DRM_BUFFER_USE_SHARE_MESA = EGLDRMBufferUseMESAMask::EGL_DRM_BUFFER_USE_SHARE_MESA;
static const EGLContextFlagMask EGL_CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR = EGLContextFlagMask::EGL_CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR;
static const EGLRenderableTypeMask EGL_OPENGL_ES3_BIT = EGLRenderableTypeMask::EGL_OPENGL_ES3_BIT;
static const EGLRenderableTypeMask EGL_OPENGL_ES3_BIT_KHR = EGLRenderableTypeMask::EGL_OPENGL_ES3_BIT_KHR;
static const EGLRenderableTypeMask EGL_OPENGL_ES_BIT = EGLRenderableTypeMask::EGL_OPENGL_ES_BIT;
static const EGLSurfaceTypeMask EGL_PBUFFER_BIT = EGLSurfaceTypeMask::EGL_PBUFFER_BIT;
static const EGLLockUsageHintKHRMask EGL_READ_SURFACE_BIT_KHR = EGLLockUsageHintKHRMask::EGL_READ_SURFACE_BIT_KHR;
static const EGLSyncFlagsKHR EGL_SYNC_FLUSH_COMMANDS_BIT = EGLSyncFlagsKHR::EGL_SYNC_FLUSH_COMMANDS_BIT;
static const EGLSyncFlagsKHR EGL_SYNC_FLUSH_COMMANDS_BIT_KHR = EGLSyncFlagsKHR::EGL_SYNC_FLUSH_COMMANDS_BIT_KHR;
static const EGLSyncFlagsKHR EGL_SYNC_FLUSH_COMMANDS_BIT_NV = EGLSyncFlagsKHR::EGL_SYNC_FLUSH_COMMANDS_BIT_NV;
static const EGLRenderableTypeMask EGL_OPENVG_BIT = EGLRenderableTypeMask::EGL_OPENVG_BIT;
static const EGLSurfaceTypeMask EGL_PIXMAP_BIT = EGLSurfaceTypeMask::EGL_PIXMAP_BIT;
static const EGLLockUsageHintKHRMask EGL_WRITE_SURFACE_BIT_KHR = EGLLockUsageHintKHRMask::EGL_WRITE_SURFACE_BIT_KHR;
static const EGLRenderableTypeMask EGL_OPENGL_ES2_BIT = EGLRenderableTypeMask::EGL_OPENGL_ES2_BIT;
static const EGLSurfaceTypeMask EGL_WINDOW_BIT = EGLSurfaceTypeMask::EGL_WINDOW_BIT;
static const EGLRenderableTypeMask EGL_OPENGL_BIT = EGLRenderableTypeMask::EGL_OPENGL_BIT;
static const EGLSurfaceTypeMask EGL_VG_COLORSPACE_LINEAR_BIT = EGLSurfaceTypeMask::EGL_VG_COLORSPACE_LINEAR_BIT;
static const EGLSurfaceTypeMask EGL_VG_COLORSPACE_LINEAR_BIT_KHR = EGLSurfaceTypeMask::EGL_VG_COLORSPACE_LINEAR_BIT_KHR;
static const EGLSurfaceTypeMask EGL_VG_ALPHA_FORMAT_PRE_BIT = EGLSurfaceTypeMask::EGL_VG_ALPHA_FORMAT_PRE_BIT;
static const EGLSurfaceTypeMask EGL_VG_ALPHA_FORMAT_PRE_BIT_KHR = EGLSurfaceTypeMask::EGL_VG_ALPHA_FORMAT_PRE_BIT_KHR;
static const EGLSurfaceTypeMask EGL_LOCK_SURFACE_BIT_KHR = EGLSurfaceTypeMask::EGL_LOCK_SURFACE_BIT_KHR;
static const EGLSurfaceTypeMask EGL_OPTIMAL_FORMAT_BIT_KHR = EGLSurfaceTypeMask::EGL_OPTIMAL_FORMAT_BIT_KHR;
static const EGLSurfaceTypeMask EGL_MULTISAMPLE_RESOLVE_BOX_BIT = EGLSurfaceTypeMask::EGL_MULTISAMPLE_RESOLVE_BOX_BIT;
static const EGLSurfaceTypeMask EGL_SWAP_BEHAVIOR_PRESERVED_BIT = EGLSurfaceTypeMask::EGL_SWAP_BEHAVIOR_PRESERVED_BIT;
static const EGLSurfaceTypeMask EGL_STREAM_BIT_KHR = EGLSurfaceTypeMask::EGL_STREAM_BIT_KHR;

} // namespace egl
