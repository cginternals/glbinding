#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl30
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl30

#include <glbinding/gl/bitfield30.h>
#include <glbinding/gl/bitfield30ext.h>
#include <glbinding/gl/enum30.h>
#include <glbinding/gl/enum30ext.h>
#include <glbinding/gl/functions30.h>
#include <glbinding/gl/functions30ext.h>
