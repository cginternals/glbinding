
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLBoolean eglBindAPI(EGLenum api)
{
    return Binding::eglBindAPI(api);
}

EGLBoolean eglBindTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer)
{
    return Binding::eglBindTexImage(dpy, surface, buffer);
}




} // namespace egl
