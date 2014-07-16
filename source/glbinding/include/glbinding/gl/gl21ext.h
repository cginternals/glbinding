#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl21ext
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl21ext

#include <glbinding/gl/bitfield21ext.h>
#include <glbinding/gl/enum21ext.h>
#include <glbinding/gl/functions21ext.h>
