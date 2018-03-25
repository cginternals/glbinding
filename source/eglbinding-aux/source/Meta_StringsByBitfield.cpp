
#include "Meta_Maps.h"

#include <eglbinding/egl/bitfield.h>


using namespace egl;


namespace eglbinding { namespace aux
{


const std::unordered_map<EGLContextFlagMask, std::string> Meta_StringsByEGLContextFlagMask =
{
    { EGLContextFlagMask::EGL_NONE_BIT, "EGL_NONE_BIT" },
    { EGLContextFlagMask::EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR, "EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR" },
    { EGLContextFlagMask::EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR, "EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR" },
    { EGLContextFlagMask::EGL_CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR, "EGL_CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR" }
};


const std::unordered_map<EGLContextProfileMask, std::string> Meta_StringsByEGLContextProfileMask =
{
    { EGLContextProfileMask::EGL_NONE_BIT, "EGL_NONE_BIT" },
    { EGLContextProfileMask::EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT, "EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT" },
    { EGLContextProfileMask::EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR, "EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR" },
    { EGLContextProfileMask::EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT, "EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT" },
    { EGLContextProfileMask::EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT_KHR, "EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT_KHR" }
};


const std::unordered_map<EGLDRMBufferUseMESAMask, std::string> Meta_StringsByEGLDRMBufferUseMESAMask =
{
    { EGLDRMBufferUseMESAMask::EGL_NONE_BIT, "EGL_NONE_BIT" },
    { EGLDRMBufferUseMESAMask::EGL_DRM_BUFFER_USE_SCANOUT_MESA, "EGL_DRM_BUFFER_USE_SCANOUT_MESA" },
    { EGLDRMBufferUseMESAMask::EGL_DRM_BUFFER_USE_SHARE_MESA, "EGL_DRM_BUFFER_USE_SHARE_MESA" },
    { EGLDRMBufferUseMESAMask::EGL_DRM_BUFFER_USE_CURSOR_MESA, "EGL_DRM_BUFFER_USE_CURSOR_MESA" }
};


const std::unordered_map<EGLLockUsageHintKHRMask, std::string> Meta_StringsByEGLLockUsageHintKHRMask =
{
    { EGLLockUsageHintKHRMask::EGL_NONE_BIT, "EGL_NONE_BIT" },
    { EGLLockUsageHintKHRMask::EGL_READ_SURFACE_BIT_KHR, "EGL_READ_SURFACE_BIT_KHR" },
    { EGLLockUsageHintKHRMask::EGL_WRITE_SURFACE_BIT_KHR, "EGL_WRITE_SURFACE_BIT_KHR" }
};


const std::unordered_map<EGLNativeBufferUsageFlags, std::string> Meta_StringsByEGLNativeBufferUsageFlags =
{
    { EGLNativeBufferUsageFlags::EGL_NONE_BIT, "EGL_NONE_BIT" },
    { EGLNativeBufferUsageFlags::EGL_NATIVE_BUFFER_USAGE_PROTECTED_BIT_ANDROID, "EGL_NATIVE_BUFFER_USAGE_PROTECTED_BIT_ANDROID" },
    { EGLNativeBufferUsageFlags::EGL_NATIVE_BUFFER_USAGE_RENDERBUFFER_BIT_ANDROID, "EGL_NATIVE_BUFFER_USAGE_RENDERBUFFER_BIT_ANDROID" },
    { EGLNativeBufferUsageFlags::EGL_NATIVE_BUFFER_USAGE_TEXTURE_BIT_ANDROID, "EGL_NATIVE_BUFFER_USAGE_TEXTURE_BIT_ANDROID" }
};


const std::unordered_map<EGLRenderableTypeMask, std::string> Meta_StringsByEGLRenderableTypeMask =
{
    { EGLRenderableTypeMask::EGL_NONE_BIT, "EGL_NONE_BIT" },
    { EGLRenderableTypeMask::EGL_OPENGL_ES3_BIT, "EGL_OPENGL_ES3_BIT" },
    { EGLRenderableTypeMask::EGL_OPENGL_ES3_BIT_KHR, "EGL_OPENGL_ES3_BIT_KHR" },
    { EGLRenderableTypeMask::EGL_OPENGL_ES_BIT, "EGL_OPENGL_ES_BIT" },
    { EGLRenderableTypeMask::EGL_OPENVG_BIT, "EGL_OPENVG_BIT" },
    { EGLRenderableTypeMask::EGL_OPENGL_ES2_BIT, "EGL_OPENGL_ES2_BIT" },
    { EGLRenderableTypeMask::EGL_OPENGL_BIT, "EGL_OPENGL_BIT" }
};


const std::unordered_map<EGLSurfaceTypeMask, std::string> Meta_StringsByEGLSurfaceTypeMask =
{
    { EGLSurfaceTypeMask::EGL_NONE_BIT, "EGL_NONE_BIT" },
    { EGLSurfaceTypeMask::EGL_PBUFFER_BIT, "EGL_PBUFFER_BIT" },
    { EGLSurfaceTypeMask::EGL_PIXMAP_BIT, "EGL_PIXMAP_BIT" },
    { EGLSurfaceTypeMask::EGL_WINDOW_BIT, "EGL_WINDOW_BIT" },
    { EGLSurfaceTypeMask::EGL_VG_COLORSPACE_LINEAR_BIT, "EGL_VG_COLORSPACE_LINEAR_BIT" },
    { EGLSurfaceTypeMask::EGL_VG_COLORSPACE_LINEAR_BIT_KHR, "EGL_VG_COLORSPACE_LINEAR_BIT_KHR" },
    { EGLSurfaceTypeMask::EGL_VG_ALPHA_FORMAT_PRE_BIT, "EGL_VG_ALPHA_FORMAT_PRE_BIT" },
    { EGLSurfaceTypeMask::EGL_VG_ALPHA_FORMAT_PRE_BIT_KHR, "EGL_VG_ALPHA_FORMAT_PRE_BIT_KHR" },
    { EGLSurfaceTypeMask::EGL_LOCK_SURFACE_BIT_KHR, "EGL_LOCK_SURFACE_BIT_KHR" },
    { EGLSurfaceTypeMask::EGL_OPTIMAL_FORMAT_BIT_KHR, "EGL_OPTIMAL_FORMAT_BIT_KHR" },
    { EGLSurfaceTypeMask::EGL_MULTISAMPLE_RESOLVE_BOX_BIT, "EGL_MULTISAMPLE_RESOLVE_BOX_BIT" },
    { EGLSurfaceTypeMask::EGL_SWAP_BEHAVIOR_PRESERVED_BIT, "EGL_SWAP_BEHAVIOR_PRESERVED_BIT" },
    { EGLSurfaceTypeMask::EGL_STREAM_BIT_KHR, "EGL_STREAM_BIT_KHR" },
    { EGLSurfaceTypeMask::EGL_MUTABLE_RENDER_BUFFER_BIT_KHR, "EGL_MUTABLE_RENDER_BUFFER_BIT_KHR" }
};


const std::unordered_map<EGLSyncFlagsKHR, std::string> Meta_StringsByEGLSyncFlagsKHR =
{
    { EGLSyncFlagsKHR::EGL_NONE_BIT, "EGL_NONE_BIT" },
    { EGLSyncFlagsKHR::EGL_SYNC_FLUSH_COMMANDS_BIT, "EGL_SYNC_FLUSH_COMMANDS_BIT" },
    { EGLSyncFlagsKHR::EGL_SYNC_FLUSH_COMMANDS_BIT_KHR, "EGL_SYNC_FLUSH_COMMANDS_BIT_KHR" },
    { EGLSyncFlagsKHR::EGL_SYNC_FLUSH_COMMANDS_BIT_NV, "EGL_SYNC_FLUSH_COMMANDS_BIT_NV" }
};




} } // namespace eglbinding::aux
