
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLBoolean, EGLDisplay, EGLint *, EGLint *> Binding::eglInitialize("eglInitialize");



} // namespace eglbinding
