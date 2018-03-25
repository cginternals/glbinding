
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLBoolean, EGLDisplay, EGLint *, EGLint *> Binding::Initialize("eglInitialize");



} // namespace eglbinding
