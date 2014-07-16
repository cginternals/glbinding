#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl20
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl20

#include <glbinding/gl/bitfield20.h>
#include <glbinding/gl/bitfield20ext.h>
#include <glbinding/gl/enum20.h>
#include <glbinding/gl/enum20ext.h>
#include <glbinding/gl/functions20.h>
#include <glbinding/gl/functions20ext.h>
