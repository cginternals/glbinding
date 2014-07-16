#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl42core
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl42core

#include <glbinding/gl/bitfield42core.h>
#include <glbinding/gl/enum42core.h>
#include <glbinding/gl/functions42core.h>
