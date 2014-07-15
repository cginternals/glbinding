#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl21
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl21

#include <glbinding/featured/bitfield21.h>
#include <glbinding/featured/bitfield21ext.h>
#include <glbinding/featured/enum21.h>
#include <glbinding/featured/enum21ext.h>
#include <glbinding/featured/functions21.h>
#include <glbinding/featured/functions21ext.h>
