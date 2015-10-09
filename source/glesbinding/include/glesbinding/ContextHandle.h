#pragma once

#include <glesbinding/glesbinding_api.h>

namespace glesbinding
{

using ContextHandle = long long;

GLESBINDING_API ContextHandle getCurrentContext();

} // namespace glesbinding
