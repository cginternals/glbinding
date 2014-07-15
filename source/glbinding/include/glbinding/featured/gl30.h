#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl30
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl30

#include <glbinding/featured/bitfield30.h>
#include <glbinding/featured/bitfield30ext.h>
#include <glbinding/featured/enum30.h>
#include <glbinding/featured/enum30ext.h>
#include <glbinding/featured/functions30.h>
#include <glbinding/featured/functions30ext.h>
