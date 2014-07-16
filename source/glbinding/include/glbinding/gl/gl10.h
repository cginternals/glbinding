#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl10
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl10

#include <glbinding/gl/bitfield10.h>
#include <glbinding/gl/bitfield10ext.h>
#include <glbinding/gl/enum10.h>
#include <glbinding/gl/enum10ext.h>
#include <glbinding/gl/functions10.h>
#include <glbinding/gl/functions10ext.h>
