#pragma once

#include <glbinding/glbinding_api.h>

namespace gl 
{

using ProcAddress = void(*)();

GLBINDING_API ProcAddress GetProcAddress(const char * name);

} // namespace gl
