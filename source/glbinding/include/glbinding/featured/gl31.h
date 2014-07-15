#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl31
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl31

#include <glbinding/featured/bitfield31.h>
#include <glbinding/featured/bitfield31ext.h>
#include <glbinding/featured/enum31.h>
#include <glbinding/featured/enum31ext.h>
#include <glbinding/featured/functions31.h>
#include <glbinding/featured/functions31ext.h>
