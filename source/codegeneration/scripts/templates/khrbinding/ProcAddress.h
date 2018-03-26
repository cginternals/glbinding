
#pragma once


#include <functional>

#include <khrbinding/khrbinding_api.h>


namespace khrbinding
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


} // namespace khrbinding
