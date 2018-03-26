#pragma once


#include <glscbinding/Boolean8.h>

#include <glscbinding/glscbinding_api.h>
#include <glscbinding/glscbinding_features.h>
#include <glscbinding/noglsc.h>


namespace glsc
{


using GLboolean = glscbinding::Boolean8;


} // namespace gl


namespace glsc
{

// import booleans to namespace

GLSCBINDING_CONSTEXPR static const GLboolean GL_FALSE = GLboolean(0);
GLSCBINDING_CONSTEXPR static const GLboolean GL_TRUE = GLboolean(1);


} // namespace glsc
