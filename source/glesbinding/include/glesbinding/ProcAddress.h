
#pragma once


#include <functional>

#include <glesbinding/glesbinding_api.h>


namespace glesbinding
{


/**
*  @brief
*    The generic pointer to an OpenGL function
*/
using ProcAddress = void(*)();

/**
*  @brief
*    The signature for the getProcAddress function
*/
using GetProcAddress = std::function<ProcAddress(const char*)>;


} // namespace glesbinding
