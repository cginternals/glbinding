
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLint eglDebugMessageControlKHR(EGLDEBUGPROCKHR callback, const EGLAttrib * attrib_list)
{
    return Binding::DebugMessageControlKHR(callback, attrib_list);
}

EGLBoolean eglDestroyContext(EGLDisplay dpy, EGLContext ctx)
{
    return Binding::DestroyContext(dpy, ctx);
}

EGLBoolean eglDestroyImage(EGLDisplay dpy, EGLImage image)
{
    return Binding::DestroyImage(dpy, image);
}

EGLBoolean eglDestroyImageKHR(EGLDisplay dpy, EGLImageKHR image)
{
    return Binding::DestroyImageKHR(dpy, image);
}

EGLBoolean eglDestroyStreamKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
    return Binding::DestroyStreamKHR(dpy, stream);
}

EGLBoolean eglDestroySurface(EGLDisplay dpy, EGLSurface surface)
{
    return Binding::DestroySurface(dpy, surface);
}

EGLBoolean eglDestroySync(EGLDisplay dpy, EGLSync sync)
{
    return Binding::DestroySync(dpy, sync);
}

EGLBoolean eglDestroySyncKHR(EGLDisplay dpy, EGLSyncKHR sync)
{
    return Binding::DestroySyncKHR(dpy, sync);
}

EGLBoolean eglDestroySyncNV(EGLSyncNV sync)
{
    return Binding::DestroySyncNV(sync);
}

EGLint eglDupNativeFenceFDANDROID(EGLDisplay dpy, EGLSyncKHR sync)
{
    return Binding::DupNativeFenceFDANDROID(dpy, sync);
}




} // namespace egl
