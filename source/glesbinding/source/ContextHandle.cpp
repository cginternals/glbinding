
#include <glesbinding/ContextHandle.h>

#include <EGL/egl.h>

namespace glesbinding
{

ContextHandle getCurrentContext()
{
    auto id = ContextHandle{0};

    id = reinterpret_cast<ContextHandle>(eglGetCurrentContext());

    return id;
}

} // namespace glesbinding
