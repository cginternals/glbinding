#pragma once

#include <eglbinding/eglbinding_api.h>

namespace eglbinding 
{

using ProcAddress = void(*)();

EGLBINDING_API ProcAddress getProcAddress(const char * name);

} // namespace eglbinding
