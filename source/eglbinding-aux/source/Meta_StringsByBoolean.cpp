
#include "Meta_Maps.h"

#include <eglbinding/egl/boolean.h>


using namespace egl;


namespace eglbinding { namespace aux
{


const std::unordered_map<EGLBoolean, std::string> Meta_StringsByBoolean =
{
    { egl::EGL_FALSE, "EGL_FALSE" },
    { egl::EGL_TRUE, "EGL_TRUE" }
};


} } // namespace eglbinding::aux
