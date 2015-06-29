#pragma once

#include <eglbinding/eglbinding_api.h>

namespace eglbinding 
{

using ProcAddress = void(*)();

GLBINDING_API ProcAddress getProcAddress(const char * name);

} // namespace eglbinding
