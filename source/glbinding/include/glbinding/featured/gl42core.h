#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl42core
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl42core

#include <glbinding/featured/bitfield42core.h>
#include <glbinding/featured/enum42core.h>
#include <glbinding/featured/functions42core.h>
