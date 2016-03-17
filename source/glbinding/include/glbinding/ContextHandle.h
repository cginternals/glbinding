
#pragma once

#include <glbinding/glbinding_api.h>


namespace glbinding 
{

/**
 * @brief
 *   The data type of a context handle.
 */
using ContextHandle = long long;

/**
 * @brief
 *   Queries the currently active context and returns a handle to it.
 *
 * @return
 *   The handle to the currently active context.
 */
GLBINDING_API ContextHandle getCurrentContext();


} // namespace glbinding
