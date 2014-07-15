#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl43core
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl43core

#include <glbinding/featured/bitfield43core.h>
#include <glbinding/featured/enum43core.h>
#include <glbinding/featured/functions43core.h>
