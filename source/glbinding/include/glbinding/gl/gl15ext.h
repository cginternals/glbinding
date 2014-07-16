#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl15ext
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl15ext

#include <glbinding/gl/bitfield15ext.h>
#include <glbinding/gl/enum15ext.h>
#include <glbinding/gl/functions15ext.h>
