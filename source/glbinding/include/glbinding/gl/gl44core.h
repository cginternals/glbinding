#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl44core
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl44core

#include <glbinding/gl/bitfield44core.h>
#include <glbinding/gl/enum44core.h>
#include <glbinding/gl/functions44core.h>
