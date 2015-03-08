#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/gl/types.h>


namespace gl
{

enum class GLboolean : unsigned char
{
    GL_FALSE = 0,
    GL_TRUE = 1
};

// import booleans to namespace

static const gl::GLboolean GL_FALSE = gl::GLboolean::GL_FALSE;
static const gl::GLboolean GL_TRUE = gl::GLboolean::GL_TRUE;

} // namespace gl
