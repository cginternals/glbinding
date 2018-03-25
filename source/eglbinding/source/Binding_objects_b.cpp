
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLBoolean, EGLenum> Binding::BindAPI("eglBindAPI");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint> Binding::BindTexImage("eglBindTexImage");



} // namespace eglbinding
