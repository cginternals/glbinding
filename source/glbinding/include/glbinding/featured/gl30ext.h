#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl30ext
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl30ext

#include <glbinding/featured/bitfield30ext.h>
#include <glbinding/featured/enum30ext.h>
#include <glbinding/featured/functions30ext.h>
