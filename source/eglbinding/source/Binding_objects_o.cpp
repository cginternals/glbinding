
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLBoolean, EGLDisplay, EGLOutputLayerEXT, EGLint, EGLAttrib> Binding::OutputLayerAttribEXT("eglOutputLayerAttribEXT");
Function<EGLBoolean, EGLDisplay, EGLOutputPortEXT, EGLint, EGLAttrib> Binding::OutputPortAttribEXT("eglOutputPortAttribEXT");



} // namespace eglbinding
