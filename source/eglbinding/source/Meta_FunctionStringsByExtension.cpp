
#include "Meta_Maps.h"

#include <eglbinding/egl/extension.h>


using namespace egl;

namespace eglbinding
{

const std::unordered_map<EGLextension, std::set<std::string>> Meta_FunctionStringsByExtension
{
#ifdef STRINGS_BY_SYMBOLS
    { EGLextension::EGL_ANDROID_blob_cache, { "eglSetBlobCacheFuncsANDROID" } },
    { EGLextension::EGL_ANDROID_native_fence_sync, { "eglDupNativeFenceFDANDROID" } },
    { EGLextension::EGL_ANGLE_query_surface_pointer, { "eglQuerySurfacePointerANGLE" } },
    { EGLextension::EGL_EXT_device_base, { "eglQueryDeviceAttribEXT", "eglQueryDeviceStringEXT", "eglQueryDevicesEXT", "eglQueryDisplayAttribEXT" } },
    { EGLextension::EGL_EXT_device_enumeration, { "eglQueryDevicesEXT" } },
    { EGLextension::EGL_EXT_device_query, { "eglQueryDeviceAttribEXT", "eglQueryDeviceStringEXT", "eglQueryDisplayAttribEXT" } },
    { EGLextension::EGL_EXT_output_base, { "eglGetOutputLayersEXT", "eglGetOutputPortsEXT", "eglOutputLayerAttribEXT", "eglQueryOutputLayerAttribEXT", "eglQueryOutputLayerStringEXT", "eglOutputPortAttribEXT", "eglQueryOutputPortAttribEXT", "eglQueryOutputPortStringEXT" } },
    { EGLextension::EGL_EXT_platform_base, { "eglGetPlatformDisplayEXT", "eglCreatePlatformWindowSurfaceEXT", "eglCreatePlatformPixmapSurfaceEXT" } },
    { EGLextension::EGL_EXT_stream_consumer_egloutput, { "eglStreamConsumerOutputEXT" } },
    { EGLextension::EGL_EXT_swap_buffers_with_damage, { "eglSwapBuffersWithDamageEXT" } },
    { EGLextension::EGL_HI_clientpixmap, { "eglCreatePixmapSurfaceHI" } },
    { EGLextension::EGL_KHR_cl_event2, { "eglCreateSync64KHR" } },
    { EGLextension::EGL_KHR_fence_sync, { "eglCreateSyncKHR", "eglDestroySyncKHR", "eglClientWaitSyncKHR", "eglGetSyncAttribKHR" } },
    { EGLextension::EGL_KHR_image, { "eglCreateImageKHR", "eglDestroyImageKHR" } },
    { EGLextension::EGL_KHR_image_base, { "eglCreateImageKHR", "eglDestroyImageKHR" } },
    { EGLextension::EGL_KHR_lock_surface, { "eglLockSurfaceKHR", "eglUnlockSurfaceKHR" } },
    { EGLextension::EGL_KHR_lock_surface3, { "eglLockSurfaceKHR", "eglUnlockSurfaceKHR", "eglQuerySurface64KHR" } },
    { EGLextension::EGL_KHR_partial_update, { "eglSetDamageRegionKHR" } },
    { EGLextension::EGL_KHR_reusable_sync, { "eglCreateSyncKHR", "eglDestroySyncKHR", "eglClientWaitSyncKHR", "eglSignalSyncKHR", "eglGetSyncAttribKHR" } },
    { EGLextension::EGL_KHR_stream, { "eglCreateStreamKHR", "eglDestroyStreamKHR", "eglStreamAttribKHR", "eglQueryStreamKHR", "eglQueryStreamu64KHR" } },
    { EGLextension::EGL_KHR_stream_consumer_gltexture, { "eglStreamConsumerGLTextureExternalKHR", "eglStreamConsumerAcquireKHR", "eglStreamConsumerReleaseKHR" } },
    { EGLextension::EGL_KHR_stream_cross_process_fd, { "eglGetStreamFileDescriptorKHR", "eglCreateStreamFromFileDescriptorKHR" } },
    { EGLextension::EGL_KHR_stream_fifo, { "eglQueryStreamTimeKHR" } },
    { EGLextension::EGL_KHR_stream_producer_eglsurface, { "eglCreateStreamProducerSurfaceKHR" } },
    { EGLextension::EGL_KHR_swap_buffers_with_damage, { "eglSwapBuffersWithDamageKHR" } },
    { EGLextension::EGL_KHR_wait_sync, { "eglWaitSyncKHR" } },
    { EGLextension::EGL_MESA_drm_image, { "eglCreateDRMImageMESA", "eglExportDRMImageMESA" } },
    { EGLextension::EGL_MESA_image_dma_buf_export, { "eglExportDMABUFImageQueryMESA", "eglExportDMABUFImageMESA" } },
    { EGLextension::EGL_NOK_swap_region, { "eglSwapBuffersRegionNOK" } },
    { EGLextension::EGL_NOK_swap_region2, { "eglSwapBuffersRegion2NOK" } },
    { EGLextension::EGL_NV_native_query, { "eglQueryNativeDisplayNV", "eglQueryNativeWindowNV", "eglQueryNativePixmapNV" } },
    { EGLextension::EGL_NV_post_sub_buffer, { "eglPostSubBufferNV" } },
    { EGLextension::EGL_NV_stream_sync, { "eglCreateStreamSyncNV" } },
    { EGLextension::EGL_NV_sync, { "eglCreateFenceSyncNV", "eglDestroySyncNV", "eglFenceNV", "eglClientWaitSyncNV", "eglSignalSyncNV", "eglGetSyncAttribNV" } },
    { EGLextension::EGL_NV_system_time, { "eglGetSystemTimeFrequencyNV", "eglGetSystemTimeNV" } }
#endif
};

} // namespace eglbinding
