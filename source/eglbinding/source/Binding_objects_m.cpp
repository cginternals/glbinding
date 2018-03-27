
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLBoolean, EGLDisplay, EGLSurface, EGLSurface, EGLContext> Binding::MakeCurrent("eglMakeCurrent");



} // namespace eglbinding
