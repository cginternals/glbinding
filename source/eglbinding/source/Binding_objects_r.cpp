
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint> Binding::eglReleaseTexImage("eglReleaseTexImage");
Function<Binding, EGLBoolean> Binding::eglReleaseThread("eglReleaseThread");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::eglResetStreamNV("eglResetStreamNV");



} // namespace eglbinding
