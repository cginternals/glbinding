
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLBoolean eglReleaseTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer)
{
    return Binding::eglReleaseTexImage(dpy, surface, buffer);
}

EGLBoolean eglReleaseThread()
{
    return Binding::eglReleaseThread();
}

EGLBoolean eglResetStreamNV(EGLDisplay dpy, EGLStreamKHR stream)
{
    return Binding::eglResetStreamNV(dpy, stream);
}




} // namespace egl
