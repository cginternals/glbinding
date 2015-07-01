#pragma once

#include <glesbinding/nogles.h>


namespace gles
{

enum class GLESboolean : unsigned int
{
    GL_FALSE = 0,
    GL_TRUE = 1
};

// import booleans to namespace

static const GLboolean GL_FALSE = GLboolean::GL_FALSE;
static const GLboolean GL_TRUE = GLboolean::GL_TRUE;

} // namespace gles
