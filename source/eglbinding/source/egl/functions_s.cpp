
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


void eglSetBlobCacheFuncsANDROID(EGLDisplay dpy, EGLSetBlobFuncANDROID set, EGLGetBlobFuncANDROID get)
{
    return Binding::SetBlobCacheFuncsANDROID(dpy, set, get);
}

EGLBoolean eglSetDamageRegionKHR(EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects)
{
    return Binding::SetDamageRegionKHR(dpy, surface, rects, n_rects);
}

EGLBoolean eglSetStreamAttribKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLAttrib value)
{
    return Binding::SetStreamAttribKHR(dpy, stream, attribute, value);
}

EGLBoolean eglSetStreamMetadataNV(EGLDisplay dpy, EGLStreamKHR stream, EGLint n, EGLint offset, EGLint size, const void * data)
{
    return Binding::SetStreamMetadataNV(dpy, stream, n, offset, size, data);
}

EGLBoolean eglSignalSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode)
{
    return Binding::SignalSyncKHR(dpy, sync, mode);
}

EGLBoolean eglSignalSyncNV(EGLSyncNV sync, EGLenum mode)
{
    return Binding::SignalSyncNV(sync, mode);
}

EGLBoolean eglStreamAttribKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint value)
{
    return Binding::StreamAttribKHR(dpy, stream, attribute, value);
}

EGLBoolean eglStreamConsumerAcquireAttribKHR(EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib * attrib_list)
{
    return Binding::StreamConsumerAcquireAttribKHR(dpy, stream, attrib_list);
}

EGLBoolean eglStreamConsumerAcquireKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
    return Binding::StreamConsumerAcquireKHR(dpy, stream);
}

EGLBoolean eglStreamConsumerGLTextureExternalAttribsNV(EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib * attrib_list)
{
    return Binding::StreamConsumerGLTextureExternalAttribsNV(dpy, stream, attrib_list);
}

EGLBoolean eglStreamConsumerGLTextureExternalKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
    return Binding::StreamConsumerGLTextureExternalKHR(dpy, stream);
}

EGLBoolean eglStreamConsumerOutputEXT(EGLDisplay dpy, EGLStreamKHR stream, EGLOutputLayerEXT layer)
{
    return Binding::StreamConsumerOutputEXT(dpy, stream, layer);
}

EGLBoolean eglStreamConsumerReleaseAttribKHR(EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib * attrib_list)
{
    return Binding::StreamConsumerReleaseAttribKHR(dpy, stream, attrib_list);
}

EGLBoolean eglStreamConsumerReleaseKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
    return Binding::StreamConsumerReleaseKHR(dpy, stream);
}

EGLBoolean eglSurfaceAttrib(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value)
{
    return Binding::SurfaceAttrib(dpy, surface, attribute, value);
}

EGLBoolean eglSwapBuffers(EGLDisplay dpy, EGLSurface surface)
{
    return Binding::SwapBuffers(dpy, surface);
}

EGLBoolean eglSwapBuffersRegion2NOK(EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects)
{
    return Binding::SwapBuffersRegion2NOK(dpy, surface, numRects, rects);
}

EGLBoolean eglSwapBuffersRegionNOK(EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects)
{
    return Binding::SwapBuffersRegionNOK(dpy, surface, numRects, rects);
}

EGLBoolean eglSwapBuffersWithDamageEXT(EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects)
{
    return Binding::SwapBuffersWithDamageEXT(dpy, surface, rects, n_rects);
}

EGLBoolean eglSwapBuffersWithDamageKHR(EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects)
{
    return Binding::SwapBuffersWithDamageKHR(dpy, surface, rects, n_rects);
}

EGLBoolean eglSwapInterval(EGLDisplay dpy, EGLint interval)
{
    return Binding::SwapInterval(dpy, interval);
}




} // namespace egl
