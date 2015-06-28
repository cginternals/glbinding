
#include "Meta_Maps.h"

#include <eglbinding/egl/boolean.h>


using namespace egl; // ToDo: multiple APIs?

namespace eglbinding
{

const std::unordered_map<std::string, EGLboolean> Meta_BooleansByString
{
#ifdef SYMBOLS_BY_STRINGS
    { "EGL_FALSE", EGLboolean::EGL_FALSE },
    { "EGL_TRUE", EGLboolean::EGL_TRUE }
#endif
};

} // namespace eglbinding
