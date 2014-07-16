#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl41ext
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl41ext

#include <glbinding/gl/bitfield41ext.h>
#include <glbinding/gl/enum41ext.h>
#include <glbinding/gl/functions41ext.h>
