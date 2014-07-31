#pragma once

#include <glbinding/glbinding_api.h>

namespace glbinding 
{

using ContextId = long long;

GLBINDING_API ContextId getCurrentContextId();

} // namespace glbinding
