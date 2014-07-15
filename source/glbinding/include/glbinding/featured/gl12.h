#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl12
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl12

#include <glbinding/featured/bitfield12.h>
#include <glbinding/featured/bitfield12ext.h>
#include <glbinding/featured/enum12.h>
#include <glbinding/featured/enum12ext.h>
#include <glbinding/featured/functions12.h>
#include <glbinding/featured/functions12ext.h>
