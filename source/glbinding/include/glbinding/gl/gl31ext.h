#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl31ext
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl31ext

#include <glbinding/gl/bitfield31ext.h>
#include <glbinding/gl/enum31ext.h>
#include <glbinding/gl/functions31ext.h>
