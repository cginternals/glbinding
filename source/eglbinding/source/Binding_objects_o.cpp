
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLBoolean, EGLDisplay, EGLOutputLayerEXT, EGLint, EGLAttrib> Binding::OutputLayerAttribEXT("eglOutputLayerAttribEXT");
Function<Binding, EGLBoolean, EGLDisplay, EGLOutputPortEXT, EGLint, EGLAttrib> Binding::OutputPortAttribEXT("eglOutputPortAttribEXT");



} // namespace eglbinding
