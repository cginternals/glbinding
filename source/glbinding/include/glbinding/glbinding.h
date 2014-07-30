#pragma once

#include <glbinding/glbinding_api.h>
#include <glbinding/ContextId.h>

namespace glbinding {

GLBINDING_API void initialize();
GLBINDING_API void initialize(ContextId contextId, bool useContext = true, bool resolveFunctions = false);

GLBINDING_API void resolveFunctions();

GLBINDING_API void useCurrentContext();
GLBINDING_API void useContext(ContextId contextId);

GLBINDING_API void finalizeCurrentContext();
GLBINDING_API void finalizeContext(ContextId contextId);

} // namespace glbinding
