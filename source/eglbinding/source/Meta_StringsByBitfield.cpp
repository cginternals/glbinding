
#include "Meta_Maps.h"

#include <eglbinding/egl/bitfield.h>


using namespace egl;

namespace eglbinding
{

const std::unordered_map<EGLContextFlagMask, std::string> Meta_StringsByEGLContextFlagMask 
{
#ifdef STRINGS_BY_SYMBOLS
    { EGLContextFlagMask::EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR, "EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR" },
	{ EGLContextFlagMask::EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR, "EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR" },
	{ EGLContextFlagMask::EGL_CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR, "EGL_CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR" }
#endif
};
    
const std::unordered_map<EGLContextProfileMask, std::string> Meta_StringsByEGLContextProfileMask 
{
#ifdef STRINGS_BY_SYMBOLS
    { EGLContextProfileMask::EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT, "EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT" },
	{ EGLContextProfileMask::EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR, "EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR" },
	{ EGLContextProfileMask::EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT, "EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT" },
	{ EGLContextProfileMask::EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT_KHR, "EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT_KHR" }
#endif
};
    
const std::unordered_map<EGLDRMBufferUseMESAMask, std::string> Meta_StringsByEGLDRMBufferUseMESAMask 
{
#ifdef STRINGS_BY_SYMBOLS
    { EGLDRMBufferUseMESAMask::EGL_DRM_BUFFER_USE_SCANOUT_MESA, "EGL_DRM_BUFFER_USE_SCANOUT_MESA" },
	{ EGLDRMBufferUseMESAMask::EGL_DRM_BUFFER_USE_SHARE_MESA, "EGL_DRM_BUFFER_USE_SHARE_MESA" }
#endif
};
    
const std::unordered_map<EGLLockUsageHintKHRMask, std::string> Meta_StringsByEGLLockUsageHintKHRMask 
{
#ifdef STRINGS_BY_SYMBOLS
    { EGLLockUsageHintKHRMask::EGL_READ_SURFACE_BIT_KHR, "EGL_READ_SURFACE_BIT_KHR" },
	{ EGLLockUsageHintKHRMask::EGL_WRITE_SURFACE_BIT_KHR, "EGL_WRITE_SURFACE_BIT_KHR" }
#endif
};
    
const std::unordered_map<EGLRenderableTypeMask, std::string> Meta_StringsByEGLRenderableTypeMask 
{
#ifdef STRINGS_BY_SYMBOLS
    { EGLRenderableTypeMask::EGL_OPENGL_ES_BIT, "EGL_OPENGL_ES_BIT" },
	{ EGLRenderableTypeMask::EGL_OPENVG_BIT, "EGL_OPENVG_BIT" },
	{ EGLRenderableTypeMask::EGL_OPENGL_ES2_BIT, "EGL_OPENGL_ES2_BIT" },
	{ EGLRenderableTypeMask::EGL_OPENGL_BIT, "EGL_OPENGL_BIT" },
	{ EGLRenderableTypeMask::EGL_OPENGL_ES3_BIT, "EGL_OPENGL_ES3_BIT" },
	{ EGLRenderableTypeMask::EGL_OPENGL_ES3_BIT_KHR, "EGL_OPENGL_ES3_BIT_KHR" }
#endif
};
    
const std::unordered_map<EGLSurfaceTypeMask, std::string> Meta_StringsByEGLSurfaceTypeMask 
{
#ifdef STRINGS_BY_SYMBOLS
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
	{ EGLSurfaceTypeMask::EGL_STREAM_BIT_KHR, "EGL_STREAM_BIT_KHR" }
#endif
};
    
const std::unordered_map<EGLSyncFlagsKHR, std::string> Meta_StringsByEGLSyncFlagsKHR 
{
#ifdef STRINGS_BY_SYMBOLS
    { EGLSyncFlagsKHR::EGL_SYNC_FLUSH_COMMANDS_BIT, "EGL_SYNC_FLUSH_COMMANDS_BIT" },
	{ EGLSyncFlagsKHR::EGL_SYNC_FLUSH_COMMANDS_BIT_KHR, "EGL_SYNC_FLUSH_COMMANDS_BIT_KHR" },
	{ EGLSyncFlagsKHR::EGL_SYNC_FLUSH_COMMANDS_BIT_NV, "EGL_SYNC_FLUSH_COMMANDS_BIT_NV" }
#endif
};
    

} // namespace eglbinding
