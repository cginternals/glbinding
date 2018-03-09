
#include "Meta_Maps.h"

#include <glxbinding/glx/extension.h>


using namespace glx;


namespace glxbinding
{


const std::unordered_map<GLextension, std::set<std::string>> Meta_FunctionStringsByExtension =
{
    { GLextension::GLX_AMD_gpu_association, { "glXBlitContextFramebufferAMD", "glXCreateAssociatedContextAMD", "glXCreateAssociatedContextAttribsAMD", "glXDeleteAssociatedContextAMD", "glXGetContextGPUIDAMD", "glXGetCurrentAssociatedContextAMD", "glXGetGPUIDsAMD", "glXGetGPUInfoAMD", "glXMakeAssociatedContextCurrentAMD" } },
    { GLextension::GLX_ARB_create_context, { "glXCreateContextAttribsARB" } },
    { GLextension::GLX_ARB_get_proc_address, { "glXGetProcAddressARB" } },
    { GLextension::GLX_EXT_import_context, { "glXFreeContextEXT", "glXGetContextIDEXT", "glXGetCurrentDisplayEXT", "glXImportContextEXT", "glXQueryContextInfoEXT" } },
    { GLextension::GLX_EXT_swap_control, { "glXSwapIntervalEXT" } },
    { GLextension::GLX_EXT_texture_from_pixmap, { "glXBindTexImageEXT", "glXReleaseTexImageEXT" } },
    { GLextension::GLX_MESA_agp_offset, { "glXGetAGPOffsetMESA" } },
    { GLextension::GLX_MESA_copy_sub_buffer, { "glXCopySubBufferMESA" } },
    { GLextension::GLX_MESA_pixmap_colormap, { "glXCreateGLXPixmapMESA" } },
    { GLextension::GLX_MESA_query_renderer, { "glXQueryCurrentRendererIntegerMESA", "glXQueryCurrentRendererStringMESA", "glXQueryRendererIntegerMESA", "glXQueryRendererStringMESA" } },
    { GLextension::GLX_MESA_release_buffers, { "glXReleaseBuffersMESA" } },
    { GLextension::GLX_MESA_set_3dfx_mode, { "glXSet3DfxModeMESA" } },
    { GLextension::GLX_MESA_swap_control, { "glXGetSwapIntervalMESA", "glXSwapIntervalMESA" } },
    { GLextension::GLX_NV_copy_buffer, { "glXCopyBufferSubDataNV", "glXNamedCopyBufferSubDataNV" } },
    { GLextension::GLX_NV_copy_image, { "glXCopyImageSubDataNV" } },
    { GLextension::GLX_NV_delay_before_swap, { "glXDelayBeforeSwapNV" } },
    { GLextension::GLX_NV_present_video, { "glXBindVideoDeviceNV", "glXEnumerateVideoDevicesNV" } },
    { GLextension::GLX_NV_swap_group, { "glXBindSwapBarrierNV", "glXJoinSwapGroupNV", "glXQueryFrameCountNV", "glXQueryMaxSwapGroupsNV", "glXQuerySwapGroupNV", "glXResetFrameCountNV" } },
    { GLextension::GLX_NV_video_capture, { "glXBindVideoCaptureDeviceNV", "glXEnumerateVideoCaptureDevicesNV", "glXLockVideoCaptureDeviceNV", "glXQueryVideoCaptureDeviceNV", "glXReleaseVideoCaptureDeviceNV" } },
    { GLextension::GLX_NV_video_out, { "glXBindVideoImageNV", "glXGetVideoDeviceNV", "glXGetVideoInfoNV", "glXReleaseVideoDeviceNV", "glXReleaseVideoImageNV", "glXSendPbufferToVideoNV" } },
    { GLextension::GLX_OML_sync_control, { "glXGetMscRateOML", "glXGetSyncValuesOML", "glXSwapBuffersMscOML", "glXWaitForMscOML", "glXWaitForSbcOML" } },
    { GLextension::GLX_SGIX_dmbuffer, { "glXAssociateDMPbufferSGIX" } },
    { GLextension::GLX_SGIX_fbconfig, { "glXChooseFBConfigSGIX", "glXCreateContextWithConfigSGIX", "glXCreateGLXPixmapWithConfigSGIX", "glXGetFBConfigAttribSGIX", "glXGetFBConfigFromVisualSGIX", "glXGetVisualFromFBConfigSGIX" } },
    { GLextension::GLX_SGIX_hyperpipe, { "glXBindHyperpipeSGIX", "glXDestroyHyperpipeConfigSGIX", "glXHyperpipeAttribSGIX", "glXHyperpipeConfigSGIX", "glXQueryHyperpipeAttribSGIX", "glXQueryHyperpipeBestAttribSGIX", "glXQueryHyperpipeConfigSGIX", "glXQueryHyperpipeNetworkSGIX" } },
    { GLextension::GLX_SGIX_pbuffer, { "glXCreateGLXPbufferSGIX", "glXDestroyGLXPbufferSGIX", "glXGetSelectedEventSGIX", "glXQueryGLXPbufferSGIX", "glXSelectEventSGIX" } },
    { GLextension::GLX_SGIX_swap_barrier, { "glXBindSwapBarrierSGIX", "glXQueryMaxSwapBarriersSGIX" } },
    { GLextension::GLX_SGIX_swap_group, { "glXJoinSwapGroupSGIX" } },
    { GLextension::GLX_SGIX_video_resize, { "glXBindChannelToWindowSGIX", "glXChannelRectSGIX", "glXChannelRectSyncSGIX", "glXQueryChannelDeltasSGIX", "glXQueryChannelRectSGIX" } },
    { GLextension::GLX_SGIX_video_source, { "glXCreateGLXVideoSourceSGIX", "glXDestroyGLXVideoSourceSGIX" } },
    { GLextension::GLX_SGI_cushion, { "glXCushionSGI" } },
    { GLextension::GLX_SGI_make_current_read, { "glXGetCurrentReadDrawableSGI", "glXMakeCurrentReadSGI" } },
    { GLextension::GLX_SGI_swap_control, { "glXSwapIntervalSGI" } },
    { GLextension::GLX_SGI_video_sync, { "glXGetVideoSyncSGI", "glXWaitVideoSyncSGI" } },
    { GLextension::GLX_SUN_get_transparent_index, { "glXGetTransparentIndexSUN" } }

};


} // namespace glxbinding
