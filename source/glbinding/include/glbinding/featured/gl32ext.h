#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl32ext
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl32ext

#include <glbinding/featured/bitfield32ext.h>
#include <glbinding/featured/enum32ext.h>
#include <glbinding/featured/functions32ext.h>
