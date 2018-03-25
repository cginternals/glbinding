
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint, EGLint, EGLint, EGLint> Binding::eglPostSubBufferNV("eglPostSubBufferNV");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLnsecsANDROID> Binding::eglPresentationTimeANDROID("eglPresentationTimeANDROID");



} // namespace eglbinding
