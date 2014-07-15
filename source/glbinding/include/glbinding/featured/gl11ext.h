#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl11ext
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl11ext

#include <glbinding/featured/bitfield11ext.h>
#include <glbinding/featured/enum11ext.h>
#include <glbinding/featured/functions11ext.h>
