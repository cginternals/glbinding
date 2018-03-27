
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLBoolean, EGLenum> Binding::BindAPI("eglBindAPI");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint> Binding::BindTexImage("eglBindTexImage");



} // namespace eglbinding
