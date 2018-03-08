
#pragma once


#include <glscbinding/glscbinding_api.h>


namespace glscbinding 
{


/**
*  @brief
*    The generic pointer to an OpenGL function
*/
using ProcAddress = void(*)();

/**
*  @brief
*    Loads the function pointer of an OpenGL function and returns it
*
*  @param[in] name
*    The name of the OpenGL function, including the 'gl' prefix
*
*  @return
*    The function pointer
*
*  @remarks
*    This function doesn't cache previously loaded function pointers
*/
GLSCBINDING_API ProcAddress getProcAddress(const char * name);


} // namespace glscbinding
