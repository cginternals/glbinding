#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl13ext
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl13ext

#include <glbinding/featured/bitfield13ext.h>
#include <glbinding/featured/enum13ext.h>
#include <glbinding/featured/functions13ext.h>
