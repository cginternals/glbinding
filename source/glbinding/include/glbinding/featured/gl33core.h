#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl33core
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl33core

#include <glbinding/featured/bitfield33core.h>
#include <glbinding/featured/enum33core.h>
#include <glbinding/featured/functions33core.h>
