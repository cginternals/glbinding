#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl14ext
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl14ext

#include <glbinding/featured/bitfield14ext.h>
#include <glbinding/featured/enum14ext.h>
#include <glbinding/featured/functions14ext.h>
