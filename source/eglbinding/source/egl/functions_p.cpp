
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLBoolean eglPostSubBufferNV(EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height)
{
    return Binding::eglPostSubBufferNV(dpy, surface, x, y, width, height);
}

EGLBoolean eglPresentationTimeANDROID(EGLDisplay dpy, EGLSurface surface, EGLnsecsANDROID time)
{
    return Binding::eglPresentationTimeANDROID(dpy, surface, time);
}




} // namespace egl
