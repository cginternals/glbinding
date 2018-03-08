
#pragma once


#include <glesbinding/glesbinding_api.h>


namespace glesbinding 
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
GLESBINDING_API ContextHandle getCurrentContext();


} // namespace glesbinding
