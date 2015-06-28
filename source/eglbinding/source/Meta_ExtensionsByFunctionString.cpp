
#include "Meta_Maps.h"

#include <eglbinding/egl/extension.h>


using namespace egl;

namespace eglbinding
{

const std::unordered_map<std::string, std::set<EGLextension>> Meta_ExtensionsByFunctionString
{
#ifdef SYMBOLS_BY_STRINGS
    { "eglClientWaitSyncKHR", { EGLextension::EGL_KHR_fence_sync, EGLextension::EGL_KHR_reusable_sync } },
    { "eglClientWaitSyncNV", { EGLextension::EGL_NV_sync } },
    { "eglCreateDRMImageMESA", { EGLextension::EGL_MESA_drm_image } },
    { "eglCreateFenceSyncNV", { EGLextension::EGL_NV_sync } },
    { "eglCreateImageKHR", { EGLextension::EGL_KHR_image, EGLextension::EGL_KHR_image_base } },
    { "eglCreatePixmapSurfaceHI", { EGLextension::EGL_HI_clientpixmap } },
    { "eglCreatePlatformPixmapSurfaceEXT", { EGLextension::EGL_EXT_platform_base } },
    { "eglCreatePlatformWindowSurfaceEXT", { EGLextension::EGL_EXT_platform_base } },
    { "eglCreateStreamFromFileDescriptorKHR", { EGLextension::EGL_KHR_stream_cross_process_fd } },
    { "eglCreateStreamKHR", { EGLextension::EGL_KHR_stream } },
    { "eglCreateStreamProducerSurfaceKHR", { EGLextension::EGL_KHR_stream_producer_eglsurface } },
    { "eglCreateStreamSyncNV", { EGLextension::EGL_NV_stream_sync } },
    { "eglCreateSync64KHR", { EGLextension::EGL_KHR_cl_event2 } },
    { "eglCreateSyncKHR", { EGLextension::EGL_KHR_fence_sync, EGLextension::EGL_KHR_reusable_sync } },
    { "eglDestroyImageKHR", { EGLextension::EGL_KHR_image, EGLextension::EGL_KHR_image_base } },
    { "eglDestroyStreamKHR", { EGLextension::EGL_KHR_stream } },
    { "eglDestroySyncKHR", { EGLextension::EGL_KHR_fence_sync, EGLextension::EGL_KHR_reusable_sync } },
    { "eglDestroySyncNV", { EGLextension::EGL_NV_sync } },
    { "eglDupNativeFenceFDANDROID", { EGLextension::EGL_ANDROID_native_fence_sync } },
    { "eglExportDMABUFImageMESA", { EGLextension::EGL_MESA_image_dma_buf_export } },
    { "eglExportDMABUFImageQueryMESA", { EGLextension::EGL_MESA_image_dma_buf_export } },
    { "eglExportDRMImageMESA", { EGLextension::EGL_MESA_drm_image } },
    { "eglFenceNV", { EGLextension::EGL_NV_sync } },
    { "eglGetOutputLayersEXT", { EGLextension::EGL_EXT_output_base } },
    { "eglGetOutputPortsEXT", { EGLextension::EGL_EXT_output_base } },
    { "eglGetPlatformDisplayEXT", { EGLextension::EGL_EXT_platform_base } },
    { "eglGetStreamFileDescriptorKHR", { EGLextension::EGL_KHR_stream_cross_process_fd } },
    { "eglGetSyncAttribKHR", { EGLextension::EGL_KHR_fence_sync, EGLextension::EGL_KHR_reusable_sync } },
    { "eglGetSyncAttribNV", { EGLextension::EGL_NV_sync } },
    { "eglGetSystemTimeFrequencyNV", { EGLextension::EGL_NV_system_time } },
    { "eglGetSystemTimeNV", { EGLextension::EGL_NV_system_time } },
    { "eglLockSurfaceKHR", { EGLextension::EGL_KHR_lock_surface, EGLextension::EGL_KHR_lock_surface3 } },
    { "eglOutputLayerAttribEXT", { EGLextension::EGL_EXT_output_base } },
    { "eglOutputPortAttribEXT", { EGLextension::EGL_EXT_output_base } },
    { "eglPostSubBufferNV", { EGLextension::EGL_NV_post_sub_buffer } },
    { "eglQueryDeviceAttribEXT", { EGLextension::EGL_EXT_device_base, EGLextension::EGL_EXT_device_query } },
    { "eglQueryDeviceStringEXT", { EGLextension::EGL_EXT_device_base, EGLextension::EGL_EXT_device_query } },
    { "eglQueryDevicesEXT", { EGLextension::EGL_EXT_device_base, EGLextension::EGL_EXT_device_enumeration } },
    { "eglQueryDisplayAttribEXT", { EGLextension::EGL_EXT_device_base, EGLextension::EGL_EXT_device_query } },
    { "eglQueryNativeDisplayNV", { EGLextension::EGL_NV_native_query } },
    { "eglQueryNativePixmapNV", { EGLextension::EGL_NV_native_query } },
    { "eglQueryNativeWindowNV", { EGLextension::EGL_NV_native_query } },
    { "eglQueryOutputLayerAttribEXT", { EGLextension::EGL_EXT_output_base } },
    { "eglQueryOutputLayerStringEXT", { EGLextension::EGL_EXT_output_base } },
    { "eglQueryOutputPortAttribEXT", { EGLextension::EGL_EXT_output_base } },
    { "eglQueryOutputPortStringEXT", { EGLextension::EGL_EXT_output_base } },
    { "eglQueryStreamKHR", { EGLextension::EGL_KHR_stream } },
    { "eglQueryStreamTimeKHR", { EGLextension::EGL_KHR_stream_fifo } },
    { "eglQueryStreamu64KHR", { EGLextension::EGL_KHR_stream } },
    { "eglQuerySurface64KHR", { EGLextension::EGL_KHR_lock_surface3 } },
    { "eglQuerySurfacePointerANGLE", { EGLextension::EGL_ANGLE_query_surface_pointer } },
    { "eglSetBlobCacheFuncsANDROID", { EGLextension::EGL_ANDROID_blob_cache } },
    { "eglSetDamageRegionKHR", { EGLextension::EGL_KHR_partial_update } },
    { "eglSignalSyncKHR", { EGLextension::EGL_KHR_reusable_sync } },
    { "eglSignalSyncNV", { EGLextension::EGL_NV_sync } },
    { "eglStreamAttribKHR", { EGLextension::EGL_KHR_stream } },
    { "eglStreamConsumerAcquireKHR", { EGLextension::EGL_KHR_stream_consumer_gltexture } },
    { "eglStreamConsumerGLTextureExternalKHR", { EGLextension::EGL_KHR_stream_consumer_gltexture } },
    { "eglStreamConsumerOutputEXT", { EGLextension::EGL_EXT_stream_consumer_egloutput } },
    { "eglStreamConsumerReleaseKHR", { EGLextension::EGL_KHR_stream_consumer_gltexture } },
    { "eglSwapBuffersRegion2NOK", { EGLextension::EGL_NOK_swap_region2 } },
    { "eglSwapBuffersRegionNOK", { EGLextension::EGL_NOK_swap_region } },
    { "eglSwapBuffersWithDamageEXT", { EGLextension::EGL_EXT_swap_buffers_with_damage } },
    { "eglSwapBuffersWithDamageKHR", { EGLextension::EGL_KHR_swap_buffers_with_damage } },
    { "eglUnlockSurfaceKHR", { EGLextension::EGL_KHR_lock_surface, EGLextension::EGL_KHR_lock_surface3 } },
    { "eglWaitSyncKHR", { EGLextension::EGL_KHR_wait_sync } }
#endif
};

} // namespace eglbinding
