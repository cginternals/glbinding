
#include <glbinding/ContextId.h>

#ifdef WIN32
#include <windows.h>
#elif __APPLE__
#include <OpenGL/OpenGL.h>
#else
#include <GL/glxew.h>
#endif

namespace glbinding
{

ContextId getCurrentContextId()
{
    ContextId id = 0;

#ifdef WIN32
    const HGLRC context = wglGetCurrentContext();
    id = reinterpret_cast<ContextId>(context);
#elif __APPLE__
    CGLContextObj contextObj = CGLGetCurrentContext();
    id = reinterpret_cast<ContextId>(contextObj);
#else
    const GLXContext context = glXGetCurrentContext();
    id = reinterpret_cast<ContextId>(context);
#endif

    return id;
}

} // namespace glbinding
