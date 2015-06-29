
#include <eglbinding/ProcAddress.h>

#include <EGL/egl.h>

namespace eglbinding 
{

ProcAddress getProcAddress(const char * name)
{
    return reinterpret_cast<ProcAddress>(eglGetProcAddress(name));
}

} // namespace eglbinding
