#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl14
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl14

#include <glbinding/gl/bitfield14.h>
#include <glbinding/gl/bitfield14ext.h>
#include <glbinding/gl/enum14.h>
#include <glbinding/gl/enum14ext.h>
#include <glbinding/gl/functions14.h>
#include <glbinding/gl/functions14ext.h>
