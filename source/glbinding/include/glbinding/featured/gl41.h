#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl41
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl41

#include <glbinding/featured/bitfield41.h>
#include <glbinding/featured/bitfield41ext.h>
#include <glbinding/featured/enum41.h>
#include <glbinding/featured/enum41ext.h>
#include <glbinding/featured/functions41.h>
#include <glbinding/featured/functions41ext.h>
