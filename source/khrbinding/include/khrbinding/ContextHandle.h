
#pragma once


#include <khrbinding/khrbinding_api.h>


namespace khrbinding 
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
KHRBINDING_API ContextHandle getCurrentContext();


} // namespace khrbinding
