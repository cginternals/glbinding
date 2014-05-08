#include <glbinding/GetProcAddress.h>

extern "C" {

extern void (*glXGetProcAddress(const unsigned char *procname))( void );

}

namespace {

using GetProcAddressSignature = gl::ProcAddress(*)(const char *);

GetProcAddressSignature getProcAddress = reinterpret_cast<GetProcAddressSignature>(glXGetProcAddress);

}

namespace gl {

ProcAddress GetProcAddress(const char * name)
{
    return getProcAddress(name);
}

} // namespace gl
