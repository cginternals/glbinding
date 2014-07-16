#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl42ext
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl42ext

#include <glbinding/gl/bitfield42ext.h>
#include <glbinding/gl/enum42ext.h>
#include <glbinding/gl/functions42ext.h>
