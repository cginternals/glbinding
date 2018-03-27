
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLint, EGLDisplay, EGLenum, EGLObjectKHR, EGLLabelKHR> Binding::LabelObjectKHR("eglLabelObjectKHR");
Function<EGLBoolean, EGLDisplay, EGLSurface, const EGLint *> Binding::LockSurfaceKHR("eglLockSurfaceKHR");



} // namespace eglbinding
