#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl33ext
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl33ext

#include <glbinding/featured/bitfield33ext.h>
#include <glbinding/featured/enum33ext.h>
#include <glbinding/featured/functions33ext.h>
