
#include "Meta_Maps.h"

#include <eglbinding/egl/bitfield.h>


using namespace egl;

namespace eglbinding
{

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString
{
#ifdef SYMBOLS_BY_STRINGS
    { "EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR", static_cast<EGLbitfield>(EGLContextFlagMask::EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR) },
    { "EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR", static_cast<EGLbitfield>(EGLContextFlagMask::EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR) },
    { "EGL_CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR", static_cast<EGLbitfield>(EGLContextFlagMask::EGL_CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR) },
    { "EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT", static_cast<EGLbitfield>(EGLContextProfileMask::EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT) },
    { "EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR", static_cast<EGLbitfield>(EGLContextProfileMask::EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR) },
    { "EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT", static_cast<EGLbitfield>(EGLContextProfileMask::EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT) },
    { "EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT_KHR", static_cast<EGLbitfield>(EGLContextProfileMask::EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT_KHR) },
    { "EGL_DRM_BUFFER_USE_SCANOUT_MESA", static_cast<EGLbitfield>(EGLDRMBufferUseMESAMask::EGL_DRM_BUFFER_USE_SCANOUT_MESA) },
    { "EGL_DRM_BUFFER_USE_SHARE_MESA", static_cast<EGLbitfield>(EGLDRMBufferUseMESAMask::EGL_DRM_BUFFER_USE_SHARE_MESA) },
    { "EGL_READ_SURFACE_BIT_KHR", static_cast<EGLbitfield>(EGLLockUsageHintKHRMask::EGL_READ_SURFACE_BIT_KHR) },
    { "EGL_WRITE_SURFACE_BIT_KHR", static_cast<EGLbitfield>(EGLLockUsageHintKHRMask::EGL_WRITE_SURFACE_BIT_KHR) },
    { "EGL_OPENGL_ES3_BIT", static_cast<EGLbitfield>(EGLRenderableTypeMask::EGL_OPENGL_ES3_BIT) },
    { "EGL_OPENGL_ES3_BIT_KHR", static_cast<EGLbitfield>(EGLRenderableTypeMask::EGL_OPENGL_ES3_BIT_KHR) },
    { "EGL_OPENGL_ES_BIT", static_cast<EGLbitfield>(EGLRenderableTypeMask::EGL_OPENGL_ES_BIT) },
    { "EGL_OPENVG_BIT", static_cast<EGLbitfield>(EGLRenderableTypeMask::EGL_OPENVG_BIT) },
    { "EGL_OPENGL_ES2_BIT", static_cast<EGLbitfield>(EGLRenderableTypeMask::EGL_OPENGL_ES2_BIT) },
    { "EGL_OPENGL_BIT", static_cast<EGLbitfield>(EGLRenderableTypeMask::EGL_OPENGL_BIT) },
    { "EGL_PBUFFER_BIT", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_PBUFFER_BIT) },
    { "EGL_PIXMAP_BIT", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_PIXMAP_BIT) },
    { "EGL_WINDOW_BIT", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_WINDOW_BIT) },
    { "EGL_VG_COLORSPACE_LINEAR_BIT", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_VG_COLORSPACE_LINEAR_BIT) },
    { "EGL_VG_COLORSPACE_LINEAR_BIT_KHR", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_VG_COLORSPACE_LINEAR_BIT_KHR) },
    { "EGL_VG_ALPHA_FORMAT_PRE_BIT", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_VG_ALPHA_FORMAT_PRE_BIT) },
    { "EGL_VG_ALPHA_FORMAT_PRE_BIT_KHR", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_VG_ALPHA_FORMAT_PRE_BIT_KHR) },
    { "EGL_LOCK_SURFACE_BIT_KHR", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_LOCK_SURFACE_BIT_KHR) },
    { "EGL_OPTIMAL_FORMAT_BIT_KHR", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_OPTIMAL_FORMAT_BIT_KHR) },
    { "EGL_MULTISAMPLE_RESOLVE_BOX_BIT", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_MULTISAMPLE_RESOLVE_BOX_BIT) },
    { "EGL_SWAP_BEHAVIOR_PRESERVED_BIT", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_SWAP_BEHAVIOR_PRESERVED_BIT) },
    { "EGL_STREAM_BIT_KHR", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_STREAM_BIT_KHR) },
    { "EGL_SYNC_FLUSH_COMMANDS_BIT", static_cast<EGLbitfield>(EGLSyncFlagsKHR::EGL_SYNC_FLUSH_COMMANDS_BIT) },
    { "EGL_SYNC_FLUSH_COMMANDS_BIT_KHR", static_cast<EGLbitfield>(EGLSyncFlagsKHR::EGL_SYNC_FLUSH_COMMANDS_BIT_KHR) },
    { "EGL_SYNC_FLUSH_COMMANDS_BIT_NV", static_cast<EGLbitfield>(EGLSyncFlagsKHR::EGL_SYNC_FLUSH_COMMANDS_BIT_NV) }
#endif
};

} // namespace &abinding
