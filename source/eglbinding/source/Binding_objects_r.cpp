
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint> Binding::ReleaseTexImage("eglReleaseTexImage");
Function<EGLBoolean> Binding::ReleaseThread("eglReleaseThread");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::ResetStreamNV("eglResetStreamNV");



} // namespace eglbinding
