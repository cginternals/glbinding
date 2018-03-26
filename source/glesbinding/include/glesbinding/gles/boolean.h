#pragma once


#include <glesbinding/Boolean32.h>

#include <glesbinding/glesbinding_api.h>
#include <glesbinding/glesbinding_features.h>
#include <glesbinding/nogles.h>


namespace gles
{


using GLboolean = glesbinding::Boolean32;


} // namespace gl


namespace gles
{

// import booleans to namespace

GLESBINDING_CONSTEXPR static const GLboolean GL_FALSE = GLboolean(0);
GLESBINDING_CONSTEXPR static const GLboolean GL_TRUE = GLboolean(1);


} // namespace gles
