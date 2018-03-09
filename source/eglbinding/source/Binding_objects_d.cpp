
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLint, EGLDEBUGPROCKHR, const EGLAttrib *> Binding::eglDebugMessageControlKHR("eglDebugMessageControlKHR");
Function<EGLBoolean, EGLDisplay, EGLContext> Binding::eglDestroyContext("eglDestroyContext");
Function<EGLBoolean, EGLDisplay, EGLImage> Binding::eglDestroyImage("eglDestroyImage");
Function<EGLBoolean, EGLDisplay, EGLImageKHR> Binding::eglDestroyImageKHR("eglDestroyImageKHR");
Function<EGLBoolean, EGLDisplay, EGLStreamKHR> Binding::eglDestroyStreamKHR("eglDestroyStreamKHR");
Function<EGLBoolean, EGLDisplay, EGLSurface> Binding::eglDestroySurface("eglDestroySurface");
Function<EGLBoolean, EGLDisplay, EGLSync> Binding::eglDestroySync("eglDestroySync");
Function<EGLBoolean, EGLDisplay, EGLSyncKHR> Binding::eglDestroySyncKHR("eglDestroySyncKHR");
Function<EGLBoolean, EGLSyncNV> Binding::eglDestroySyncNV("eglDestroySyncNV");
Function<EGLint, EGLDisplay, EGLSyncKHR> Binding::eglDupNativeFenceFDANDROID("eglDupNativeFenceFDANDROID");



} // namespace eglbinding
