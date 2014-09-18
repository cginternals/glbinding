
#include <glbinding/ContextHandle.h>

#ifdef WIN32
#include <windows.h>
#elif __APPLE__
#include <OpenGL/OpenGL.h>
#else
#include <GL/glx.h>
#endif

namespace glbinding
{

ContextHandle getCurrentContext()
{
    ContextHandle id = 0;

#ifdef WIN32
    const HGLRC context = wglGetCurrentContext();
#elif __APPLE__
    CGLContextObj context = CGLGetCurrentContext();
#else
    const GLXContext context = glXGetCurrentContext();
#endif
    id = reinterpret_cast<ContextHandle>(context);

    return id;
}

} // namespace glbinding
