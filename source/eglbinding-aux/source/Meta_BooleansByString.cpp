
#include "Meta_Maps.h"

#include <eglbinding/egl/boolean.h>


using namespace egl;


namespace eglbinding { namespace aux
{


const std::unordered_map<std::string, EGLBoolean> Meta_BooleansByString =
{
    { "EGL_FALSE", egl::EGL_FALSE },
    { "EGL_TRUE", egl::EGL_TRUE }
};


} } // namespace eglbinding::aux
