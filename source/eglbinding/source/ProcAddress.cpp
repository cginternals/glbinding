
#include <eglbinding/ProcAddress.h>

#include <EGL/egl.h>

namespace eglbinding 
{

khrapi::ProcAddress getProcAddress(const char * name)
{
    return reinterpret_cast<khrapi::ProcAddress>(eglGetProcAddress(name));
}

} // namespace eglbinding
