#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl44ext
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl44ext

#include <glbinding/gl/bitfield44ext.h>
#include <glbinding/gl/enum44ext.h>
#include <glbinding/gl/functions44ext.h>
