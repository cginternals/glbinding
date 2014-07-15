#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl10
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl10

#include <glbinding/featured/bitfield10.h>
#include <glbinding/featured/bitfield10ext.h>
#include <glbinding/featured/enum10.h>
#include <glbinding/featured/enum10ext.h>
#include <glbinding/featured/functions10.h>
#include <glbinding/featured/functions10ext.h>
