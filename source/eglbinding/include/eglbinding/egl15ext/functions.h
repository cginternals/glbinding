#pragma once

#include <eglbinding/noegl.h>
#include <eglbinding/egl/functions.h>


namespace egl15ext
{

using egl::eglClientWaitSyncKHR;
using egl::eglClientWaitSyncNV;
using egl::eglCreateDRMImageMESA;
using egl::eglCreateFenceSyncNV;
using egl::eglCreateImageKHR;
using egl::eglCreatePixmapSurfaceHI;
using egl::eglCreatePlatformPixmapSurfaceEXT;
using egl::eglCreatePlatformWindowSurfaceEXT;
using egl::eglCreateStreamFromFileDescriptorKHR;
using egl::eglCreateStreamKHR;
using egl::eglCreateStreamProducerSurfaceKHR;
using egl::eglCreateStreamSyncNV;
using egl::eglCreateSync64KHR;
using egl::eglCreateSyncKHR;
using egl::eglDestroyImageKHR;
using egl::eglDestroyStreamKHR;
using egl::eglDestroySyncKHR;
using egl::eglDestroySyncNV;
using egl::eglDupNativeFenceFDANDROID;
using egl::eglExportDMABUFImageMESA;
using egl::eglExportDMABUFImageQueryMESA;
using egl::eglExportDRMImageMESA;
using egl::eglFenceNV;
using egl::eglGetOutputLayersEXT;
using egl::eglGetOutputPortsEXT;
using egl::eglGetPlatformDisplayEXT;
using egl::eglGetStreamFileDescriptorKHR;
using egl::eglGetSyncAttribKHR;
using egl::eglGetSyncAttribNV;
using egl::eglGetSystemTimeFrequencyNV;
using egl::eglGetSystemTimeNV;
using egl::eglLockSurfaceKHR;
using egl::eglOutputLayerAttribEXT;
using egl::eglOutputPortAttribEXT;
using egl::eglPostSubBufferNV;
using egl::eglQueryDeviceAttribEXT;
using egl::eglQueryDeviceStringEXT;
using egl::eglQueryDevicesEXT;
using egl::eglQueryDisplayAttribEXT;
using egl::eglQueryNativeDisplayNV;
using egl::eglQueryNativePixmapNV;
using egl::eglQueryNativeWindowNV;
using egl::eglQueryOutputLayerAttribEXT;
using egl::eglQueryOutputLayerStringEXT;
using egl::eglQueryOutputPortAttribEXT;
using egl::eglQueryOutputPortStringEXT;
using egl::eglQueryStreamKHR;
using egl::eglQueryStreamTimeKHR;
using egl::eglQueryStreamu64KHR;
using egl::eglQuerySurface64KHR;
using egl::eglQuerySurfacePointerANGLE;
using egl::eglSetBlobCacheFuncsANDROID;
using egl::eglSetDamageRegionKHR;
using egl::eglSignalSyncKHR;
using egl::eglSignalSyncNV;
using egl::eglStreamAttribKHR;
using egl::eglStreamConsumerAcquireKHR;
using egl::eglStreamConsumerGLTextureExternalKHR;
using egl::eglStreamConsumerOutputEXT;
using egl::eglStreamConsumerReleaseKHR;
using egl::eglSwapBuffersRegion2NOK;
using egl::eglSwapBuffersRegionNOK;
using egl::eglSwapBuffersWithDamageEXT;
using egl::eglSwapBuffersWithDamageKHR;
using egl::eglUnlockSurfaceKHR;
using egl::eglWaitSyncKHR;

} // namespace egl15ext
