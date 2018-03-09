
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLBoolean> Binding::eglWaitClient("eglWaitClient");
Function<EGLBoolean> Binding::eglWaitGL("eglWaitGL");
Function<EGLBoolean, EGLint> Binding::eglWaitNative("eglWaitNative");
Function<EGLBoolean, EGLDisplay, EGLSync, EGLint> Binding::eglWaitSync("eglWaitSync");
Function<EGLint, EGLDisplay, EGLSyncKHR, EGLint> Binding::eglWaitSyncKHR("eglWaitSyncKHR");



} // namespace eglbinding
