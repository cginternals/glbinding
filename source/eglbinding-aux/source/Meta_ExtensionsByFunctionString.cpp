
#include "Meta_Maps.h"

#include <eglbinding/egl/extension.h>


using namespace egl;


namespace eglbinding { namespace aux
{


const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_0{};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_A{};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_B{};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_C =
{
    { "eglClientWaitSyncKHR", { EGLextension::EGL_KHR_fence_sync, EGLextension::EGL_KHR_reusable_sync } },
    { "eglClientWaitSyncNV", { EGLextension::EGL_NV_sync } },
    { "eglCompositorBindTexWindowEXT", { EGLextension::EGL_EXT_compositor } },
    { "eglCompositorSetContextAttributesEXT", { EGLextension::EGL_EXT_compositor } },
    { "eglCompositorSetContextListEXT", { EGLextension::EGL_EXT_compositor } },
    { "eglCompositorSetSizeEXT", { EGLextension::EGL_EXT_compositor } },
    { "eglCompositorSetWindowAttributesEXT", { EGLextension::EGL_EXT_compositor } },
    { "eglCompositorSetWindowListEXT", { EGLextension::EGL_EXT_compositor } },
    { "eglCompositorSwapPolicyEXT", { EGLextension::EGL_EXT_compositor } },
    { "eglCreateDRMImageMESA", { EGLextension::EGL_MESA_drm_image } },
    { "eglCreateFenceSyncNV", { EGLextension::EGL_NV_sync } },
    { "eglCreateImageKHR", { EGLextension::EGL_KHR_image, EGLextension::EGL_KHR_image_base } },
    { "eglCreateNativeClientBufferANDROID", { EGLextension::EGL_ANDROID_create_native_client_buffer } },
    { "eglCreatePixmapSurfaceHI", { EGLextension::EGL_HI_clientpixmap } },
    { "eglCreatePlatformPixmapSurfaceEXT", { EGLextension::EGL_EXT_platform_base } },
    { "eglCreatePlatformWindowSurfaceEXT", { EGLextension::EGL_EXT_platform_base } },
    { "eglCreateStreamAttribKHR", { EGLextension::EGL_KHR_stream_attrib } },
    { "eglCreateStreamFromFileDescriptorKHR", { EGLextension::EGL_KHR_stream_cross_process_fd } },
    { "eglCreateStreamKHR", { EGLextension::EGL_KHR_stream } },
    { "eglCreateStreamProducerSurfaceKHR", { EGLextension::EGL_KHR_stream_producer_eglsurface } },
    { "eglCreateStreamSyncNV", { EGLextension::EGL_NV_stream_sync } },
    { "eglCreateSync64KHR", { EGLextension::EGL_KHR_cl_event2 } },
    { "eglCreateSyncKHR", { EGLextension::EGL_KHR_fence_sync, EGLextension::EGL_KHR_reusable_sync } }
};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_D =
{
    { "eglDebugMessageControlKHR", { EGLextension::EGL_KHR_debug } },
    { "eglDestroyImageKHR", { EGLextension::EGL_KHR_image, EGLextension::EGL_KHR_image_base } },
    { "eglDestroyStreamKHR", { EGLextension::EGL_KHR_stream } },
    { "eglDestroySyncKHR", { EGLextension::EGL_KHR_fence_sync, EGLextension::EGL_KHR_reusable_sync } },
    { "eglDestroySyncNV", { EGLextension::EGL_NV_sync } },
    { "eglDupNativeFenceFDANDROID", { EGLextension::EGL_ANDROID_native_fence_sync } }
};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_E =
{
    { "eglExportDMABUFImageMESA", { EGLextension::EGL_MESA_image_dma_buf_export } },
    { "eglExportDMABUFImageQueryMESA", { EGLextension::EGL_MESA_image_dma_buf_export } },
    { "eglExportDRMImageMESA", { EGLextension::EGL_MESA_drm_image } }
};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_F =
{
    { "eglFenceNV", { EGLextension::EGL_NV_sync } }
};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_G =
{
    { "eglGetCompositorTimingANDROID", { EGLextension::EGL_ANDROID_get_frame_timestamps } },
    { "eglGetCompositorTimingSupportedANDROID", { EGLextension::EGL_ANDROID_get_frame_timestamps } },
    { "eglGetFrameTimestampSupportedANDROID", { EGLextension::EGL_ANDROID_get_frame_timestamps } },
    { "eglGetFrameTimestampsANDROID", { EGLextension::EGL_ANDROID_get_frame_timestamps } },
    { "eglGetNativeClientBufferANDROID", { EGLextension::EGL_ANDROID_get_native_client_buffer } },
    { "eglGetNextFrameIdANDROID", { EGLextension::EGL_ANDROID_get_frame_timestamps } },
    { "eglGetOutputLayersEXT", { EGLextension::EGL_EXT_output_base } },
    { "eglGetOutputPortsEXT", { EGLextension::EGL_EXT_output_base } },
    { "eglGetPlatformDisplayEXT", { EGLextension::EGL_EXT_platform_base } },
    { "eglGetStreamFileDescriptorKHR", { EGLextension::EGL_KHR_stream_cross_process_fd } },
    { "eglGetSyncAttribKHR", { EGLextension::EGL_KHR_fence_sync, EGLextension::EGL_KHR_reusable_sync } },
    { "eglGetSyncAttribNV", { EGLextension::EGL_NV_sync } },
    { "eglGetSystemTimeFrequencyNV", { EGLextension::EGL_NV_system_time } },
    { "eglGetSystemTimeNV", { EGLextension::EGL_NV_system_time } }
};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_H{};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_I{};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_J{};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_K{};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_L =
{
    { "eglLabelObjectKHR", { EGLextension::EGL_KHR_debug } },
    { "eglLockSurfaceKHR", { EGLextension::EGL_KHR_lock_surface, EGLextension::EGL_KHR_lock_surface3 } }
};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_M{};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_N{};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_O =
{
    { "eglOutputLayerAttribEXT", { EGLextension::EGL_EXT_output_base } },
    { "eglOutputPortAttribEXT", { EGLextension::EGL_EXT_output_base } }
};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_P =
{
    { "eglPostSubBufferNV", { EGLextension::EGL_NV_post_sub_buffer } },
    { "eglPresentationTimeANDROID", { EGLextension::EGL_ANDROID_presentation_time } }
};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_Q =
{
    { "eglQueryDebugKHR", { EGLextension::EGL_KHR_debug } },
    { "eglQueryDeviceAttribEXT", { EGLextension::EGL_EXT_device_base, EGLextension::EGL_EXT_device_query } },
    { "eglQueryDeviceStringEXT", { EGLextension::EGL_EXT_device_base, EGLextension::EGL_EXT_device_query } },
    { "eglQueryDevicesEXT", { EGLextension::EGL_EXT_device_base, EGLextension::EGL_EXT_device_enumeration } },
    { "eglQueryDisplayAttribEXT", { EGLextension::EGL_EXT_device_base, EGLextension::EGL_EXT_device_query } },
    { "eglQueryDisplayAttribKHR", { EGLextension::EGL_KHR_display_reference } },
    { "eglQueryDisplayAttribNV", { EGLextension::EGL_NV_stream_metadata } },
    { "eglQueryDmaBufFormatsEXT", { EGLextension::EGL_EXT_image_dma_buf_import_modifiers } },
    { "eglQueryDmaBufModifiersEXT", { EGLextension::EGL_EXT_image_dma_buf_import_modifiers } },
    { "eglQueryNativeDisplayNV", { EGLextension::EGL_NV_native_query } },
    { "eglQueryNativePixmapNV", { EGLextension::EGL_NV_native_query } },
    { "eglQueryNativeWindowNV", { EGLextension::EGL_NV_native_query } },
    { "eglQueryOutputLayerAttribEXT", { EGLextension::EGL_EXT_output_base } },
    { "eglQueryOutputLayerStringEXT", { EGLextension::EGL_EXT_output_base } },
    { "eglQueryOutputPortAttribEXT", { EGLextension::EGL_EXT_output_base } },
    { "eglQueryOutputPortStringEXT", { EGLextension::EGL_EXT_output_base } },
    { "eglQueryStreamAttribKHR", { EGLextension::EGL_KHR_stream_attrib } },
    { "eglQueryStreamKHR", { EGLextension::EGL_KHR_stream } },
    { "eglQueryStreamMetadataNV", { EGLextension::EGL_NV_stream_metadata } },
    { "eglQueryStreamTimeKHR", { EGLextension::EGL_KHR_stream_fifo } },
    { "eglQueryStreamu64KHR", { EGLextension::EGL_KHR_stream } },
    { "eglQuerySurface64KHR", { EGLextension::EGL_KHR_lock_surface3 } },
    { "eglQuerySurfacePointerANGLE", { EGLextension::EGL_ANGLE_query_surface_pointer } }
};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_R =
{
    { "eglResetStreamNV", { EGLextension::EGL_NV_stream_reset } }
};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_S =
{
    { "eglSetBlobCacheFuncsANDROID", { EGLextension::EGL_ANDROID_blob_cache } },
    { "eglSetDamageRegionKHR", { EGLextension::EGL_KHR_partial_update } },
    { "eglSetStreamAttribKHR", { EGLextension::EGL_KHR_stream_attrib } },
    { "eglSetStreamMetadataNV", { EGLextension::EGL_NV_stream_metadata } },
    { "eglSignalSyncKHR", { EGLextension::EGL_KHR_reusable_sync } },
    { "eglSignalSyncNV", { EGLextension::EGL_NV_sync } },
    { "eglStreamAttribKHR", { EGLextension::EGL_KHR_stream } },
    { "eglStreamConsumerAcquireAttribKHR", { EGLextension::EGL_KHR_stream_attrib } },
    { "eglStreamConsumerAcquireKHR", { EGLextension::EGL_KHR_stream_consumer_gltexture } },
    { "eglStreamConsumerGLTextureExternalAttribsNV", { EGLextension::EGL_NV_stream_consumer_gltexture_yuv } },
    { "eglStreamConsumerGLTextureExternalKHR", { EGLextension::EGL_KHR_stream_consumer_gltexture } },
    { "eglStreamConsumerOutputEXT", { EGLextension::EGL_EXT_stream_consumer_egloutput } },
    { "eglStreamConsumerReleaseAttribKHR", { EGLextension::EGL_KHR_stream_attrib } },
    { "eglStreamConsumerReleaseKHR", { EGLextension::EGL_KHR_stream_consumer_gltexture } },
    { "eglSwapBuffersRegion2NOK", { EGLextension::EGL_NOK_swap_region2 } },
    { "eglSwapBuffersRegionNOK", { EGLextension::EGL_NOK_swap_region } },
    { "eglSwapBuffersWithDamageEXT", { EGLextension::EGL_EXT_swap_buffers_with_damage } },
    { "eglSwapBuffersWithDamageKHR", { EGLextension::EGL_KHR_swap_buffers_with_damage } }
};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_T{};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_U =
{
    { "eglUnlockSurfaceKHR", { EGLextension::EGL_KHR_lock_surface, EGLextension::EGL_KHR_lock_surface3 } }
};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_V{};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_W =
{
    { "eglWaitSyncKHR", { EGLextension::EGL_KHR_wait_sync } }
};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_X{};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_Y{};

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString_Z{};

const std::array<std::unordered_map<std::string, std::set<egl::EGLextension>>, 27> Meta_ExtensionsByFunctionStringMaps =
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


} } // namespace eglbinding::aux
