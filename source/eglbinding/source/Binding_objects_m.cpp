
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLSurface, EGLContext> Binding::eglMakeCurrent("eglMakeCurrent");



} // namespace eglbinding
