#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl21ext
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl21ext

#include <glbinding/featured/bitfield21ext.h>
#include <glbinding/featured/enum21ext.h>
#include <glbinding/featured/functions21ext.h>
