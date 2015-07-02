#pragma once

#include <eglbinding/eglbinding_api.h>

#include <khrapi/ProcAddress.h>

namespace eglbinding 
{

EGLBINDING_API khrapi::ProcAddress getProcAddress(const char * name);

} // namespace eglbinding
