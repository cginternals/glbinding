#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl41core
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl41core

#include <glbinding/gl/bitfield41core.h>
#include <glbinding/gl/enum41core.h>
#include <glbinding/gl/functions41core.h>
