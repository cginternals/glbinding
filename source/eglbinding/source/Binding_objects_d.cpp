
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLint, EGLDEBUGPROCKHR, const EGLAttrib *> Binding::DebugMessageControlKHR("eglDebugMessageControlKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLContext> Binding::DestroyContext("eglDestroyContext");
Function<Binding, EGLBoolean, EGLDisplay, EGLImage> Binding::DestroyImage("eglDestroyImage");
Function<Binding, EGLBoolean, EGLDisplay, EGLImageKHR> Binding::DestroyImageKHR("eglDestroyImageKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::DestroyStreamKHR("eglDestroyStreamKHR");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface> Binding::DestroySurface("eglDestroySurface");
Function<Binding, EGLBoolean, EGLDisplay, EGLSync> Binding::DestroySync("eglDestroySync");
Function<Binding, EGLBoolean, EGLDisplay, EGLSyncKHR> Binding::DestroySyncKHR("eglDestroySyncKHR");
Function<Binding, EGLBoolean, EGLSyncNV> Binding::DestroySyncNV("eglDestroySyncNV");
Function<Binding, EGLint, EGLDisplay, EGLSyncKHR> Binding::DupNativeFenceFDANDROID("eglDupNativeFenceFDANDROID");



} // namespace eglbinding
