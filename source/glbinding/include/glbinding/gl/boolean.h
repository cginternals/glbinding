
#pragma once


#include <glbinding/Boolean8.h>

#include <glbinding/glbinding_api.h>
#include <glbinding/glbinding_features.h>
#include <glbinding/nogl.h>


namespace gl
{


using GLboolean = glbinding::Boolean8;


// import booleans to namespace

GLBINDING_CONSTEXPR static const GLboolean GL_FALSE = GLboolean(0);
GLBINDING_CONSTEXPR static const GLboolean GL_TRUE = GLboolean(1);


} // namespace gl