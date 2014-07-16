#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl33core
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl33core

#include <glbinding/gl/bitfield33core.h>
#include <glbinding/gl/enum33core.h>
#include <glbinding/gl/functions33core.h>
