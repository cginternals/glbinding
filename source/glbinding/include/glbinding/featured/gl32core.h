#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl32core
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl32core

#include <glbinding/featured/bitfield32core.h>
#include <glbinding/featured/enum32core.h>
#include <glbinding/featured/functions32core.h>
