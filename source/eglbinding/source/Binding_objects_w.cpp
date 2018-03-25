
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLBoolean> Binding::WaitClient("eglWaitClient");
Function<Binding, EGLBoolean> Binding::WaitGL("eglWaitGL");
Function<Binding, EGLBoolean, EGLint> Binding::WaitNative("eglWaitNative");
Function<Binding, EGLBoolean, EGLDisplay, EGLSync, EGLint> Binding::WaitSync("eglWaitSync");
Function<Binding, EGLint, EGLDisplay, EGLSyncKHR, EGLint> Binding::WaitSyncKHR("eglWaitSyncKHR");



} // namespace eglbinding
