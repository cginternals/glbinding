#pragma once

#include <glbinding/nogl.h>
#include <glbinding/types.h>


namespace gl10
{

using namespace gl;

enum class GLenum : unsigned int
{
	GL_VERSION_ES_CL_1_0 = 1,
    GL_VERSION_ES_CL_1_1 = 1,
    GL_VERSION_ES_CM_1_1 = 1
};

// import enums to namespace

static const GLenum GL_VERSION_ES_CL_1_0 = GLenum::GL_VERSION_ES_CL_1_0;
static const GLenum GL_VERSION_ES_CL_1_1 = GLenum::GL_VERSION_ES_CL_1_1;
static const GLenum GL_VERSION_ES_CM_1_1 = GLenum::GL_VERSION_ES_CM_1_1;

} // namespace gl10
