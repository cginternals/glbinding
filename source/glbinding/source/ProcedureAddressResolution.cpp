#include <glbinding/ProcedureAddressResolution.h>

extern "C" {

extern void (*glXGetProcAddress(const unsigned char *procname))( void );

}

namespace glbinding {

FunctionPointer (*getProcAddress) (const char*) = reinterpret_cast<FunctionPointer (*) (const char*)>(glXGetProcAddress);

} // namespace glbinding
