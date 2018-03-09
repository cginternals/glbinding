
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLint eglDebugMessageControlKHR(EGLDEBUGPROCKHR callback, const EGLAttrib * attrib_list)
{
    return Binding::eglDebugMessageControlKHR(callback, attrib_list);
}

EGLBoolean eglDestroyContext(EGLDisplay dpy, EGLContext ctx)
{
    return Binding::eglDestroyContext(dpy, ctx);
}

EGLBoolean eglDestroyImage(EGLDisplay dpy, EGLImage image)
{
    return Binding::eglDestroyImage(dpy, image);
}

EGLBoolean eglDestroyImageKHR(EGLDisplay dpy, EGLImageKHR image)
{
    return Binding::eglDestroyImageKHR(dpy, image);
}

EGLBoolean eglDestroyStreamKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
    return Binding::eglDestroyStreamKHR(dpy, stream);
}

EGLBoolean eglDestroySurface(EGLDisplay dpy, EGLSurface surface)
{
    return Binding::eglDestroySurface(dpy, surface);
}

EGLBoolean eglDestroySync(EGLDisplay dpy, EGLSync sync)
{
    return Binding::eglDestroySync(dpy, sync);
}

EGLBoolean eglDestroySyncKHR(EGLDisplay dpy, EGLSyncKHR sync)
{
    return Binding::eglDestroySyncKHR(dpy, sync);
}

EGLBoolean eglDestroySyncNV(EGLSyncNV sync)
{
    return Binding::eglDestroySyncNV(sync);
}

EGLint eglDupNativeFenceFDANDROID(EGLDisplay dpy, EGLSyncKHR sync)
{
    return Binding::eglDupNativeFenceFDANDROID(dpy, sync);
}




} // namespace egl
