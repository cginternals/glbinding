
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLint, EGLDEBUGPROCKHR, const EGLAttrib *> Binding::DebugMessageControlKHR("eglDebugMessageControlKHR");
Function<EGLBoolean, EGLDisplay, EGLContext> Binding::DestroyContext("eglDestroyContext");
Function<EGLBoolean, EGLDisplay, EGLImage> Binding::DestroyImage("eglDestroyImage");
Function<EGLBoolean, EGLDisplay, EGLImageKHR> Binding::DestroyImageKHR("eglDestroyImageKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::DestroyStreamKHR("eglDestroyStreamKHR");
Function<EGLBoolean, EGLDisplay, EGLSurface> Binding::DestroySurface("eglDestroySurface");
Function<EGLBoolean, EGLDisplay, EGLSync> Binding::DestroySync("eglDestroySync");
Function<EGLBoolean, EGLDisplay, EGLSyncKHR> Binding::DestroySyncKHR("eglDestroySyncKHR");
Function<EGLBoolean, EGLSyncNV> Binding::DestroySyncNV("eglDestroySyncNV");
Function<EGLint, EGLDisplay, EGLSyncKHR> Binding::DupNativeFenceFDANDROID("eglDupNativeFenceFDANDROID");



} // namespace eglbinding
