
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLBoolean, EGLDisplay, EGLSurface, EGLint> Binding::eglReleaseTexImage("eglReleaseTexImage");
Function<EGLBoolean> Binding::eglReleaseThread("eglReleaseThread");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::eglResetStreamNV("eglResetStreamNV");



} // namespace eglbinding
