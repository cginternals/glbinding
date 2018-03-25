
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLint eglLabelObjectKHR(EGLDisplay display, EGLenum objectType, EGLObjectKHR object, EGLLabelKHR label)
{
    return Binding::LabelObjectKHR(display, objectType, object, label);
}

EGLBoolean eglLockSurfaceKHR(EGLDisplay dpy, EGLSurface surface, const EGLint * attrib_list)
{
    return Binding::LockSurfaceKHR(dpy, surface, attrib_list);
}




} // namespace egl
