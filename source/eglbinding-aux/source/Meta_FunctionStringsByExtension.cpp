
#include "Meta_Maps.h"

#include <eglbinding/egl/extension.h>


using namespace egl;


namespace eglbinding { namespace aux
{


const std::unordered_map<EGLextension, std::set<std::string>> Meta_FunctionStringsByExtension =
{
    { EGLextension::EGL_ANDROID_blob_cache, { "eglSetBlobCacheFuncsANDROID" } },
    { EGLextension::EGL_ANDROID_create_native_client_buffer, { "eglCreateNativeClientBufferANDROID" } },
    { EGLextension::EGL_ANDROID_get_frame_timestamps, { "eglGetCompositorTimingANDROID", "eglGetCompositorTimingSupportedANDROID", "eglGetFrameTimestampSupportedANDROID", "eglGetFrameTimestampsANDROID", "eglGetNextFrameIdANDROID" } },
    { EGLextension::EGL_ANDROID_get_native_client_buffer, { "eglGetNativeClientBufferANDROID" } },
    { EGLextension::EGL_ANDROID_native_fence_sync, { "eglDupNativeFenceFDANDROID" } },
    { EGLextension::EGL_ANDROID_presentation_time, { "eglPresentationTimeANDROID" } },
    { EGLextension::EGL_ANGLE_query_surface_pointer, { "eglQuerySurfacePointerANGLE" } },
    { EGLextension::EGL_EXT_compositor, { "eglCompositorBindTexWindowEXT", "eglCompositorSetContextAttributesEXT", "eglCompositorSetContextListEXT", "eglCompositorSetSizeEXT", "eglCompositorSetWindowAttributesEXT", "eglCompositorSetWindowListEXT", "eglCompositorSwapPolicyEXT" } },
    { EGLextension::EGL_EXT_device_base, { "eglQueryDeviceAttribEXT", "eglQueryDeviceStringEXT", "eglQueryDevicesEXT", "eglQueryDisplayAttribEXT" } },
    { EGLextension::EGL_EXT_device_enumeration, { "eglQueryDevicesEXT" } },
    { EGLextension::EGL_EXT_device_query, { "eglQueryDeviceAttribEXT", "eglQueryDeviceStringEXT", "eglQueryDisplayAttribEXT" } },
    { EGLextension::EGL_EXT_image_dma_buf_import_modifiers, { "eglQueryDmaBufFormatsEXT", "eglQueryDmaBufModifiersEXT" } },
    { EGLextension::EGL_EXT_output_base, { "eglGetOutputLayersEXT", "eglGetOutputPortsEXT", "eglOutputLayerAttribEXT", "eglOutputPortAttribEXT", "eglQueryOutputLayerAttribEXT", "eglQueryOutputLayerStringEXT", "eglQueryOutputPortAttribEXT", "eglQueryOutputPortStringEXT" } },
    { EGLextension::EGL_EXT_platform_base, { "eglCreatePlatformPixmapSurfaceEXT", "eglCreatePlatformWindowSurfaceEXT", "eglGetPlatformDisplayEXT" } },
    { EGLextension::EGL_EXT_stream_consumer_egloutput, { "eglStreamConsumerOutputEXT" } },
    { EGLextension::EGL_EXT_swap_buffers_with_damage, { "eglSwapBuffersWithDamageEXT" } },
    { EGLextension::EGL_HI_clientpixmap, { "eglCreatePixmapSurfaceHI" } },
    { EGLextension::EGL_KHR_cl_event2, { "eglCreateSync64KHR" } },
    { EGLextension::EGL_KHR_debug, { "eglDebugMessageControlKHR", "eglLabelObjectKHR", "eglQueryDebugKHR" } },
    { EGLextension::EGL_KHR_display_reference, { "eglQueryDisplayAttribKHR" } },
    { EGLextension::EGL_KHR_fence_sync, { "eglClientWaitSyncKHR", "eglCreateSyncKHR", "eglDestroySyncKHR", "eglGetSyncAttribKHR" } },
    { EGLextension::EGL_KHR_image, { "eglCreateImageKHR", "eglDestroyImageKHR" } },
    { EGLextension::EGL_KHR_image_base, { "eglCreateImageKHR", "eglDestroyImageKHR" } },
    { EGLextension::EGL_KHR_lock_surface, { "eglLockSurfaceKHR", "eglUnlockSurfaceKHR" } },
    { EGLextension::EGL_KHR_lock_surface3, { "eglLockSurfaceKHR", "eglQuerySurface64KHR", "eglUnlockSurfaceKHR" } },
    { EGLextension::EGL_KHR_partial_update, { "eglSetDamageRegionKHR" } },
    { EGLextension::EGL_KHR_reusable_sync, { "eglClientWaitSyncKHR", "eglCreateSyncKHR", "eglDestroySyncKHR", "eglGetSyncAttribKHR", "eglSignalSyncKHR" } },
    { EGLextension::EGL_KHR_stream, { "eglCreateStreamKHR", "eglDestroyStreamKHR", "eglQueryStreamKHR", "eglQueryStreamu64KHR", "eglStreamAttribKHR" } },
    { EGLextension::EGL_KHR_stream_attrib, { "eglCreateStreamAttribKHR", "eglQueryStreamAttribKHR", "eglSetStreamAttribKHR", "eglStreamConsumerAcquireAttribKHR", "eglStreamConsumerReleaseAttribKHR" } },
    { EGLextension::EGL_KHR_stream_consumer_gltexture, { "eglStreamConsumerAcquireKHR", "eglStreamConsumerGLTextureExternalKHR", "eglStreamConsumerReleaseKHR" } },
    { EGLextension::EGL_KHR_stream_cross_process_fd, { "eglCreateStreamFromFileDescriptorKHR", "eglGetStreamFileDescriptorKHR" } },
    { EGLextension::EGL_KHR_stream_fifo, { "eglQueryStreamTimeKHR" } },
    { EGLextension::EGL_KHR_stream_producer_eglsurface, { "eglCreateStreamProducerSurfaceKHR" } },
    { EGLextension::EGL_KHR_swap_buffers_with_damage, { "eglSwapBuffersWithDamageKHR" } },
    { EGLextension::EGL_KHR_wait_sync, { "eglWaitSyncKHR" } },
    { EGLextension::EGL_MESA_drm_image, { "eglCreateDRMImageMESA", "eglExportDRMImageMESA" } },
    { EGLextension::EGL_MESA_image_dma_buf_export, { "eglExportDMABUFImageMESA", "eglExportDMABUFImageQueryMESA" } },
    { EGLextension::EGL_NOK_swap_region, { "eglSwapBuffersRegionNOK" } },
    { EGLextension::EGL_NOK_swap_region2, { "eglSwapBuffersRegion2NOK" } },
    { EGLextension::EGL_NV_native_query, { "eglQueryNativeDisplayNV", "eglQueryNativePixmapNV", "eglQueryNativeWindowNV" } },
    { EGLextension::EGL_NV_post_sub_buffer, { "eglPostSubBufferNV" } },
    { EGLextension::EGL_NV_stream_consumer_gltexture_yuv, { "eglStreamConsumerGLTextureExternalAttribsNV" } },
    { EGLextension::EGL_NV_stream_metadata, { "eglQueryDisplayAttribNV", "eglQueryStreamMetadataNV", "eglSetStreamMetadataNV" } },
    { EGLextension::EGL_NV_stream_reset, { "eglResetStreamNV" } },
    { EGLextension::EGL_NV_stream_sync, { "eglCreateStreamSyncNV" } },
    { EGLextension::EGL_NV_sync, { "eglClientWaitSyncNV", "eglCreateFenceSyncNV", "eglDestroySyncNV", "eglFenceNV", "eglGetSyncAttribNV", "eglSignalSyncNV" } },
    { EGLextension::EGL_NV_system_time, { "eglGetSystemTimeFrequencyNV", "eglGetSystemTimeNV" } },

};


} } // namespace eglbinding::aux
