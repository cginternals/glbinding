#pragma once

#include <glpbinding/glpbinding_api.h>

namespace glpbinding 
{

using ContextHandle = long long;

GLPBINDING_API ContextHandle getCurrentContext();

} // namespace glpbinding
