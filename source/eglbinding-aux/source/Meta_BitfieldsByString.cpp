
#include "Meta_Maps.h"

#include <eglbinding/egl/bitfield.h>


using namespace egl;


namespace eglbinding { namespace aux
{


const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_0{};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_A{};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_B{};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_C =
{
    { "EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT", static_cast<EGLbitfield>(EGLContextProfileMask::EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT) },
    { "EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT_KHR", static_cast<EGLbitfield>(EGLContextProfileMask::EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT_KHR) },
    { "EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT", static_cast<EGLbitfield>(EGLContextProfileMask::EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT) },
    { "EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR", static_cast<EGLbitfield>(EGLContextProfileMask::EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR) },
    { "EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR", static_cast<EGLbitfield>(EGLContextFlagMask::EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR) },
    { "EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR", static_cast<EGLbitfield>(EGLContextFlagMask::EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR) },
    { "EGL_CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR", static_cast<EGLbitfield>(EGLContextFlagMask::EGL_CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR) }
};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_D =
{
    { "EGL_DRM_BUFFER_USE_CURSOR_MESA", static_cast<EGLbitfield>(EGLDRMBufferUseMESAMask::EGL_DRM_BUFFER_USE_CURSOR_MESA) },
    { "EGL_DRM_BUFFER_USE_SCANOUT_MESA", static_cast<EGLbitfield>(EGLDRMBufferUseMESAMask::EGL_DRM_BUFFER_USE_SCANOUT_MESA) },
    { "EGL_DRM_BUFFER_USE_SHARE_MESA", static_cast<EGLbitfield>(EGLDRMBufferUseMESAMask::EGL_DRM_BUFFER_USE_SHARE_MESA) }
};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_E{};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_F{};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_G{};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_H{};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_I{};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_J{};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_K{};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_L =
{
    { "EGL_LOCK_SURFACE_BIT_KHR", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_LOCK_SURFACE_BIT_KHR) }
};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_M =
{
    { "EGL_MULTISAMPLE_RESOLVE_BOX_BIT", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_MULTISAMPLE_RESOLVE_BOX_BIT) },
    { "EGL_MUTABLE_RENDER_BUFFER_BIT_KHR", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_MUTABLE_RENDER_BUFFER_BIT_KHR) }
};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_N =
{
    { "EGL_NATIVE_BUFFER_USAGE_PROTECTED_BIT_ANDROID", static_cast<EGLbitfield>(EGLNativeBufferUsageFlags::EGL_NATIVE_BUFFER_USAGE_PROTECTED_BIT_ANDROID) },
    { "EGL_NATIVE_BUFFER_USAGE_RENDERBUFFER_BIT_ANDROID", static_cast<EGLbitfield>(EGLNativeBufferUsageFlags::EGL_NATIVE_BUFFER_USAGE_RENDERBUFFER_BIT_ANDROID) },
    { "EGL_NATIVE_BUFFER_USAGE_TEXTURE_BIT_ANDROID", static_cast<EGLbitfield>(EGLNativeBufferUsageFlags::EGL_NATIVE_BUFFER_USAGE_TEXTURE_BIT_ANDROID) },
    { "EGL_NONE_BIT", static_cast<EGLbitfield>(EGLContextFlagMask::EGL_NONE_BIT) }
};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_O =
{
    { "EGL_OPENGL_BIT", static_cast<EGLbitfield>(EGLRenderableTypeMask::EGL_OPENGL_BIT) },
    { "EGL_OPENGL_ES2_BIT", static_cast<EGLbitfield>(EGLRenderableTypeMask::EGL_OPENGL_ES2_BIT) },
    { "EGL_OPENGL_ES3_BIT", static_cast<EGLbitfield>(EGLRenderableTypeMask::EGL_OPENGL_ES3_BIT) },
    { "EGL_OPENGL_ES3_BIT_KHR", static_cast<EGLbitfield>(EGLRenderableTypeMask::EGL_OPENGL_ES3_BIT_KHR) },
    { "EGL_OPENGL_ES_BIT", static_cast<EGLbitfield>(EGLRenderableTypeMask::EGL_OPENGL_ES_BIT) },
    { "EGL_OPENVG_BIT", static_cast<EGLbitfield>(EGLRenderableTypeMask::EGL_OPENVG_BIT) },
    { "EGL_OPTIMAL_FORMAT_BIT_KHR", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_OPTIMAL_FORMAT_BIT_KHR) }
};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_P =
{
    { "EGL_PBUFFER_BIT", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_PBUFFER_BIT) },
    { "EGL_PIXMAP_BIT", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_PIXMAP_BIT) }
};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_Q{};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_R =
{
    { "EGL_READ_SURFACE_BIT_KHR", static_cast<EGLbitfield>(EGLLockUsageHintKHRMask::EGL_READ_SURFACE_BIT_KHR) }
};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_S =
{
    { "EGL_STREAM_BIT_KHR", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_STREAM_BIT_KHR) },
    { "EGL_SWAP_BEHAVIOR_PRESERVED_BIT", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_SWAP_BEHAVIOR_PRESERVED_BIT) },
    { "EGL_SYNC_FLUSH_COMMANDS_BIT", static_cast<EGLbitfield>(EGLSyncFlagsKHR::EGL_SYNC_FLUSH_COMMANDS_BIT) },
    { "EGL_SYNC_FLUSH_COMMANDS_BIT_KHR", static_cast<EGLbitfield>(EGLSyncFlagsKHR::EGL_SYNC_FLUSH_COMMANDS_BIT_KHR) },
    { "EGL_SYNC_FLUSH_COMMANDS_BIT_NV", static_cast<EGLbitfield>(EGLSyncFlagsKHR::EGL_SYNC_FLUSH_COMMANDS_BIT_NV) }
};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_T{};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_U{};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_V =
{
    { "EGL_VG_ALPHA_FORMAT_PRE_BIT", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_VG_ALPHA_FORMAT_PRE_BIT) },
    { "EGL_VG_ALPHA_FORMAT_PRE_BIT_KHR", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_VG_ALPHA_FORMAT_PRE_BIT_KHR) },
    { "EGL_VG_COLORSPACE_LINEAR_BIT", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_VG_COLORSPACE_LINEAR_BIT) },
    { "EGL_VG_COLORSPACE_LINEAR_BIT_KHR", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_VG_COLORSPACE_LINEAR_BIT_KHR) }
};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_W =
{
    { "EGL_WINDOW_BIT", static_cast<EGLbitfield>(EGLSurfaceTypeMask::EGL_WINDOW_BIT) },
    { "EGL_WRITE_SURFACE_BIT_KHR", static_cast<EGLbitfield>(EGLLockUsageHintKHRMask::EGL_WRITE_SURFACE_BIT_KHR) }
};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_X{};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_Y{};

const std::unordered_map<std::string, EGLbitfield> Meta_BitfieldsByString_Z{};

const std::array<std::unordered_map<std::string, EGLbitfield>, 27> Meta_BitfieldsByStringMaps =
{ {
    Meta_BitfieldsByString_0,
    Meta_BitfieldsByString_A,
    Meta_BitfieldsByString_B,
    Meta_BitfieldsByString_C,
    Meta_BitfieldsByString_D,
    Meta_BitfieldsByString_E,
    Meta_BitfieldsByString_F,
    Meta_BitfieldsByString_G,
    Meta_BitfieldsByString_H,
    Meta_BitfieldsByString_I,
    Meta_BitfieldsByString_J,
    Meta_BitfieldsByString_K,
    Meta_BitfieldsByString_L,
    Meta_BitfieldsByString_M,
    Meta_BitfieldsByString_N,
    Meta_BitfieldsByString_O,
    Meta_BitfieldsByString_P,
    Meta_BitfieldsByString_Q,
    Meta_BitfieldsByString_R,
    Meta_BitfieldsByString_S,
    Meta_BitfieldsByString_T,
    Meta_BitfieldsByString_U,
    Meta_BitfieldsByString_V,
    Meta_BitfieldsByString_W,
    Meta_BitfieldsByString_X,
    Meta_BitfieldsByString_Y,
    Meta_BitfieldsByString_Z
} };


} } // namespace eglbinding::aux
