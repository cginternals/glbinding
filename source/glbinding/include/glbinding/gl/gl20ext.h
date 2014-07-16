#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl20ext
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl20ext

#include <glbinding/gl/bitfield20ext.h>
#include <glbinding/gl/enum20ext.h>
#include <glbinding/gl/functions20ext.h>
