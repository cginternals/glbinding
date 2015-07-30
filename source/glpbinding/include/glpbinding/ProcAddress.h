#pragma once

#include <khrapi/ProcAddress.h>

#include <glpbinding/glpbinding_api.h>

namespace glpbinding 
{

GLPBINDING_API khrapi::ProcAddress getProcAddress(const char * name);

} // namespace glpbinding
