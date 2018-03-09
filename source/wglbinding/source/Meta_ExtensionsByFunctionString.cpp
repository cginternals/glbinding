
#include "Meta_Maps.h"

#include <wglbinding/wgl/extension.h>


using namespace wgl;


namespace wglbinding
{


const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_0{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_A =
{
    { "wglAllocateMemoryNV", { GLextension::WGL_NV_vertex_array_range } },
    { "wglAssociateImageBufferEventsI3D", { GLextension::WGL_I3D_image_buffer } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_B =
{
    { "wglBeginFrameTrackingI3D", { GLextension::WGL_I3D_swap_frame_usage } },
    { "wglBindDisplayColorTableEXT", { GLextension::WGL_EXT_display_color_table } },
    { "wglBindSwapBarrierNV", { GLextension::WGL_NV_swap_group } },
    { "wglBindTexImageARB", { GLextension::WGL_ARB_render_texture } },
    { "wglBindVideoCaptureDeviceNV", { GLextension::WGL_NV_video_capture } },
    { "wglBindVideoDeviceNV", { GLextension::WGL_NV_present_video } },
    { "wglBindVideoImageNV", { GLextension::WGL_NV_video_output } },
    { "wglBlitContextFramebufferAMD", { GLextension::WGL_AMD_gpu_association } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_C =
{
    { "wglChoosePixelFormatARB", { GLextension::WGL_ARB_pixel_format } },
    { "wglChoosePixelFormatEXT", { GLextension::WGL_EXT_pixel_format } },
    { "wglCopyImageSubDataNV", { GLextension::WGL_NV_copy_image } },
    { "wglCreateAffinityDCNV", { GLextension::WGL_NV_gpu_affinity } },
    { "wglCreateAssociatedContextAMD", { GLextension::WGL_AMD_gpu_association } },
    { "wglCreateAssociatedContextAttribsAMD", { GLextension::WGL_AMD_gpu_association } },
    { "wglCreateBufferRegionARB", { GLextension::WGL_ARB_buffer_region } },
    { "wglCreateContextAttribsARB", { GLextension::WGL_ARB_create_context } },
    { "wglCreateDisplayColorTableEXT", { GLextension::WGL_EXT_display_color_table } },
    { "wglCreateImageBufferI3D", { GLextension::WGL_I3D_image_buffer } },
    { "wglCreatePbufferARB", { GLextension::WGL_ARB_pbuffer } },
    { "wglCreatePbufferEXT", { GLextension::WGL_EXT_pbuffer } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_D =
{
    { "wglDXCloseDeviceNV", { GLextension::WGL_NV_DX_interop } },
    { "wglDXLockObjectsNV", { GLextension::WGL_NV_DX_interop } },
    { "wglDXObjectAccessNV", { GLextension::WGL_NV_DX_interop } },
    { "wglDXOpenDeviceNV", { GLextension::WGL_NV_DX_interop } },
    { "wglDXRegisterObjectNV", { GLextension::WGL_NV_DX_interop } },
    { "wglDXSetResourceShareHandleNV", { GLextension::WGL_NV_DX_interop } },
    { "wglDXUnlockObjectsNV", { GLextension::WGL_NV_DX_interop } },
    { "wglDXUnregisterObjectNV", { GLextension::WGL_NV_DX_interop } },
    { "wglDelayBeforeSwapNV", { GLextension::WGL_NV_delay_before_swap } },
    { "wglDeleteAssociatedContextAMD", { GLextension::WGL_AMD_gpu_association } },
    { "wglDeleteBufferRegionARB", { GLextension::WGL_ARB_buffer_region } },
    { "wglDeleteDCNV", { GLextension::WGL_NV_gpu_affinity } },
    { "wglDestroyDisplayColorTableEXT", { GLextension::WGL_EXT_display_color_table } },
    { "wglDestroyImageBufferI3D", { GLextension::WGL_I3D_image_buffer } },
    { "wglDestroyPbufferARB", { GLextension::WGL_ARB_pbuffer } },
    { "wglDestroyPbufferEXT", { GLextension::WGL_EXT_pbuffer } },
    { "wglDisableFrameLockI3D", { GLextension::WGL_I3D_swap_frame_lock } },
    { "wglDisableGenlockI3D", { GLextension::WGL_I3D_genlock } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_E =
{
    { "wglEnableFrameLockI3D", { GLextension::WGL_I3D_swap_frame_lock } },
    { "wglEnableGenlockI3D", { GLextension::WGL_I3D_genlock } },
    { "wglEndFrameTrackingI3D", { GLextension::WGL_I3D_swap_frame_usage } },
    { "wglEnumGpuDevicesNV", { GLextension::WGL_NV_gpu_affinity } },
    { "wglEnumGpusFromAffinityDCNV", { GLextension::WGL_NV_gpu_affinity } },
    { "wglEnumGpusNV", { GLextension::WGL_NV_gpu_affinity } },
    { "wglEnumerateVideoCaptureDevicesNV", { GLextension::WGL_NV_video_capture } },
    { "wglEnumerateVideoDevicesNV", { GLextension::WGL_NV_present_video } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_F =
{
    { "wglFreeMemoryNV", { GLextension::WGL_NV_vertex_array_range } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_G =
{
    { "wglGenlockSampleRateI3D", { GLextension::WGL_I3D_genlock } },
    { "wglGenlockSourceDelayI3D", { GLextension::WGL_I3D_genlock } },
    { "wglGenlockSourceEdgeI3D", { GLextension::WGL_I3D_genlock } },
    { "wglGenlockSourceI3D", { GLextension::WGL_I3D_genlock } },
    { "wglGetContextGPUIDAMD", { GLextension::WGL_AMD_gpu_association } },
    { "wglGetCurrentAssociatedContextAMD", { GLextension::WGL_AMD_gpu_association } },
    { "wglGetCurrentReadDCARB", { GLextension::WGL_ARB_make_current_read } },
    { "wglGetCurrentReadDCEXT", { GLextension::WGL_EXT_make_current_read } },
    { "wglGetDigitalVideoParametersI3D", { GLextension::WGL_I3D_digital_video_control } },
    { "wglGetExtensionsStringARB", { GLextension::WGL_ARB_extensions_string } },
    { "wglGetExtensionsStringEXT", { GLextension::WGL_EXT_extensions_string } },
    { "wglGetFrameUsageI3D", { GLextension::WGL_I3D_swap_frame_usage } },
    { "wglGetGPUIDsAMD", { GLextension::WGL_AMD_gpu_association } },
    { "wglGetGPUInfoAMD", { GLextension::WGL_AMD_gpu_association } },
    { "wglGetGammaTableI3D", { GLextension::WGL_I3D_gamma } },
    { "wglGetGammaTableParametersI3D", { GLextension::WGL_I3D_gamma } },
    { "wglGetGenlockSampleRateI3D", { GLextension::WGL_I3D_genlock } },
    { "wglGetGenlockSourceDelayI3D", { GLextension::WGL_I3D_genlock } },
    { "wglGetGenlockSourceEdgeI3D", { GLextension::WGL_I3D_genlock } },
    { "wglGetGenlockSourceI3D", { GLextension::WGL_I3D_genlock } },
    { "wglGetMscRateOML", { GLextension::WGL_OML_sync_control } },
    { "wglGetPbufferDCARB", { GLextension::WGL_ARB_pbuffer } },
    { "wglGetPbufferDCEXT", { GLextension::WGL_EXT_pbuffer } },
    { "wglGetPixelFormatAttribfvARB", { GLextension::WGL_ARB_pixel_format } },
    { "wglGetPixelFormatAttribfvEXT", { GLextension::WGL_EXT_pixel_format } },
    { "wglGetPixelFormatAttribivARB", { GLextension::WGL_ARB_pixel_format } },
    { "wglGetPixelFormatAttribivEXT", { GLextension::WGL_EXT_pixel_format } },
    { "wglGetSwapIntervalEXT", { GLextension::WGL_EXT_swap_control } },
    { "wglGetSyncValuesOML", { GLextension::WGL_OML_sync_control } },
    { "wglGetVideoDeviceNV", { GLextension::WGL_NV_video_output } },
    { "wglGetVideoInfoNV", { GLextension::WGL_NV_video_output } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_H{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_I =
{
    { "wglIsEnabledFrameLockI3D", { GLextension::WGL_I3D_swap_frame_lock } },
    { "wglIsEnabledGenlockI3D", { GLextension::WGL_I3D_genlock } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_J =
{
    { "wglJoinSwapGroupNV", { GLextension::WGL_NV_swap_group } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_K{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_L =
{
    { "wglLoadDisplayColorTableEXT", { GLextension::WGL_EXT_display_color_table } },
    { "wglLockVideoCaptureDeviceNV", { GLextension::WGL_NV_video_capture } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_M =
{
    { "wglMakeAssociatedContextCurrentAMD", { GLextension::WGL_AMD_gpu_association } },
    { "wglMakeContextCurrentARB", { GLextension::WGL_ARB_make_current_read } },
    { "wglMakeContextCurrentEXT", { GLextension::WGL_EXT_make_current_read } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_N{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_O{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_P{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_Q =
{
    { "wglQueryCurrentContextNV", { GLextension::WGL_NV_present_video } },
    { "wglQueryFrameCountNV", { GLextension::WGL_NV_swap_group } },
    { "wglQueryFrameLockMasterI3D", { GLextension::WGL_I3D_swap_frame_lock } },
    { "wglQueryFrameTrackingI3D", { GLextension::WGL_I3D_swap_frame_usage } },
    { "wglQueryGenlockMaxSourceDelayI3D", { GLextension::WGL_I3D_genlock } },
    { "wglQueryMaxSwapGroupsNV", { GLextension::WGL_NV_swap_group } },
    { "wglQueryPbufferARB", { GLextension::WGL_ARB_pbuffer } },
    { "wglQueryPbufferEXT", { GLextension::WGL_EXT_pbuffer } },
    { "wglQuerySwapGroupNV", { GLextension::WGL_NV_swap_group } },
    { "wglQueryVideoCaptureDeviceNV", { GLextension::WGL_NV_video_capture } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_R =
{
    { "wglReleaseImageBufferEventsI3D", { GLextension::WGL_I3D_image_buffer } },
    { "wglReleasePbufferDCARB", { GLextension::WGL_ARB_pbuffer } },
    { "wglReleasePbufferDCEXT", { GLextension::WGL_EXT_pbuffer } },
    { "wglReleaseTexImageARB", { GLextension::WGL_ARB_render_texture } },
    { "wglReleaseVideoCaptureDeviceNV", { GLextension::WGL_NV_video_capture } },
    { "wglReleaseVideoDeviceNV", { GLextension::WGL_NV_video_output } },
    { "wglReleaseVideoImageNV", { GLextension::WGL_NV_video_output } },
    { "wglResetFrameCountNV", { GLextension::WGL_NV_swap_group } },
    { "wglRestoreBufferRegionARB", { GLextension::WGL_ARB_buffer_region } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_S =
{
    { "wglSaveBufferRegionARB", { GLextension::WGL_ARB_buffer_region } },
    { "wglSendPbufferToVideoNV", { GLextension::WGL_NV_video_output } },
    { "wglSetDigitalVideoParametersI3D", { GLextension::WGL_I3D_digital_video_control } },
    { "wglSetGammaTableI3D", { GLextension::WGL_I3D_gamma } },
    { "wglSetGammaTableParametersI3D", { GLextension::WGL_I3D_gamma } },
    { "wglSetPbufferAttribARB", { GLextension::WGL_ARB_render_texture } },
    { "wglSetStereoEmitterState3DL", { GLextension::WGL_3DL_stereo_control } },
    { "wglSwapBuffersMscOML", { GLextension::WGL_OML_sync_control } },
    { "wglSwapIntervalEXT", { GLextension::WGL_EXT_swap_control } },
    { "wglSwapLayerBuffersMscOML", { GLextension::WGL_OML_sync_control } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_T{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_U{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_V{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_W =
{
    { "wglWaitForMscOML", { GLextension::WGL_OML_sync_control } },
    { "wglWaitForSbcOML", { GLextension::WGL_OML_sync_control } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_X{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_Y{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_Z{};

const std::array<std::unordered_map<std::string, std::set<wgl::GLextension>>, 27> Meta_ExtensionsByFunctionStringMaps =
{ {
    Meta_ExtensionsByFunctionString_0,
    Meta_ExtensionsByFunctionString_A,
    Meta_ExtensionsByFunctionString_B,
    Meta_ExtensionsByFunctionString_C,
    Meta_ExtensionsByFunctionString_D,
    Meta_ExtensionsByFunctionString_E,
    Meta_ExtensionsByFunctionString_F,
    Meta_ExtensionsByFunctionString_G,
    Meta_ExtensionsByFunctionString_H,
    Meta_ExtensionsByFunctionString_I,
    Meta_ExtensionsByFunctionString_J,
    Meta_ExtensionsByFunctionString_K,
    Meta_ExtensionsByFunctionString_L,
    Meta_ExtensionsByFunctionString_M,
    Meta_ExtensionsByFunctionString_N,
    Meta_ExtensionsByFunctionString_O,
    Meta_ExtensionsByFunctionString_P,
    Meta_ExtensionsByFunctionString_Q,
    Meta_ExtensionsByFunctionString_R,
    Meta_ExtensionsByFunctionString_S,
    Meta_ExtensionsByFunctionString_T,
    Meta_ExtensionsByFunctionString_U,
    Meta_ExtensionsByFunctionString_V,
    Meta_ExtensionsByFunctionString_W,
    Meta_ExtensionsByFunctionString_X,
    Meta_ExtensionsByFunctionString_Y,
    Meta_ExtensionsByFunctionString_Z
} };


} // namespace wglbinding
