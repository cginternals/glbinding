
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLint, EGLDEBUGPROCKHR, const EGLAttrib *> Binding::eglDebugMessageControlKHR("eglDebugMessageControlKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLContext> Binding::eglDestroyContext("eglDestroyContext");
Function<Binding, EGLBoolean, EGLDisplay, EGLImage> Binding::eglDestroyImage("eglDestroyImage");
Function<Binding, EGLBoolean, EGLDisplay, EGLImageKHR> Binding::eglDestroyImageKHR("eglDestroyImageKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::eglDestroyStreamKHR("eglDestroyStreamKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface> Binding::eglDestroySurface("eglDestroySurface");
Function<Binding, EGLBoolean, EGLDisplay, EGLSync> Binding::eglDestroySync("eglDestroySync");
Function<Binding, EGLBoolean, EGLDisplay, EGLSyncKHR> Binding::eglDestroySyncKHR("eglDestroySyncKHR");
Function<Binding, EGLBoolean, EGLSyncNV> Binding::eglDestroySyncNV("eglDestroySyncNV");
Function<Binding, EGLint, EGLDisplay, EGLSyncKHR> Binding::eglDupNativeFenceFDANDROID("eglDupNativeFenceFDANDROID");



} // namespace eglbinding
