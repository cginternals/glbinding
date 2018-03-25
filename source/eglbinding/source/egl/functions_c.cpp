
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLBoolean eglChooseConfig(EGLDisplay dpy, const EGLint * attrib_list, EGLConfig * configs, EGLint config_size, EGLint * num_config)
{
    return Binding::ChooseConfig(dpy, attrib_list, configs, config_size, num_config);
}

EGLint eglClientWaitSync(EGLDisplay dpy, EGLSync sync, EGLint flags, EGLTime timeout)
{
    return Binding::ClientWaitSync(dpy, sync, flags, timeout);
}

EGLint eglClientWaitSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout)
{
    return Binding::ClientWaitSyncKHR(dpy, sync, flags, timeout);
}

EGLint eglClientWaitSyncNV(EGLSyncNV sync, EGLint flags, EGLTimeNV timeout)
{
    return Binding::ClientWaitSyncNV(sync, flags, timeout);
}

EGLBoolean eglCompositorBindTexWindowEXT(EGLint external_win_id)
{
    return Binding::CompositorBindTexWindowEXT(external_win_id);
}

EGLBoolean eglCompositorSetContextAttributesEXT(EGLint external_ref_id, const EGLint * context_attributes, EGLint num_entries)
{
    return Binding::CompositorSetContextAttributesEXT(external_ref_id, context_attributes, num_entries);
}

EGLBoolean eglCompositorSetContextListEXT(const EGLint * external_ref_ids, EGLint num_entries)
{
    return Binding::CompositorSetContextListEXT(external_ref_ids, num_entries);
}

EGLBoolean eglCompositorSetSizeEXT(EGLint external_win_id, EGLint width, EGLint height)
{
    return Binding::CompositorSetSizeEXT(external_win_id, width, height);
}

EGLBoolean eglCompositorSetWindowAttributesEXT(EGLint external_win_id, const EGLint * window_attributes, EGLint num_entries)
{
    return Binding::CompositorSetWindowAttributesEXT(external_win_id, window_attributes, num_entries);
}

EGLBoolean eglCompositorSetWindowListEXT(EGLint external_ref_id, const EGLint * external_win_ids, EGLint num_entries)
{
    return Binding::CompositorSetWindowListEXT(external_ref_id, external_win_ids, num_entries);
}

EGLBoolean eglCompositorSwapPolicyEXT(EGLint external_win_id, EGLint policy)
{
    return Binding::CompositorSwapPolicyEXT(external_win_id, policy);
}

EGLBoolean eglCopyBuffers(EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target)
{
    return Binding::CopyBuffers(dpy, surface, target);
}

EGLContext eglCreateContext(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint * attrib_list)
{
    return Binding::CreateContext(dpy, config, share_context, attrib_list);
}

EGLImageKHR eglCreateDRMImageMESA(EGLDisplay dpy, const EGLint * attrib_list)
{
    return Binding::CreateDRMImageMESA(dpy, attrib_list);
}

EGLSyncNV eglCreateFenceSyncNV(EGLDisplay dpy, EGLenum condition, const EGLint * attrib_list)
{
    return Binding::CreateFenceSyncNV(dpy, condition, attrib_list);
}

EGLImage eglCreateImage(EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLAttrib * attrib_list)
{
    return Binding::CreateImage(dpy, ctx, target, buffer, attrib_list);
}

EGLImageKHR eglCreateImageKHR(EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint * attrib_list)
{
    return Binding::CreateImageKHR(dpy, ctx, target, buffer, attrib_list);
}

EGLClientBuffer eglCreateNativeClientBufferANDROID(const EGLint * attrib_list)
{
    return Binding::CreateNativeClientBufferANDROID(attrib_list);
}

EGLSurface eglCreatePbufferFromClientBuffer(EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint * attrib_list)
{
    return Binding::CreatePbufferFromClientBuffer(dpy, buftype, buffer, config, attrib_list);
}

EGLSurface eglCreatePbufferSurface(EGLDisplay dpy, EGLConfig config, const EGLint * attrib_list)
{
    return Binding::CreatePbufferSurface(dpy, config, attrib_list);
}

EGLSurface eglCreatePixmapSurface(EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint * attrib_list)
{
    return Binding::CreatePixmapSurface(dpy, config, pixmap, attrib_list);
}

EGLSurface eglCreatePixmapSurfaceHI(EGLDisplay dpy, EGLConfig config, EGLClientPixmapHI * pixmap)
{
    return Binding::CreatePixmapSurfaceHI(dpy, config, pixmap);
}

EGLSurface eglCreatePlatformPixmapSurface(EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLAttrib * attrib_list)
{
    return Binding::CreatePlatformPixmapSurface(dpy, config, native_pixmap, attrib_list);
}

EGLSurface eglCreatePlatformPixmapSurfaceEXT(EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLint * attrib_list)
{
    return Binding::CreatePlatformPixmapSurfaceEXT(dpy, config, native_pixmap, attrib_list);
}

EGLSurface eglCreatePlatformWindowSurface(EGLDisplay dpy, EGLConfig config, void * native_window, const EGLAttrib * attrib_list)
{
    return Binding::CreatePlatformWindowSurface(dpy, config, native_window, attrib_list);
}

EGLSurface eglCreatePlatformWindowSurfaceEXT(EGLDisplay dpy, EGLConfig config, void * native_window, const EGLint * attrib_list)
{
    return Binding::CreatePlatformWindowSurfaceEXT(dpy, config, native_window, attrib_list);
}

EGLStreamKHR eglCreateStreamAttribKHR(EGLDisplay dpy, const EGLAttrib * attrib_list)
{
    return Binding::CreateStreamAttribKHR(dpy, attrib_list);
}

EGLStreamKHR eglCreateStreamFromFileDescriptorKHR(EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor)
{
    return Binding::CreateStreamFromFileDescriptorKHR(dpy, file_descriptor);
}

EGLStreamKHR eglCreateStreamKHR(EGLDisplay dpy, const EGLint * attrib_list)
{
    return Binding::CreateStreamKHR(dpy, attrib_list);
}

EGLSurface eglCreateStreamProducerSurfaceKHR(EGLDisplay dpy, EGLConfig config, EGLStreamKHR stream, const EGLint * attrib_list)
{
    return Binding::CreateStreamProducerSurfaceKHR(dpy, config, stream, attrib_list);
}

EGLSyncKHR eglCreateStreamSyncNV(EGLDisplay dpy, EGLStreamKHR stream, EGLenum type, const EGLint * attrib_list)
{
    return Binding::CreateStreamSyncNV(dpy, stream, type, attrib_list);
}

EGLSync eglCreateSync(EGLDisplay dpy, EGLenum type, const EGLAttrib * attrib_list)
{
    return Binding::CreateSync(dpy, type, attrib_list);
}

EGLSyncKHR eglCreateSync64KHR(EGLDisplay dpy, EGLenum type, const EGLAttribKHR * attrib_list)
{
    return Binding::CreateSync64KHR(dpy, type, attrib_list);
}

EGLSyncKHR eglCreateSyncKHR(EGLDisplay dpy, EGLenum type, const EGLint * attrib_list)
{
    return Binding::CreateSyncKHR(dpy, type, attrib_list);
}

EGLSurface eglCreateWindowSurface(EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint * attrib_list)
{
    return Binding::CreateWindowSurface(dpy, config, win, attrib_list);
}




} // namespace egl
