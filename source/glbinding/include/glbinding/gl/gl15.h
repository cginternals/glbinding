#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl15
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl15

#include <glbinding/gl/bitfield15.h>
#include <glbinding/gl/bitfield15ext.h>
#include <glbinding/gl/enum15.h>
#include <glbinding/gl/enum15ext.h>
#include <glbinding/gl/functions15.h>
#include <glbinding/gl/functions15ext.h>
