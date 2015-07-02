
#include <glesbinding/ProcAddress.h>

#include <EGL/egl.h>

namespace glesbinding
{

khrapi::ProcAddress getProcAddress(const char * name)
{
    return reinterpret_cast<khrapi::ProcAddress>(eglGetProcAddress(name));
}

} // namespace glesbinding
