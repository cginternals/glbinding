
#include <glbinding/ContextHandle.h>

#ifdef SYSTEM_WINDOWS
#include <windows.h>
#elif SYSTEM_DARWIN
#include <OpenGL/OpenGL.h>
#else
#include <GL/glx.h>
#endif


namespace glbinding
{


ContextHandle getCurrentContext()
{
    auto id = ContextHandle{0};

#ifdef SYSTEM_WINDOWS
    const auto context = wglGetCurrentContext();
#elif SYSTEM_DARWIN
    const auto context = CGLGetCurrentContext();
#else
    const auto context = glXGetCurrentContext();
#endif
    id = reinterpret_cast<ContextHandle>(context);

    return id;
}


} // namespace glbinding
