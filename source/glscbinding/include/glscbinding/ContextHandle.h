
#pragma once


#include <glscbinding/glscbinding_api.h>


namespace glscbinding 
{


/**
*  @brief
*    The data type of a context handle
*/
using ContextHandle = long long;

/**
*  @brief
*    Queries the currently active context and returns a handle to it
*
*  @return
*    The handle to the currently active context
*/
GLSCBINDING_API ContextHandle getCurrentContext();


} // namespace glscbinding
