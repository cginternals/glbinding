#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl44
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl44

#include <glbinding/featured/bitfield44.h>
#include <glbinding/featured/bitfield44ext.h>
#include <glbinding/featured/enum44.h>
#include <glbinding/featured/enum44ext.h>
#include <glbinding/featured/functions44.h>
#include <glbinding/featured/functions44ext.h>
