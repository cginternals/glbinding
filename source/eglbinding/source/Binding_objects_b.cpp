
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLBoolean, EGLenum> Binding::eglBindAPI("eglBindAPI");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint> Binding::eglBindTexImage("eglBindTexImage");



} // namespace eglbinding
