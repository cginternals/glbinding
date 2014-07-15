#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl44core
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl44core

#include <glbinding/featured/bitfield44core.h>
#include <glbinding/featured/enum44core.h>
#include <glbinding/featured/functions44core.h>
