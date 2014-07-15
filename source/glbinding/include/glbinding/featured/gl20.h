#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl20
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl20

#include <glbinding/featured/bitfield20.h>
#include <glbinding/featured/bitfield20ext.h>
#include <glbinding/featured/enum20.h>
#include <glbinding/featured/enum20ext.h>
#include <glbinding/featured/functions20.h>
#include <glbinding/featured/functions20ext.h>
