
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLBoolean> Binding::WaitClient("eglWaitClient");
Function<EGLBoolean> Binding::WaitGL("eglWaitGL");
Function<EGLBoolean, EGLint> Binding::WaitNative("eglWaitNative");
Function<EGLBoolean, EGLDisplay, EGLSync, EGLint> Binding::WaitSync("eglWaitSync");
Function<EGLint, EGLDisplay, EGLSyncKHR, EGLint> Binding::WaitSyncKHR("eglWaitSyncKHR");



} // namespace eglbinding
