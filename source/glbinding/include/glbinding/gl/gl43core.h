#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl43core
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl43core

#include <glbinding/gl/bitfield43core.h>
#include <glbinding/gl/enum43core.h>
#include <glbinding/gl/functions43core.h>
