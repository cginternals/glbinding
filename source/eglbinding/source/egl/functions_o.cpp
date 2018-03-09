
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLBoolean eglOutputLayerAttribEXT(EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib value)
{
    return Binding::eglOutputLayerAttribEXT(dpy, layer, attribute, value);
}

EGLBoolean eglOutputPortAttribEXT(EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib value)
{
    return Binding::eglOutputPortAttribEXT(dpy, port, attribute, value);
}




} // namespace egl
