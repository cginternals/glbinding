
#include "Meta_Maps.h"

#include <wglbinding/wgl/extension.h>


using namespace wgl;


namespace wglbinding
{


const std::unordered_map<GLextension, std::set<std::string>> Meta_FunctionStringsByExtension =
{
    { GLextension::WGL_3DL_stereo_control, { "wglSetStereoEmitterState3DL" } },
    { GLextension::WGL_AMD_gpu_association, { "wglBlitContextFramebufferAMD", "wglCreateAssociatedContextAMD", "wglCreateAssociatedContextAttribsAMD", "wglDeleteAssociatedContextAMD", "wglGetContextGPUIDAMD", "wglGetCurrentAssociatedContextAMD", "wglGetGPUIDsAMD", "wglGetGPUInfoAMD", "wglMakeAssociatedContextCurrentAMD" } },
    { GLextension::WGL_ARB_buffer_region, { "wglCreateBufferRegionARB", "wglDeleteBufferRegionARB", "wglRestoreBufferRegionARB", "wglSaveBufferRegionARB" } },
    { GLextension::WGL_ARB_create_context, { "wglCreateContextAttribsARB" } },
    { GLextension::WGL_ARB_extensions_string, { "wglGetExtensionsStringARB" } },
    { GLextension::WGL_ARB_make_current_read, { "wglGetCurrentReadDCARB", "wglMakeContextCurrentARB" } },
    { GLextension::WGL_ARB_pbuffer, { "wglCreatePbufferARB", "wglDestroyPbufferARB", "wglGetPbufferDCARB", "wglQueryPbufferARB", "wglReleasePbufferDCARB" } },
    { GLextension::WGL_ARB_pixel_format, { "wglChoosePixelFormatARB", "wglGetPixelFormatAttribfvARB", "wglGetPixelFormatAttribivARB" } },
    { GLextension::WGL_ARB_render_texture, { "wglBindTexImageARB", "wglReleaseTexImageARB", "wglSetPbufferAttribARB" } },
    { GLextension::WGL_EXT_display_color_table, { "wglBindDisplayColorTableEXT", "wglCreateDisplayColorTableEXT", "wglDestroyDisplayColorTableEXT", "wglLoadDisplayColorTableEXT" } },
    { GLextension::WGL_EXT_extensions_string, { "wglGetExtensionsStringEXT" } },
    { GLextension::WGL_EXT_make_current_read, { "wglGetCurrentReadDCEXT", "wglMakeContextCurrentEXT" } },
    { GLextension::WGL_EXT_pbuffer, { "wglCreatePbufferEXT", "wglDestroyPbufferEXT", "wglGetPbufferDCEXT", "wglQueryPbufferEXT", "wglReleasePbufferDCEXT" } },
    { GLextension::WGL_EXT_pixel_format, { "wglChoosePixelFormatEXT", "wglGetPixelFormatAttribfvEXT", "wglGetPixelFormatAttribivEXT" } },
    { GLextension::WGL_EXT_swap_control, { "wglGetSwapIntervalEXT", "wglSwapIntervalEXT" } },
    { GLextension::WGL_I3D_digital_video_control, { "wglGetDigitalVideoParametersI3D", "wglSetDigitalVideoParametersI3D" } },
    { GLextension::WGL_I3D_gamma, { "wglGetGammaTableI3D", "wglGetGammaTableParametersI3D", "wglSetGammaTableI3D", "wglSetGammaTableParametersI3D" } },
    { GLextension::WGL_I3D_genlock, { "wglDisableGenlockI3D", "wglEnableGenlockI3D", "wglGenlockSampleRateI3D", "wglGenlockSourceDelayI3D", "wglGenlockSourceEdgeI3D", "wglGenlockSourceI3D", "wglGetGenlockSampleRateI3D", "wglGetGenlockSourceDelayI3D", "wglGetGenlockSourceEdgeI3D", "wglGetGenlockSourceI3D", "wglIsEnabledGenlockI3D", "wglQueryGenlockMaxSourceDelayI3D" } },
    { GLextension::WGL_I3D_image_buffer, { "wglAssociateImageBufferEventsI3D", "wglCreateImageBufferI3D", "wglDestroyImageBufferI3D", "wglReleaseImageBufferEventsI3D" } },
    { GLextension::WGL_I3D_swap_frame_lock, { "wglDisableFrameLockI3D", "wglEnableFrameLockI3D", "wglIsEnabledFrameLockI3D", "wglQueryFrameLockMasterI3D" } },
    { GLextension::WGL_I3D_swap_frame_usage, { "wglBeginFrameTrackingI3D", "wglEndFrameTrackingI3D", "wglGetFrameUsageI3D", "wglQueryFrameTrackingI3D" } },
    { GLextension::WGL_NV_DX_interop, { "wglDXCloseDeviceNV", "wglDXLockObjectsNV", "wglDXObjectAccessNV", "wglDXOpenDeviceNV", "wglDXRegisterObjectNV", "wglDXSetResourceShareHandleNV", "wglDXUnlockObjectsNV", "wglDXUnregisterObjectNV" } },
    { GLextension::WGL_NV_copy_image, { "wglCopyImageSubDataNV" } },
    { GLextension::WGL_NV_delay_before_swap, { "wglDelayBeforeSwapNV" } },
    { GLextension::WGL_NV_gpu_affinity, { "wglCreateAffinityDCNV", "wglDeleteDCNV", "wglEnumGpuDevicesNV", "wglEnumGpusFromAffinityDCNV", "wglEnumGpusNV" } },
    { GLextension::WGL_NV_present_video, { "wglBindVideoDeviceNV", "wglEnumerateVideoDevicesNV", "wglQueryCurrentContextNV" } },
    { GLextension::WGL_NV_swap_group, { "wglBindSwapBarrierNV", "wglJoinSwapGroupNV", "wglQueryFrameCountNV", "wglQueryMaxSwapGroupsNV", "wglQuerySwapGroupNV", "wglResetFrameCountNV" } },
    { GLextension::WGL_NV_vertex_array_range, { "wglAllocateMemoryNV", "wglFreeMemoryNV" } },
    { GLextension::WGL_NV_video_capture, { "wglBindVideoCaptureDeviceNV", "wglEnumerateVideoCaptureDevicesNV", "wglLockVideoCaptureDeviceNV", "wglQueryVideoCaptureDeviceNV", "wglReleaseVideoCaptureDeviceNV" } },
    { GLextension::WGL_NV_video_output, { "wglBindVideoImageNV", "wglGetVideoDeviceNV", "wglGetVideoInfoNV", "wglReleaseVideoDeviceNV", "wglReleaseVideoImageNV", "wglSendPbufferToVideoNV" } },
    { GLextension::WGL_OML_sync_control, { "wglGetMscRateOML", "wglGetSyncValuesOML", "wglSwapBuffersMscOML", "wglSwapLayerBuffersMscOML", "wglWaitForMscOML", "wglWaitForSbcOML" } }

};


} // namespace wglbinding
