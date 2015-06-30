
#include <eglbinding/ContextHandle.h>

#ifdef WIN32
#include <windows.h>
#elif __APPLE__
#include <OpenGL/OpenGL.h>
#else
#include <GL/glx.h>
#endif

namespace eglbinding
{

ContextHandle getCurrentContext()
{
    return 0;
}

} // namespace eglbinding
