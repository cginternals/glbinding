
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint> Binding::ReleaseTexImage("eglReleaseTexImage");
Function<Binding, EGLBoolean> Binding::ReleaseThread("eglReleaseThread");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::ResetStreamNV("eglResetStreamNV");



} // namespace eglbinding
