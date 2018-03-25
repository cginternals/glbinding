
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLBoolean eglTerminate(EGLDisplay dpy)
{
    return Binding::Terminate(dpy);
}




} // namespace egl
