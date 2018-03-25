
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLint, EGLDisplay, EGLenum, EGLObjectKHR, EGLLabelKHR> Binding::LabelObjectKHR("eglLabelObjectKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, const EGLint *> Binding::LockSurfaceKHR("eglLockSurfaceKHR");



} // namespace eglbinding
