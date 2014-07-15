#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl40ext
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl40ext

#include <glbinding/featured/bitfield40ext.h>
#include <glbinding/featured/enum40ext.h>
#include <glbinding/featured/functions40ext.h>
