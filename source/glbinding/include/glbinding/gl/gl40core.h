#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl40core
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl40core

#include <glbinding/gl/bitfield40core.h>
#include <glbinding/gl/enum40core.h>
#include <glbinding/gl/functions40core.h>
