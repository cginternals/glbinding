#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl11
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl11

#include <glbinding/featured/bitfield11.h>
#include <glbinding/featured/bitfield11ext.h>
#include <glbinding/featured/enum11.h>
#include <glbinding/featured/enum11ext.h>
#include <glbinding/featured/functions11.h>
#include <glbinding/featured/functions11ext.h>
