
#pragma once


#include <glbinding/glbinding_api.h>

#include <glbinding/ProcAddress.h>


namespace glbinding
{


/**
*  @brief
*    Default getProcAddress implementation using libdl (Unix) and LoadLibrary (Windows).
*
*  @param[in] name
*    The name of the OpenGL function
*
*  @return
*    The resolved function pointer
*
*  @remark
*    Using glbinding::getProcAddress is provided for convenience only. Please don't use this in new code.
*    Instead, use an external function resolution callback, e.g.,
*     * wglGetProcAddress
*     * glxGetProcAddress
*     * glfwGetProcAddress
*     * QOpenGlContext::getProcAddress
*     * reinterpret_cast<glbinding::ProcAddress(*)(const char*)>(SDL_GL_GetProcAddress)
*/
GLBINDING_API ProcAddress getProcAddress(const char * name);


} // namespace glbinding
