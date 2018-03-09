
#include "Meta_Maps.h"

#include <eglbinding/egl/extension.h>


using namespace egl;


namespace eglbinding
{


const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_0{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_A{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_B{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_C =
{
    { "eglClientWaitSyncKHR", { GLextension::EGL_KHR_fence_sync, GLextension::EGL_KHR_reusable_sync } },
    { "eglClientWaitSyncNV", { GLextension::EGL_NV_sync } },
    { "eglCompositorBindTexWindowEXT", { GLextension::EGL_EXT_compositor } },
    { "eglCompositorSetContextAttributesEXT", { GLextension::EGL_EXT_compositor } },
    { "eglCompositorSetContextListEXT", { GLextension::EGL_EXT_compositor } },
    { "eglCompositorSetSizeEXT", { GLextension::EGL_EXT_compositor } },
    { "eglCompositorSetWindowAttributesEXT", { GLextension::EGL_EXT_compositor } },
    { "eglCompositorSetWindowListEXT", { GLextension::EGL_EXT_compositor } },
    { "eglCompositorSwapPolicyEXT", { GLextension::EGL_EXT_compositor } },
    { "eglCreateDRMImageMESA", { GLextension::EGL_MESA_drm_image } },
    { "eglCreateFenceSyncNV", { GLextension::EGL_NV_sync } },
    { "eglCreateImageKHR", { GLextension::EGL_KHR_image, GLextension::EGL_KHR_image_base } },
    { "eglCreateNativeClientBufferANDROID", { GLextension::EGL_ANDROID_create_native_client_buffer } },
    { "eglCreatePixmapSurfaceHI", { GLextension::EGL_HI_clientpixmap } },
    { "eglCreatePlatformPixmapSurfaceEXT", { GLextension::EGL_EXT_platform_base } },
    { "eglCreatePlatformWindowSurfaceEXT", { GLextension::EGL_EXT_platform_base } },
    { "eglCreateStreamAttribKHR", { GLextension::EGL_KHR_stream_attrib } },
    { "eglCreateStreamFromFileDescriptorKHR", { GLextension::EGL_KHR_stream_cross_process_fd } },
    { "eglCreateStreamKHR", { GLextension::EGL_KHR_stream } },
    { "eglCreateStreamProducerSurfaceKHR", { GLextension::EGL_KHR_stream_producer_eglsurface } },
    { "eglCreateStreamSyncNV", { GLextension::EGL_NV_stream_sync } },
    { "eglCreateSync64KHR", { GLextension::EGL_KHR_cl_event2 } },
    { "eglCreateSyncKHR", { GLextension::EGL_KHR_fence_sync, GLextension::EGL_KHR_reusable_sync } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_D =
{
    { "eglDebugMessageControlKHR", { GLextension::EGL_KHR_debug } },
    { "eglDestroyImageKHR", { GLextension::EGL_KHR_image, GLextension::EGL_KHR_image_base } },
    { "eglDestroyStreamKHR", { GLextension::EGL_KHR_stream } },
    { "eglDestroySyncKHR", { GLextension::EGL_KHR_fence_sync, GLextension::EGL_KHR_reusable_sync } },
    { "eglDestroySyncNV", { GLextension::EGL_NV_sync } },
    { "eglDupNativeFenceFDANDROID", { GLextension::EGL_ANDROID_native_fence_sync } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_E =
{
    { "eglExportDMABUFImageMESA", { GLextension::EGL_MESA_image_dma_buf_export } },
    { "eglExportDMABUFImageQueryMESA", { GLextension::EGL_MESA_image_dma_buf_export } },
    { "eglExportDRMImageMESA", { GLextension::EGL_MESA_drm_image } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_F =
{
    { "eglFenceNV", { GLextension::EGL_NV_sync } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_G =
{
    { "eglGetCompositorTimingANDROID", { GLextension::EGL_ANDROID_get_frame_timestamps } },
    { "eglGetCompositorTimingSupportedANDROID", { GLextension::EGL_ANDROID_get_frame_timestamps } },
    { "eglGetFrameTimestampSupportedANDROID", { GLextension::EGL_ANDROID_get_frame_timestamps } },
    { "eglGetFrameTimestampsANDROID", { GLextension::EGL_ANDROID_get_frame_timestamps } },
    { "eglGetNativeClientBufferANDROID", { GLextension::EGL_ANDROID_get_native_client_buffer } },
    { "eglGetNextFrameIdANDROID", { GLextension::EGL_ANDROID_get_frame_timestamps } },
    { "eglGetOutputLayersEXT", { GLextension::EGL_EXT_output_base } },
    { "eglGetOutputPortsEXT", { GLextension::EGL_EXT_output_base } },
    { "eglGetPlatformDisplayEXT", { GLextension::EGL_EXT_platform_base } },
    { "eglGetStreamFileDescriptorKHR", { GLextension::EGL_KHR_stream_cross_process_fd } },
    { "eglGetSyncAttribKHR", { GLextension::EGL_KHR_fence_sync, GLextension::EGL_KHR_reusable_sync } },
    { "eglGetSyncAttribNV", { GLextension::EGL_NV_sync } },
    { "eglGetSystemTimeFrequencyNV", { GLextension::EGL_NV_system_time } },
    { "eglGetSystemTimeNV", { GLextension::EGL_NV_system_time } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_H{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_I{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_J{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_K{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_L =
{
    { "eglLabelObjectKHR", { GLextension::EGL_KHR_debug } },
    { "eglLockSurfaceKHR", { GLextension::EGL_KHR_lock_surface, GLextension::EGL_KHR_lock_surface3 } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_M{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_N{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_O =
{
    { "eglOutputLayerAttribEXT", { GLextension::EGL_EXT_output_base } },
    { "eglOutputPortAttribEXT", { GLextension::EGL_EXT_output_base } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_P =
{
    { "eglPostSubBufferNV", { GLextension::EGL_NV_post_sub_buffer } },
    { "eglPresentationTimeANDROID", { GLextension::EGL_ANDROID_presentation_time } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_Q =
{
    { "eglQueryDebugKHR", { GLextension::EGL_KHR_debug } },
    { "eglQueryDeviceAttribEXT", { GLextension::EGL_EXT_device_base, GLextension::EGL_EXT_device_query } },
    { "eglQueryDeviceStringEXT", { GLextension::EGL_EXT_device_base, GLextension::EGL_EXT_device_query } },
    { "eglQueryDevicesEXT", { GLextension::EGL_EXT_device_base, GLextension::EGL_EXT_device_enumeration } },
    { "eglQueryDisplayAttribEXT", { GLextension::EGL_EXT_device_base, GLextension::EGL_EXT_device_query } },
    { "eglQueryDisplayAttribKHR", { GLextension::EGL_KHR_display_reference } },
    { "eglQueryDisplayAttribNV", { GLextension::EGL_NV_stream_metadata } },
    { "eglQueryDmaBufFormatsEXT", { GLextension::EGL_EXT_image_dma_buf_import_modifiers } },
    { "eglQueryDmaBufModifiersEXT", { GLextension::EGL_EXT_image_dma_buf_import_modifiers } },
    { "eglQueryNativeDisplayNV", { GLextension::EGL_NV_native_query } },
    { "eglQueryNativePixmapNV", { GLextension::EGL_NV_native_query } },
    { "eglQueryNativeWindowNV", { GLextension::EGL_NV_native_query } },
    { "eglQueryOutputLayerAttribEXT", { GLextension::EGL_EXT_output_base } },
    { "eglQueryOutputLayerStringEXT", { GLextension::EGL_EXT_output_base } },
    { "eglQueryOutputPortAttribEXT", { GLextension::EGL_EXT_output_base } },
    { "eglQueryOutputPortStringEXT", { GLextension::EGL_EXT_output_base } },
    { "eglQueryStreamAttribKHR", { GLextension::EGL_KHR_stream_attrib } },
    { "eglQueryStreamKHR", { GLextension::EGL_KHR_stream } },
    { "eglQueryStreamMetadataNV", { GLextension::EGL_NV_stream_metadata } },
    { "eglQueryStreamTimeKHR", { GLextension::EGL_KHR_stream_fifo } },
    { "eglQueryStreamu64KHR", { GLextension::EGL_KHR_stream } },
    { "eglQuerySurface64KHR", { GLextension::EGL_KHR_lock_surface3 } },
    { "eglQuerySurfacePointerANGLE", { GLextension::EGL_ANGLE_query_surface_pointer } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_R =
{
    { "eglResetStreamNV", { GLextension::EGL_NV_stream_reset } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_S =
{
    { "eglSetBlobCacheFuncsANDROID", { GLextension::EGL_ANDROID_blob_cache } },
    { "eglSetDamageRegionKHR", { GLextension::EGL_KHR_partial_update } },
    { "eglSetStreamAttribKHR", { GLextension::EGL_KHR_stream_attrib } },
    { "eglSetStreamMetadataNV", { GLextension::EGL_NV_stream_metadata } },
    { "eglSignalSyncKHR", { GLextension::EGL_KHR_reusable_sync } },
    { "eglSignalSyncNV", { GLextension::EGL_NV_sync } },
    { "eglStreamAttribKHR", { GLextension::EGL_KHR_stream } },
    { "eglStreamConsumerAcquireAttribKHR", { GLextension::EGL_KHR_stream_attrib } },
    { "eglStreamConsumerAcquireKHR", { GLextension::EGL_KHR_stream_consumer_gltexture } },
    { "eglStreamConsumerGLTextureExternalAttribsNV", { GLextension::EGL_NV_stream_consumer_gltexture_yuv } },
    { "eglStreamConsumerGLTextureExternalKHR", { GLextension::EGL_KHR_stream_consumer_gltexture } },
    { "eglStreamConsumerOutputEXT", { GLextension::EGL_EXT_stream_consumer_egloutput } },
    { "eglStreamConsumerReleaseAttribKHR", { GLextension::EGL_KHR_stream_attrib } },
    { "eglStreamConsumerReleaseKHR", { GLextension::EGL_KHR_stream_consumer_gltexture } },
    { "eglSwapBuffersRegion2NOK", { GLextension::EGL_NOK_swap_region2 } },
    { "eglSwapBuffersRegionNOK", { GLextension::EGL_NOK_swap_region } },
    { "eglSwapBuffersWithDamageEXT", { GLextension::EGL_EXT_swap_buffers_with_damage } },
    { "eglSwapBuffersWithDamageKHR", { GLextension::EGL_KHR_swap_buffers_with_damage } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_T{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_U =
{
    { "eglUnlockSurfaceKHR", { GLextension::EGL_KHR_lock_surface, GLextension::EGL_KHR_lock_surface3 } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_V{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_W =
{
    { "eglWaitSyncKHR", { GLextension::EGL_KHR_wait_sync } }
};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_X{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_Y{};

const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_Z{};

const std::array<std::unordered_map<std::string, std::set<egl::GLextension>>, 27> Meta_ExtensionsByFunctionStringMaps =
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


} // namespace eglbinding
