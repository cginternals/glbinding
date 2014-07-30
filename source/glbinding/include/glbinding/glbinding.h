#pragma once

#include <glbinding/glbinding_api.h>
#include <glbinding/ContextId.h>

namespace glbinding {

GLBINDING_API void initialize();

GLBINDING_API void initialize(ContextId contextId, bool use = true);

GLBINDING_API void useContext(ContextId contextId);
//GLBINDING_API void releaseContext();

} // namespace glbinding
