
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


void eglSetBlobCacheFuncsANDROID(EGLDisplay dpy, EGLSetBlobFuncANDROID set, EGLGetBlobFuncANDROID get)
{
    return Binding::eglSetBlobCacheFuncsANDROID(dpy, set, get);
}

EGLBoolean eglSetDamageRegionKHR(EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects)
{
    return Binding::eglSetDamageRegionKHR(dpy, surface, rects, n_rects);
}

EGLBoolean eglSetStreamAttribKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLAttrib value)
{
    return Binding::eglSetStreamAttribKHR(dpy, stream, attribute, value);
}

EGLBoolean eglSetStreamMetadataNV(EGLDisplay dpy, EGLStreamKHR stream, EGLint n, EGLint offset, EGLint size, const void * data)
{
    return Binding::eglSetStreamMetadataNV(dpy, stream, n, offset, size, data);
}

EGLBoolean eglSignalSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode)
{
    return Binding::eglSignalSyncKHR(dpy, sync, mode);
}

EGLBoolean eglSignalSyncNV(EGLSyncNV sync, EGLenum mode)
{
    return Binding::eglSignalSyncNV(sync, mode);
}

EGLBoolean eglStreamAttribKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint value)
{
    return Binding::eglStreamAttribKHR(dpy, stream, attribute, value);
}

EGLBoolean eglStreamConsumerAcquireAttribKHR(EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib * attrib_list)
{
    return Binding::eglStreamConsumerAcquireAttribKHR(dpy, stream, attrib_list);
}

EGLBoolean eglStreamConsumerAcquireKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
    return Binding::eglStreamConsumerAcquireKHR(dpy, stream);
}

EGLBoolean eglStreamConsumerGLTextureExternalAttribsNV(EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib * attrib_list)
{
    return Binding::eglStreamConsumerGLTextureExternalAttribsNV(dpy, stream, attrib_list);
}

EGLBoolean eglStreamConsumerGLTextureExternalKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
    return Binding::eglStreamConsumerGLTextureExternalKHR(dpy, stream);
}

EGLBoolean eglStreamConsumerOutputEXT(EGLDisplay dpy, EGLStreamKHR stream, EGLOutputLayerEXT layer)
{
    return Binding::eglStreamConsumerOutputEXT(dpy, stream, layer);
}

EGLBoolean eglStreamConsumerReleaseAttribKHR(EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib * attrib_list)
{
    return Binding::eglStreamConsumerReleaseAttribKHR(dpy, stream, attrib_list);
}

EGLBoolean eglStreamConsumerReleaseKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
    return Binding::eglStreamConsumerReleaseKHR(dpy, stream);
}

EGLBoolean eglSurfaceAttrib(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value)
{
    return Binding::eglSurfaceAttrib(dpy, surface, attribute, value);
}

EGLBoolean eglSwapBuffers(EGLDisplay dpy, EGLSurface surface)
{
    return Binding::eglSwapBuffers(dpy, surface);
}

EGLBoolean eglSwapBuffersRegion2NOK(EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects)
{
    return Binding::eglSwapBuffersRegion2NOK(dpy, surface, numRects, rects);
}

EGLBoolean eglSwapBuffersRegionNOK(EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects)
{
    return Binding::eglSwapBuffersRegionNOK(dpy, surface, numRects, rects);
}

EGLBoolean eglSwapBuffersWithDamageEXT(EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects)
{
    return Binding::eglSwapBuffersWithDamageEXT(dpy, surface, rects, n_rects);
}

EGLBoolean eglSwapBuffersWithDamageKHR(EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects)
{
    return Binding::eglSwapBuffersWithDamageKHR(dpy, surface, rects, n_rects);
}

EGLBoolean eglSwapInterval(EGLDisplay dpy, EGLint interval)
{
    return Binding::eglSwapInterval(dpy, interval);
}




} // namespace egl
