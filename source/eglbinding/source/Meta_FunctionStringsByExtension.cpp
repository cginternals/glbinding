
#include "Meta_Maps.h"

#include <eglbinding/egl/extension.h>


using namespace egl;


namespace eglbinding
{


const std::unordered_map<GLextension, std::set<std::string>> Meta_FunctionStringsByExtension =
{
    { GLextension::EGL_ANDROID_blob_cache, { "eglSetBlobCacheFuncsANDROID" } },
    { GLextension::EGL_ANDROID_create_native_client_buffer, { "eglCreateNativeClientBufferANDROID" } },
    { GLextension::EGL_ANDROID_get_frame_timestamps, { "eglGetCompositorTimingANDROID", "eglGetCompositorTimingSupportedANDROID", "eglGetFrameTimestampSupportedANDROID", "eglGetFrameTimestampsANDROID", "eglGetNextFrameIdANDROID" } },
    { GLextension::EGL_ANDROID_get_native_client_buffer, { "eglGetNativeClientBufferANDROID" } },
    { GLextension::EGL_ANDROID_native_fence_sync, { "eglDupNativeFenceFDANDROID" } },
    { GLextension::EGL_ANDROID_presentation_time, { "eglPresentationTimeANDROID" } },
    { GLextension::EGL_ANGLE_query_surface_pointer, { "eglQuerySurfacePointerANGLE" } },
    { GLextension::EGL_EXT_compositor, { "eglCompositorBindTexWindowEXT", "eglCompositorSetContextAttributesEXT", "eglCompositorSetContextListEXT", "eglCompositorSetSizeEXT", "eglCompositorSetWindowAttributesEXT", "eglCompositorSetWindowListEXT", "eglCompositorSwapPolicyEXT" } },
    { GLextension::EGL_EXT_device_base, { "eglQueryDeviceAttribEXT", "eglQueryDeviceStringEXT", "eglQueryDevicesEXT", "eglQueryDisplayAttribEXT" } },
    { GLextension::EGL_EXT_device_enumeration, { "eglQueryDevicesEXT" } },
    { GLextension::EGL_EXT_device_query, { "eglQueryDeviceAttribEXT", "eglQueryDeviceStringEXT", "eglQueryDisplayAttribEXT" } },
    { GLextension::EGL_EXT_image_dma_buf_import_modifiers, { "eglQueryDmaBufFormatsEXT", "eglQueryDmaBufModifiersEXT" } },
    { GLextension::EGL_EXT_output_base, { "eglGetOutputLayersEXT", "eglGetOutputPortsEXT", "eglOutputLayerAttribEXT", "eglOutputPortAttribEXT", "eglQueryOutputLayerAttribEXT", "eglQueryOutputLayerStringEXT", "eglQueryOutputPortAttribEXT", "eglQueryOutputPortStringEXT" } },
    { GLextension::EGL_EXT_platform_base, { "eglCreatePlatformPixmapSurfaceEXT", "eglCreatePlatformWindowSurfaceEXT", "eglGetPlatformDisplayEXT" } },
    { GLextension::EGL_EXT_stream_consumer_egloutput, { "eglStreamConsumerOutputEXT" } },
    { GLextension::EGL_EXT_swap_buffers_with_damage, { "eglSwapBuffersWithDamageEXT" } },
    { GLextension::EGL_HI_clientpixmap, { "eglCreatePixmapSurfaceHI" } },
    { GLextension::EGL_KHR_cl_event2, { "eglCreateSync64KHR" } },
    { GLextension::EGL_KHR_debug, { "eglDebugMessageControlKHR", "eglLabelObjectKHR", "eglQueryDebugKHR" } },
    { GLextension::EGL_KHR_display_reference, { "eglQueryDisplayAttribKHR" } },
    { GLextension::EGL_KHR_fence_sync, { "eglClientWaitSyncKHR", "eglCreateSyncKHR", "eglDestroySyncKHR", "eglGetSyncAttribKHR" } },
    { GLextension::EGL_KHR_image, { "eglCreateImageKHR", "eglDestroyImageKHR" } },
    { GLextension::EGL_KHR_image_base, { "eglCreateImageKHR", "eglDestroyImageKHR" } },
    { GLextension::EGL_KHR_lock_surface, { "eglLockSurfaceKHR", "eglUnlockSurfaceKHR" } },
    { GLextension::EGL_KHR_lock_surface3, { "eglLockSurfaceKHR", "eglQuerySurface64KHR", "eglUnlockSurfaceKHR" } },
    { GLextension::EGL_KHR_partial_update, { "eglSetDamageRegionKHR" } },
    { GLextension::EGL_KHR_reusable_sync, { "eglClientWaitSyncKHR", "eglCreateSyncKHR", "eglDestroySyncKHR", "eglGetSyncAttribKHR", "eglSignalSyncKHR" } },
    { GLextension::EGL_KHR_stream, { "eglCreateStreamKHR", "eglDestroyStreamKHR", "eglQueryStreamKHR", "eglQueryStreamu64KHR", "eglStreamAttribKHR" } },
    { GLextension::EGL_KHR_stream_attrib, { "eglCreateStreamAttribKHR", "eglQueryStreamAttribKHR", "eglSetStreamAttribKHR", "eglStreamConsumerAcquireAttribKHR", "eglStreamConsumerReleaseAttribKHR" } },
    { GLextension::EGL_KHR_stream_consumer_gltexture, { "eglStreamConsumerAcquireKHR", "eglStreamConsumerGLTextureExternalKHR", "eglStreamConsumerReleaseKHR" } },
    { GLextension::EGL_KHR_stream_cross_process_fd, { "eglCreateStreamFromFileDescriptorKHR", "eglGetStreamFileDescriptorKHR" } },
    { GLextension::EGL_KHR_stream_fifo, { "eglQueryStreamTimeKHR" } },
    { GLextension::EGL_KHR_stream_producer_eglsurface, { "eglCreateStreamProducerSurfaceKHR" } },
    { GLextension::EGL_KHR_swap_buffers_with_damage, { "eglSwapBuffersWithDamageKHR" } },
    { GLextension::EGL_KHR_wait_sync, { "eglWaitSyncKHR" } },
    { GLextension::EGL_MESA_drm_image, { "eglCreateDRMImageMESA", "eglExportDRMImageMESA" } },
    { GLextension::EGL_MESA_image_dma_buf_export, { "eglExportDMABUFImageMESA", "eglExportDMABUFImageQueryMESA" } },
    { GLextension::EGL_NOK_swap_region, { "eglSwapBuffersRegionNOK" } },
    { GLextension::EGL_NOK_swap_region2, { "eglSwapBuffersRegion2NOK" } },
    { GLextension::EGL_NV_native_query, { "eglQueryNativeDisplayNV", "eglQueryNativePixmapNV", "eglQueryNativeWindowNV" } },
    { GLextension::EGL_NV_post_sub_buffer, { "eglPostSubBufferNV" } },
    { GLextension::EGL_NV_stream_consumer_gltexture_yuv, { "eglStreamConsumerGLTextureExternalAttribsNV" } },
    { GLextension::EGL_NV_stream_metadata, { "eglQueryDisplayAttribNV", "eglQueryStreamMetadataNV", "eglSetStreamMetadataNV" } },
    { GLextension::EGL_NV_stream_reset, { "eglResetStreamNV" } },
    { GLextension::EGL_NV_stream_sync, { "eglCreateStreamSyncNV" } },
    { GLextension::EGL_NV_sync, { "eglClientWaitSyncNV", "eglCreateFenceSyncNV", "eglDestroySyncNV", "eglFenceNV", "eglGetSyncAttribNV", "eglSignalSyncNV" } },
    { GLextension::EGL_NV_system_time, { "eglGetSystemTimeFrequencyNV", "eglGetSystemTimeNV" } },

};


} // namespace eglbinding
