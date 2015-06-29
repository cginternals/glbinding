#pragma once

#include <glbinding/nogl.h>


namespace gl
{

enum class GLboolean : unsigned int
{
    GL_FALSE = 0,
    GL_TRUE = 1
};

// import booleans to namespace

static const GLboolean GL_FALSE = GLboolean::GL_FALSE;
static const GLboolean GL_TRUE = GLboolean::GL_TRUE;

} // namespace gl
