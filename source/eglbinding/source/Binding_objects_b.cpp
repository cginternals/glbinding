
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLBoolean, EGLenum> Binding::eglBindAPI("eglBindAPI");
Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint> Binding::eglBindTexImage("eglBindTexImage");



} // namespace eglbinding
