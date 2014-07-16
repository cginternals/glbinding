#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl11
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl11

#include <glbinding/gl/bitfield11.h>
#include <glbinding/gl/bitfield11ext.h>
#include <glbinding/gl/enum11.h>
#include <glbinding/gl/enum11ext.h>
#include <glbinding/gl/functions11.h>
#include <glbinding/gl/functions11ext.h>
