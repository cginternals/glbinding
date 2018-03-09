
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<EGLBoolean, EGLDisplay, EGLOutputLayerEXT, EGLint, EGLAttrib> Binding::eglOutputLayerAttribEXT("eglOutputLayerAttribEXT");
Function<EGLBoolean, EGLDisplay, EGLOutputPortEXT, EGLint, EGLAttrib> Binding::eglOutputPortAttribEXT("eglOutputPortAttribEXT");



} // namespace eglbinding
