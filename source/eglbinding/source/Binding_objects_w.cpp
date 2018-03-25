
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLBoolean> Binding::eglWaitClient("eglWaitClient");
Function<Binding, EGLBoolean> Binding::eglWaitGL("eglWaitGL");
Function<Binding, EGLBoolean, EGLint> Binding::eglWaitNative("eglWaitNative");
Function<Binding, EGLBoolean, EGLDisplay, EGLSync, EGLint> Binding::eglWaitSync("eglWaitSync");
Function<Binding, EGLint, EGLDisplay, EGLSyncKHR, EGLint> Binding::eglWaitSyncKHR("eglWaitSyncKHR");



} // namespace eglbinding
