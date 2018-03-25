
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLBoolean eglBindAPI(EGLenum api)
{
    return Binding::BindAPI(api);
}

EGLBoolean eglBindTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer)
{
    return Binding::BindTexImage(dpy, surface, buffer);
}




} // namespace egl
