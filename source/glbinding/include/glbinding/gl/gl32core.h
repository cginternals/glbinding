#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl32core
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl32core

#include <glbinding/gl/bitfield32core.h>
#include <glbinding/gl/enum32core.h>
#include <glbinding/gl/functions32core.h>
