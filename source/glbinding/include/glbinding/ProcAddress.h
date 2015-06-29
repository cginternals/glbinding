#pragma once

#include <khrapi/ProcAddress.h>

#include <glbinding/glbinding_api.h>

namespace glbinding 
{

GLBINDING_API khrapi::ProcAddress getProcAddress(const char * name);

} // namespace glbinding
