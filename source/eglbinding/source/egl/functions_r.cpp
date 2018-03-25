
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLBoolean eglReleaseTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer)
{
    return Binding::ReleaseTexImage(dpy, surface, buffer);
}

EGLBoolean eglReleaseThread()
{
    return Binding::ReleaseThread();
}

EGLBoolean eglResetStreamNV(EGLDisplay dpy, EGLStreamKHR stream)
{
    return Binding::ResetStreamNV(dpy, stream);
}




} // namespace egl
