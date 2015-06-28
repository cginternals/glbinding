#pragma once

#include <eglbinding/eglbinding_api.h>

#include <eglbinding/noegl.h>
#include <eglbinding/egl/types.h>


namespace egl
{

EGLBINDING_API EGLBoolean eglBindAPI(EGLenum api);
EGLBINDING_API EGLBoolean eglBindTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer);
EGLBINDING_API EGLBoolean eglChooseConfig(EGLDisplay dpy, const EGLint * attrib_list, EGLConfig * configs, EGLint config_size, EGLint * num_config);
EGLBINDING_API EGLint eglClientWaitSync(EGLDisplay dpy, EGLSync sync, EGLint flags, EGLTime timeout);
EGLBINDING_API EGLint eglClientWaitSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout);
EGLBINDING_API EGLint eglClientWaitSyncNV(EGLSyncNV sync, EGLint flags, EGLTimeNV timeout);
EGLBINDING_API EGLBoolean eglCopyBuffers(EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target);
EGLBINDING_API EGLContext eglCreateContext(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint * attrib_list);
EGLBINDING_API EGLImageKHR eglCreateDRMImageMESA(EGLDisplay dpy, const EGLint * attrib_list);
EGLBINDING_API EGLSyncNV eglCreateFenceSyncNV(EGLDisplay dpy, EGLenum condition, const EGLint * attrib_list);
EGLBINDING_API EGLImage eglCreateImage(EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLAttrib * attrib_list);
EGLBINDING_API EGLImageKHR eglCreateImageKHR(EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint * attrib_list);
EGLBINDING_API EGLSurface eglCreatePbufferFromClientBuffer(EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint * attrib_list);
EGLBINDING_API EGLSurface eglCreatePbufferSurface(EGLDisplay dpy, EGLConfig config, const EGLint * attrib_list);
EGLBINDING_API EGLSurface eglCreatePixmapSurface(EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint * attrib_list);
EGLBINDING_API EGLSurface eglCreatePixmapSurfaceHI(EGLDisplay dpy, EGLConfig config, EGLClientPixmapHI * pixmap);
EGLBINDING_API EGLSurface eglCreatePlatformPixmapSurface(EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLAttrib * attrib_list);
EGLBINDING_API EGLSurface eglCreatePlatformPixmapSurfaceEXT(EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLint * attrib_list);
EGLBINDING_API EGLSurface eglCreatePlatformWindowSurface(EGLDisplay dpy, EGLConfig config, void * native_window, const EGLAttrib * attrib_list);
EGLBINDING_API EGLSurface eglCreatePlatformWindowSurfaceEXT(EGLDisplay dpy, EGLConfig config, void * native_window, const EGLint * attrib_list);
EGLBINDING_API EGLStreamKHR eglCreateStreamFromFileDescriptorKHR(EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor);
EGLBINDING_API EGLStreamKHR eglCreateStreamKHR(EGLDisplay dpy, const EGLint * attrib_list);
EGLBINDING_API EGLSurface eglCreateStreamProducerSurfaceKHR(EGLDisplay dpy, EGLConfig config, EGLStreamKHR stream, const EGLint * attrib_list);
EGLBINDING_API EGLSyncKHR eglCreateStreamSyncNV(EGLDisplay dpy, EGLStreamKHR stream, EGLenum type, const EGLint * attrib_list);
EGLBINDING_API EGLSync eglCreateSync(EGLDisplay dpy, EGLenum type, const EGLAttrib * attrib_list);
EGLBINDING_API EGLSyncKHR eglCreateSync64KHR(EGLDisplay dpy, EGLenum type, const EGLAttribKHR * attrib_list);
EGLBINDING_API EGLSyncKHR eglCreateSyncKHR(EGLDisplay dpy, EGLenum type, const EGLint * attrib_list);
EGLBINDING_API EGLSurface eglCreateWindowSurface(EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint * attrib_list);
EGLBINDING_API EGLBoolean eglDestroyContext(EGLDisplay dpy, EGLContext ctx);
EGLBINDING_API EGLBoolean eglDestroyImage(EGLDisplay dpy, EGLImage image);
EGLBINDING_API EGLBoolean eglDestroyImageKHR(EGLDisplay dpy, EGLImageKHR image);
EGLBINDING_API EGLBoolean eglDestroyStreamKHR(EGLDisplay dpy, EGLStreamKHR stream);
EGLBINDING_API EGLBoolean eglDestroySurface(EGLDisplay dpy, EGLSurface surface);
EGLBINDING_API EGLBoolean eglDestroySync(EGLDisplay dpy, EGLSync sync);
EGLBINDING_API EGLBoolean eglDestroySyncKHR(EGLDisplay dpy, EGLSyncKHR sync);
EGLBINDING_API EGLBoolean eglDestroySyncNV(EGLSyncNV sync);
EGLBINDING_API EGLint eglDupNativeFenceFDANDROID(EGLDisplay dpy, EGLSyncKHR sync);
EGLBINDING_API EGLBoolean eglExportDMABUFImageMESA(EGLDisplay dpy, EGLImageKHR image, int * fds, EGLint * strides, EGLint * offsets);
EGLBINDING_API EGLBoolean eglExportDMABUFImageQueryMESA(EGLDisplay dpy, EGLImageKHR image, int * fourcc, int * num_planes, EGLuint64KHR * modifiers);
EGLBINDING_API EGLBoolean eglExportDRMImageMESA(EGLDisplay dpy, EGLImageKHR image, EGLint * name, EGLint * handle, EGLint * stride);
EGLBINDING_API EGLBoolean eglFenceNV(EGLSyncNV sync);
EGLBINDING_API EGLBoolean eglGetConfigAttrib(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint * value);
EGLBINDING_API EGLBoolean eglGetConfigs(EGLDisplay dpy, EGLConfig * configs, EGLint config_size, EGLint * num_config);
EGLBINDING_API EGLContext eglGetCurrentContext();
EGLBINDING_API EGLDisplay eglGetCurrentDisplay();
EGLBINDING_API EGLSurface eglGetCurrentSurface(EGLint readdraw);
EGLBINDING_API EGLDisplay eglGetDisplay(EGLNativeDisplayType display_id);
EGLBINDING_API EGLint eglGetError();
EGLBINDING_API EGLBoolean eglGetOutputLayersEXT(EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputLayerEXT * layers, EGLint max_layers, EGLint * num_layers);
EGLBINDING_API EGLBoolean eglGetOutputPortsEXT(EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputPortEXT * ports, EGLint max_ports, EGLint * num_ports);
EGLBINDING_API EGLDisplay eglGetPlatformDisplay(EGLenum platform, void * native_display, const EGLAttrib * attrib_list);
EGLBINDING_API EGLDisplay eglGetPlatformDisplayEXT(EGLenum platform, void * native_display, const EGLint * attrib_list);
EGLBINDING_API __eglMustCastToProperFunctionPointerType eglGetProcAddress(const char * procname);
EGLBINDING_API EGLNativeFileDescriptorKHR eglGetStreamFileDescriptorKHR(EGLDisplay dpy, EGLStreamKHR stream);
EGLBINDING_API EGLBoolean eglGetSyncAttrib(EGLDisplay dpy, EGLSync sync, EGLint attribute, EGLAttrib * value);
EGLBINDING_API EGLBoolean eglGetSyncAttribKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint * value);
EGLBINDING_API EGLBoolean eglGetSyncAttribNV(EGLSyncNV sync, EGLint attribute, EGLint * value);
EGLBINDING_API EGLuint64NV eglGetSystemTimeFrequencyNV();
EGLBINDING_API EGLuint64NV eglGetSystemTimeNV();
EGLBINDING_API EGLBoolean eglInitialize(EGLDisplay dpy, EGLint * major, EGLint * minor);
EGLBINDING_API EGLBoolean eglLockSurfaceKHR(EGLDisplay dpy, EGLSurface surface, const EGLint * attrib_list);
EGLBINDING_API EGLBoolean eglMakeCurrent(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx);
EGLBINDING_API EGLBoolean eglOutputLayerAttribEXT(EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib value);
EGLBINDING_API EGLBoolean eglOutputPortAttribEXT(EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib value);
EGLBINDING_API EGLBoolean eglPostSubBufferNV(EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height);
EGLBINDING_API EGLenum eglQueryAPI();
EGLBINDING_API EGLBoolean eglQueryContext(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint * value);
EGLBINDING_API EGLBoolean eglQueryDeviceAttribEXT(EGLDeviceEXT device, EGLint attribute, EGLAttrib * value);
EGLBINDING_API const char * eglQueryDeviceStringEXT(EGLDeviceEXT device, EGLint name);
EGLBINDING_API EGLBoolean eglQueryDevicesEXT(EGLint max_devices, EGLDeviceEXT * devices, EGLint * num_devices);
EGLBINDING_API EGLBoolean eglQueryDisplayAttribEXT(EGLDisplay dpy, EGLint attribute, EGLAttrib * value);
EGLBINDING_API EGLBoolean eglQueryNativeDisplayNV(EGLDisplay dpy, EGLNativeDisplayType * display_id);
EGLBINDING_API EGLBoolean eglQueryNativePixmapNV(EGLDisplay dpy, EGLSurface surf, EGLNativePixmapType * pixmap);
EGLBINDING_API EGLBoolean eglQueryNativeWindowNV(EGLDisplay dpy, EGLSurface surf, EGLNativeWindowType * window);
EGLBINDING_API EGLBoolean eglQueryOutputLayerAttribEXT(EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib * value);
EGLBINDING_API const char * eglQueryOutputLayerStringEXT(EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint name);
EGLBINDING_API EGLBoolean eglQueryOutputPortAttribEXT(EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib * value);
EGLBINDING_API const char * eglQueryOutputPortStringEXT(EGLDisplay dpy, EGLOutputPortEXT port, EGLint name);
EGLBINDING_API EGLBoolean eglQueryStreamKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint * value);
EGLBINDING_API EGLBoolean eglQueryStreamTimeKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR * value);
EGLBINDING_API EGLBoolean eglQueryStreamu64KHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR * value);
EGLBINDING_API const char * eglQueryString(EGLDisplay dpy, EGLint name);
EGLBINDING_API EGLBoolean eglQuerySurface(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint * value);
EGLBINDING_API EGLBoolean eglQuerySurface64KHR(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLAttribKHR * value);
EGLBINDING_API EGLBoolean eglQuerySurfacePointerANGLE(EGLDisplay dpy, EGLSurface surface, EGLint attribute, void ** value);
EGLBINDING_API EGLBoolean eglReleaseTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer);
EGLBINDING_API EGLBoolean eglReleaseThread();
EGLBINDING_API void eglSetBlobCacheFuncsANDROID(EGLDisplay dpy, EGLSetBlobFuncANDROID set, EGLGetBlobFuncANDROID get);
EGLBINDING_API EGLBoolean eglSetDamageRegionKHR(EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects);
EGLBINDING_API EGLBoolean eglSignalSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode);
EGLBINDING_API EGLBoolean eglSignalSyncNV(EGLSyncNV sync, EGLenum mode);
EGLBINDING_API EGLBoolean eglStreamAttribKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint value);
EGLBINDING_API EGLBoolean eglStreamConsumerAcquireKHR(EGLDisplay dpy, EGLStreamKHR stream);
EGLBINDING_API EGLBoolean eglStreamConsumerGLTextureExternalKHR(EGLDisplay dpy, EGLStreamKHR stream);
EGLBINDING_API EGLBoolean eglStreamConsumerOutputEXT(EGLDisplay dpy, EGLStreamKHR stream, EGLOutputLayerEXT layer);
EGLBINDING_API EGLBoolean eglStreamConsumerReleaseKHR(EGLDisplay dpy, EGLStreamKHR stream);
EGLBINDING_API EGLBoolean eglSurfaceAttrib(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value);
EGLBINDING_API EGLBoolean eglSwapBuffers(EGLDisplay dpy, EGLSurface surface);
EGLBINDING_API EGLBoolean eglSwapBuffersRegion2NOK(EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects);
EGLBINDING_API EGLBoolean eglSwapBuffersRegionNOK(EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects);
EGLBINDING_API EGLBoolean eglSwapBuffersWithDamageEXT(EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects);
EGLBINDING_API EGLBoolean eglSwapBuffersWithDamageKHR(EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects);
EGLBINDING_API EGLBoolean eglSwapInterval(EGLDisplay dpy, EGLint interval);
EGLBINDING_API EGLBoolean eglTerminate(EGLDisplay dpy);
EGLBINDING_API EGLBoolean eglUnlockSurfaceKHR(EGLDisplay dpy, EGLSurface surface);
EGLBINDING_API EGLBoolean eglWaitClient();
EGLBINDING_API EGLBoolean eglWaitGL();
EGLBINDING_API EGLBoolean eglWaitNative(EGLint engine);
EGLBINDING_API EGLBoolean eglWaitSync(EGLDisplay dpy, EGLSync sync, EGLint flags);
EGLBINDING_API EGLint eglWaitSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags);

} // namespace egl
