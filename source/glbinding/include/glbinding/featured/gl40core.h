#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl40core
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl40core

#include <glbinding/featured/bitfield40core.h>
#include <glbinding/featured/enum40core.h>
#include <glbinding/featured/functions40core.h>
