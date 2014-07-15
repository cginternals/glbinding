#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl15
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl15

#include <glbinding/featured/bitfield15.h>
#include <glbinding/featured/bitfield15ext.h>
#include <glbinding/featured/enum15.h>
#include <glbinding/featured/enum15ext.h>
#include <glbinding/featured/functions15.h>
#include <glbinding/featured/functions15ext.h>
