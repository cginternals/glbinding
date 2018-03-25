#pragma once

#include <functional>

#include <khrbinding/Boolean8.h>

#include <glbinding/glbinding_api.h>
#include <glbinding/glbinding_features.h>
#include <glbinding/nogl.h>


namespace gl
{


using GLboolean = khrbinding::Boolean8;


} // namespace gl


namespace gl
{

// import booleans to namespace

GLBINDING_CONSTEXPR static const GLboolean GL_FALSE = GLboolean(0);
GLBINDING_CONSTEXPR static const GLboolean GL_TRUE = GLboolean(1);


} // namespace gl


namespace std
{


template<>
struct hash<gl::GLboolean>
{
    hash<char>::result_type operator()(const gl::GLboolean & boolean) const
    {
        return hash<gl::GLboolean::underlying_type>()(static_cast<gl::GLboolean::underlying_type>(boolean));
    }
};


} // namespace std
