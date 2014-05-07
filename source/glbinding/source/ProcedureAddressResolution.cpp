#include "ProcedureAddressResolution.h"

extern "C" {

extern void (*glXGetProcAddress(const unsigned char *procname))( void );

}

namespace gl {

FunctionResolution getProcAddress = reinterpret_cast<FunctionResolution>(glXGetProcAddress);

} // namespace gl
