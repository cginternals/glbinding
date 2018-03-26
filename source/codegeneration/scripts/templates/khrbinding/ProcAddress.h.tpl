
#pragma once


#include <functional>

#include <{{binding}}/{{binding}}_api.h>


namespace {{binding}}
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


} // namespace {{binding}}
