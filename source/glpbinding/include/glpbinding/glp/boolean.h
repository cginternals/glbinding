#pragma once

#include <glpbinding/noglp.h>


namespace glp
{

enum class GLboolean : unsigned int
{
    GL_FALSE = 0,
    GL_TRUE = 1
};

// import booleans to namespace

static const GLboolean GL_FALSE = GLboolean::GL_FALSE;
static const GLboolean GL_TRUE = GLboolean::GL_TRUE;

} // namespace glp
