#pragma once

#include <khrapi/ProcAddress.h>

#include <glesbinding/glesbinding_api.h>

namespace glesbinding
{

GLESBINDING_API khrapi::ProcAddress getProcAddress(const char * name);

} // namespace glesbinding
