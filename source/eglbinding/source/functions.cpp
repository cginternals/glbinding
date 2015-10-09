#include <eglbinding/egl/functions.h>

#include <eglbinding/Binding.h>
#include <eglbinding/egl/typeintegrations.h>

#include <eglbinding/Value.h>


namespace egl
{

EGLboolean eglBindAPI(EGLenum api)
{
    return eglbinding::Binding::BindAPI(api);
}

EGLboolean eglBindTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer)
{
    return eglbinding::Binding::BindTexImage(dpy, surface, buffer);
}

EGLboolean eglChooseConfig(EGLDisplay dpy, const EGLint * attrib_list, EGLConfig * configs, EGLint config_size, EGLint * num_config)
{
    return eglbinding::Binding::ChooseConfig(dpy, attrib_list, configs, config_size, num_config);
}

EGLint eglClientWaitSync(EGLDisplay dpy, EGLSync sync, EGLint flags, EGLTime timeout)
{
    return eglbinding::Binding::ClientWaitSync(dpy, sync, flags, timeout);
}

EGLint eglClientWaitSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout)
{
    return eglbinding::Binding::ClientWaitSyncKHR(dpy, sync, flags, timeout);
}

EGLint eglClientWaitSyncNV(EGLSyncNV sync, EGLint flags, EGLTimeNV timeout)
{
    return eglbinding::Binding::ClientWaitSyncNV(sync, flags, timeout);
}

EGLboolean eglCopyBuffers(EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target)
{
    return eglbinding::Binding::CopyBuffers(dpy, surface, target);
}

EGLContext eglCreateContext(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint * attrib_list)
{
    return eglbinding::Binding::CreateContext(dpy, config, share_context, attrib_list);
}

EGLImageKHR eglCreateDRMImageMESA(EGLDisplay dpy, const EGLint * attrib_list)
{
    return eglbinding::Binding::CreateDRMImageMESA(dpy, attrib_list);
}

EGLSyncNV eglCreateFenceSyncNV(EGLDisplay dpy, EGLenum condition, const EGLint * attrib_list)
{
    return eglbinding::Binding::CreateFenceSyncNV(dpy, condition, attrib_list);
}

EGLImage eglCreateImage(EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLAttrib * attrib_list)
{
    return eglbinding::Binding::CreateImage(dpy, ctx, target, buffer, attrib_list);
}

EGLImageKHR eglCreateImageKHR(EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint * attrib_list)
{
    return eglbinding::Binding::CreateImageKHR(dpy, ctx, target, buffer, attrib_list);
}

EGLSurface eglCreatePbufferFromClientBuffer(EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint * attrib_list)
{
    return eglbinding::Binding::CreatePbufferFromClientBuffer(dpy, buftype, buffer, config, attrib_list);
}

EGLSurface eglCreatePbufferSurface(EGLDisplay dpy, EGLConfig config, const EGLint * attrib_list)
{
    return eglbinding::Binding::CreatePbufferSurface(dpy, config, attrib_list);
}

EGLSurface eglCreatePixmapSurface(EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint * attrib_list)
{
    return eglbinding::Binding::CreatePixmapSurface(dpy, config, pixmap, attrib_list);
}

EGLSurface eglCreatePixmapSurfaceHI(EGLDisplay dpy, EGLConfig config, EGLClientPixmapHI * pixmap)
{
    return eglbinding::Binding::CreatePixmapSurfaceHI(dpy, config, pixmap);
}

EGLSurface eglCreatePlatformPixmapSurface(EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLAttrib * attrib_list)
{
    return eglbinding::Binding::CreatePlatformPixmapSurface(dpy, config, native_pixmap, attrib_list);
}

EGLSurface eglCreatePlatformPixmapSurfaceEXT(EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLint * attrib_list)
{
    return eglbinding::Binding::CreatePlatformPixmapSurfaceEXT(dpy, config, native_pixmap, attrib_list);
}

EGLSurface eglCreatePlatformWindowSurface(EGLDisplay dpy, EGLConfig config, void * native_window, const EGLAttrib * attrib_list)
{
    return eglbinding::Binding::CreatePlatformWindowSurface(dpy, config, native_window, attrib_list);
}

EGLSurface eglCreatePlatformWindowSurfaceEXT(EGLDisplay dpy, EGLConfig config, void * native_window, const EGLint * attrib_list)
{
    return eglbinding::Binding::CreatePlatformWindowSurfaceEXT(dpy, config, native_window, attrib_list);
}

EGLStreamKHR eglCreateStreamFromFileDescriptorKHR(EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor)
{
    return eglbinding::Binding::CreateStreamFromFileDescriptorKHR(dpy, file_descriptor);
}

EGLStreamKHR eglCreateStreamKHR(EGLDisplay dpy, const EGLint * attrib_list)
{
    return eglbinding::Binding::CreateStreamKHR(dpy, attrib_list);
}

EGLSurface eglCreateStreamProducerSurfaceKHR(EGLDisplay dpy, EGLConfig config, EGLStreamKHR stream, const EGLint * attrib_list)
{
    return eglbinding::Binding::CreateStreamProducerSurfaceKHR(dpy, config, stream, attrib_list);
}

EGLSyncKHR eglCreateStreamSyncNV(EGLDisplay dpy, EGLStreamKHR stream, EGLenum type, const EGLint * attrib_list)
{
    return eglbinding::Binding::CreateStreamSyncNV(dpy, stream, type, attrib_list);
}

EGLSync eglCreateSync(EGLDisplay dpy, EGLenum type, const EGLAttrib * attrib_list)
{
    return eglbinding::Binding::CreateSync(dpy, type, attrib_list);
}

EGLSyncKHR eglCreateSync64KHR(EGLDisplay dpy, EGLenum type, const EGLAttribKHR * attrib_list)
{
    return eglbinding::Binding::CreateSync64KHR(dpy, type, attrib_list);
}

EGLSyncKHR eglCreateSyncKHR(EGLDisplay dpy, EGLenum type, const EGLint * attrib_list)
{
    return eglbinding::Binding::CreateSyncKHR(dpy, type, attrib_list);
}

EGLSurface eglCreateWindowSurface(EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint * attrib_list)
{
    return eglbinding::Binding::CreateWindowSurface(dpy, config, win, attrib_list);
}

EGLboolean eglDestroyContext(EGLDisplay dpy, EGLContext ctx)
{
    return eglbinding::Binding::DestroyContext(dpy, ctx);
}

EGLboolean eglDestroyImage(EGLDisplay dpy, EGLImage image)
{
    return eglbinding::Binding::DestroyImage(dpy, image);
}

EGLboolean eglDestroyImageKHR(EGLDisplay dpy, EGLImageKHR image)
{
    return eglbinding::Binding::DestroyImageKHR(dpy, image);
}

EGLboolean eglDestroyStreamKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
    return eglbinding::Binding::DestroyStreamKHR(dpy, stream);
}

EGLboolean eglDestroySurface(EGLDisplay dpy, EGLSurface surface)
{
    return eglbinding::Binding::DestroySurface(dpy, surface);
}

EGLboolean eglDestroySync(EGLDisplay dpy, EGLSync sync)
{
    return eglbinding::Binding::DestroySync(dpy, sync);
}

EGLboolean eglDestroySyncKHR(EGLDisplay dpy, EGLSyncKHR sync)
{
    return eglbinding::Binding::DestroySyncKHR(dpy, sync);
}

EGLboolean eglDestroySyncNV(EGLSyncNV sync)
{
    return eglbinding::Binding::DestroySyncNV(sync);
}

EGLint eglDupNativeFenceFDANDROID(EGLDisplay dpy, EGLSyncKHR sync)
{
    return eglbinding::Binding::DupNativeFenceFDANDROID(dpy, sync);
}

EGLboolean eglExportDMABUFImageMESA(EGLDisplay dpy, EGLImageKHR image, int * fds, EGLint * strides, EGLint * offsets)
{
    return eglbinding::Binding::ExportDMABUFImageMESA(dpy, image, fds, strides, offsets);
}

EGLboolean eglExportDMABUFImageQueryMESA(EGLDisplay dpy, EGLImageKHR image, int * fourcc, int * num_planes, EGLuint64KHR * modifiers)
{
    return eglbinding::Binding::ExportDMABUFImageQueryMESA(dpy, image, fourcc, num_planes, modifiers);
}

EGLboolean eglExportDRMImageMESA(EGLDisplay dpy, EGLImageKHR image, EGLint * name, EGLint * handle, EGLint * stride)
{
    return eglbinding::Binding::ExportDRMImageMESA(dpy, image, name, handle, stride);
}

EGLboolean eglFenceNV(EGLSyncNV sync)
{
    return eglbinding::Binding::FenceNV(sync);
}

EGLboolean eglGetConfigAttrib(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint * value)
{
    return eglbinding::Binding::GetConfigAttrib(dpy, config, attribute, value);
}

EGLboolean eglGetConfigs(EGLDisplay dpy, EGLConfig * configs, EGLint config_size, EGLint * num_config)
{
    return eglbinding::Binding::GetConfigs(dpy, configs, config_size, num_config);
}

EGLContext eglGetCurrentContext()
{
    return eglbinding::Binding::GetCurrentContext();
}

EGLDisplay eglGetCurrentDisplay()
{
    return eglbinding::Binding::GetCurrentDisplay();
}

EGLSurface eglGetCurrentSurface(EGLint readdraw)
{
    return eglbinding::Binding::GetCurrentSurface(readdraw);
}

EGLDisplay eglGetDisplay(EGLNativeDisplayType display_id)
{
    return eglbinding::Binding::GetDisplay(display_id);
}

EGLint eglGetError()
{
    return eglbinding::Binding::GetError();
}

EGLboolean eglGetOutputLayersEXT(EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputLayerEXT * layers, EGLint max_layers, EGLint * num_layers)
{
    return eglbinding::Binding::GetOutputLayersEXT(dpy, attrib_list, layers, max_layers, num_layers);
}

EGLboolean eglGetOutputPortsEXT(EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputPortEXT * ports, EGLint max_ports, EGLint * num_ports)
{
    return eglbinding::Binding::GetOutputPortsEXT(dpy, attrib_list, ports, max_ports, num_ports);
}

EGLDisplay eglGetPlatformDisplay(EGLenum platform, void * native_display, const EGLAttrib * attrib_list)
{
    return eglbinding::Binding::GetPlatformDisplay(platform, native_display, attrib_list);
}

EGLDisplay eglGetPlatformDisplayEXT(EGLenum platform, void * native_display, const EGLint * attrib_list)
{
    return eglbinding::Binding::GetPlatformDisplayEXT(platform, native_display, attrib_list);
}

__eglMustCastToProperFunctionPointerType eglGetProcAddress(const char * procname)
{
    return eglbinding::Binding::GetProcAddress(procname);
}

EGLNativeFileDescriptorKHR eglGetStreamFileDescriptorKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
    return eglbinding::Binding::GetStreamFileDescriptorKHR(dpy, stream);
}

EGLboolean eglGetSyncAttrib(EGLDisplay dpy, EGLSync sync, EGLint attribute, EGLAttrib * value)
{
    return eglbinding::Binding::GetSyncAttrib(dpy, sync, attribute, value);
}

EGLboolean eglGetSyncAttribKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint * value)
{
    return eglbinding::Binding::GetSyncAttribKHR(dpy, sync, attribute, value);
}

EGLboolean eglGetSyncAttribNV(EGLSyncNV sync, EGLint attribute, EGLint * value)
{
    return eglbinding::Binding::GetSyncAttribNV(sync, attribute, value);
}

EGLuint64NV eglGetSystemTimeFrequencyNV()
{
    return eglbinding::Binding::GetSystemTimeFrequencyNV();
}

EGLuint64NV eglGetSystemTimeNV()
{
    return eglbinding::Binding::GetSystemTimeNV();
}

EGLboolean eglInitialize(EGLDisplay dpy, EGLint * major, EGLint * minor)
{
    return eglbinding::Binding::Initialize(dpy, major, minor);
}

EGLboolean eglLockSurfaceKHR(EGLDisplay dpy, EGLSurface surface, const EGLint * attrib_list)
{
    return eglbinding::Binding::LockSurfaceKHR(dpy, surface, attrib_list);
}

EGLboolean eglMakeCurrent(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx)
{
    return eglbinding::Binding::MakeCurrent(dpy, draw, read, ctx);
}

EGLboolean eglOutputLayerAttribEXT(EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib value)
{
    return eglbinding::Binding::OutputLayerAttribEXT(dpy, layer, attribute, value);
}

EGLboolean eglOutputPortAttribEXT(EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib value)
{
    return eglbinding::Binding::OutputPortAttribEXT(dpy, port, attribute, value);
}

EGLboolean eglPostSubBufferNV(EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height)
{
    return eglbinding::Binding::PostSubBufferNV(dpy, surface, x, y, width, height);
}

EGLenum eglQueryAPI()
{
    return eglbinding::Binding::QueryAPI();
}

EGLboolean eglQueryContext(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint * value)
{
    return eglbinding::Binding::QueryContext(dpy, ctx, attribute, value);
}

EGLboolean eglQueryDeviceAttribEXT(EGLDeviceEXT device, EGLint attribute, EGLAttrib * value)
{
    return eglbinding::Binding::QueryDeviceAttribEXT(device, attribute, value);
}

const char * eglQueryDeviceStringEXT(EGLDeviceEXT device, EGLint name)
{
    return eglbinding::Binding::QueryDeviceStringEXT(device, name);
}

EGLboolean eglQueryDevicesEXT(EGLint max_devices, EGLDeviceEXT * devices, EGLint * num_devices)
{
    return eglbinding::Binding::QueryDevicesEXT(max_devices, devices, num_devices);
}

EGLboolean eglQueryDisplayAttribEXT(EGLDisplay dpy, EGLint attribute, EGLAttrib * value)
{
    return eglbinding::Binding::QueryDisplayAttribEXT(dpy, attribute, value);
}

EGLboolean eglQueryNativeDisplayNV(EGLDisplay dpy, EGLNativeDisplayType * display_id)
{
    return eglbinding::Binding::QueryNativeDisplayNV(dpy, display_id);
}

EGLboolean eglQueryNativePixmapNV(EGLDisplay dpy, EGLSurface surf, EGLNativePixmapType * pixmap)
{
    return eglbinding::Binding::QueryNativePixmapNV(dpy, surf, pixmap);
}

EGLboolean eglQueryNativeWindowNV(EGLDisplay dpy, EGLSurface surf, EGLNativeWindowType * window)
{
    return eglbinding::Binding::QueryNativeWindowNV(dpy, surf, window);
}

EGLboolean eglQueryOutputLayerAttribEXT(EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib * value)
{
    return eglbinding::Binding::QueryOutputLayerAttribEXT(dpy, layer, attribute, value);
}

const char * eglQueryOutputLayerStringEXT(EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint name)
{
    return eglbinding::Binding::QueryOutputLayerStringEXT(dpy, layer, name);
}

EGLboolean eglQueryOutputPortAttribEXT(EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib * value)
{
    return eglbinding::Binding::QueryOutputPortAttribEXT(dpy, port, attribute, value);
}

const char * eglQueryOutputPortStringEXT(EGLDisplay dpy, EGLOutputPortEXT port, EGLint name)
{
    return eglbinding::Binding::QueryOutputPortStringEXT(dpy, port, name);
}

EGLboolean eglQueryStreamKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint * value)
{
    return eglbinding::Binding::QueryStreamKHR(dpy, stream, attribute, value);
}

EGLboolean eglQueryStreamTimeKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR * value)
{
    return eglbinding::Binding::QueryStreamTimeKHR(dpy, stream, attribute, value);
}

EGLboolean eglQueryStreamu64KHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR * value)
{
    return eglbinding::Binding::QueryStreamu64KHR(dpy, stream, attribute, value);
}

const char * eglQueryString(EGLDisplay dpy, EGLint name)
{
    return eglbinding::Binding::QueryString(dpy, name);
}

EGLboolean eglQuerySurface(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint * value)
{
    return eglbinding::Binding::QuerySurface(dpy, surface, attribute, value);
}

EGLboolean eglQuerySurface64KHR(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLAttribKHR * value)
{
    return eglbinding::Binding::QuerySurface64KHR(dpy, surface, attribute, value);
}

EGLboolean eglQuerySurfacePointerANGLE(EGLDisplay dpy, EGLSurface surface, EGLint attribute, void ** value)
{
    return eglbinding::Binding::QuerySurfacePointerANGLE(dpy, surface, attribute, value);
}

EGLboolean eglReleaseTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer)
{
    return eglbinding::Binding::ReleaseTexImage(dpy, surface, buffer);
}

EGLboolean eglReleaseThread()
{
    return eglbinding::Binding::ReleaseThread();
}

void eglSetBlobCacheFuncsANDROID(EGLDisplay dpy, EGLSetBlobFuncANDROID set, EGLGetBlobFuncANDROID get)
{
    return eglbinding::Binding::SetBlobCacheFuncsANDROID(dpy, set, get);
}

EGLboolean eglSetDamageRegionKHR(EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects)
{
    return eglbinding::Binding::SetDamageRegionKHR(dpy, surface, rects, n_rects);
}

EGLboolean eglSignalSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode)
{
    return eglbinding::Binding::SignalSyncKHR(dpy, sync, mode);
}

EGLboolean eglSignalSyncNV(EGLSyncNV sync, EGLenum mode)
{
    return eglbinding::Binding::SignalSyncNV(sync, mode);
}

EGLboolean eglStreamAttribKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint value)
{
    return eglbinding::Binding::StreamAttribKHR(dpy, stream, attribute, value);
}

EGLboolean eglStreamConsumerAcquireKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
    return eglbinding::Binding::StreamConsumerAcquireKHR(dpy, stream);
}

EGLboolean eglStreamConsumerGLTextureExternalKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
    return eglbinding::Binding::StreamConsumerGLTextureExternalKHR(dpy, stream);
}

EGLboolean eglStreamConsumerOutputEXT(EGLDisplay dpy, EGLStreamKHR stream, EGLOutputLayerEXT layer)
{
    return eglbinding::Binding::StreamConsumerOutputEXT(dpy, stream, layer);
}

EGLboolean eglStreamConsumerReleaseKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
    return eglbinding::Binding::StreamConsumerReleaseKHR(dpy, stream);
}

EGLboolean eglSurfaceAttrib(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value)
{
    return eglbinding::Binding::SurfaceAttrib(dpy, surface, attribute, value);
}

EGLboolean eglSwapBuffers(EGLDisplay dpy, EGLSurface surface)
{
    return eglbinding::Binding::SwapBuffers(dpy, surface);
}

EGLboolean eglSwapBuffersRegion2NOK(EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects)
{
    return eglbinding::Binding::SwapBuffersRegion2NOK(dpy, surface, numRects, rects);
}

EGLboolean eglSwapBuffersRegionNOK(EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects)
{
    return eglbinding::Binding::SwapBuffersRegionNOK(dpy, surface, numRects, rects);
}

EGLboolean eglSwapBuffersWithDamageEXT(EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects)
{
    return eglbinding::Binding::SwapBuffersWithDamageEXT(dpy, surface, rects, n_rects);
}

EGLboolean eglSwapBuffersWithDamageKHR(EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects)
{
    return eglbinding::Binding::SwapBuffersWithDamageKHR(dpy, surface, rects, n_rects);
}

EGLboolean eglSwapInterval(EGLDisplay dpy, EGLint interval)
{
    return eglbinding::Binding::SwapInterval(dpy, interval);
}

EGLboolean eglTerminate(EGLDisplay dpy)
{
    return eglbinding::Binding::Terminate(dpy);
}

EGLboolean eglUnlockSurfaceKHR(EGLDisplay dpy, EGLSurface surface)
{
    return eglbinding::Binding::UnlockSurfaceKHR(dpy, surface);
}

EGLboolean eglWaitClient()
{
    return eglbinding::Binding::WaitClient();
}

EGLboolean eglWaitGL()
{
    return eglbinding::Binding::WaitGL();
}

EGLboolean eglWaitNative(EGLint engine)
{
    return eglbinding::Binding::WaitNative(engine);
}

EGLboolean eglWaitSync(EGLDisplay dpy, EGLSync sync, EGLint flags)
{
    return eglbinding::Binding::WaitSync(dpy, sync, flags);
}

EGLint eglWaitSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags)
{
    return eglbinding::Binding::WaitSyncKHR(dpy, sync, flags);
}


} // namespace egl
