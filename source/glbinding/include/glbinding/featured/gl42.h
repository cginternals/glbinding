#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl42
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl42

#include <glbinding/featured/bitfield42.h>
#include <glbinding/featured/bitfield42ext.h>
#include <glbinding/featured/enum42.h>
#include <glbinding/featured/enum42ext.h>
#include <glbinding/featured/functions42.h>
#include <glbinding/featured/functions42ext.h>
