
#include "Meta_Maps.h"

#include <eglbinding/egl/typeintegrations.h>
#include <eglbinding/egl/boolean.h>


using namespace egl;

namespace eglbinding
{

const std::unordered_map<EGLboolean, std::string> Meta_StringsByBoolean
{
#ifdef STRINGS_BY_SYMBOLS
    { EGLboolean::EGL_FALSE, "EGL_FALSE" },
    { EGLboolean::EGL_TRUE, "EGL_TRUE" }
#endif
};

} // namespace eglbinding
