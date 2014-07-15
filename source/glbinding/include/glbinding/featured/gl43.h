#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl43
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl43

#include <glbinding/featured/bitfield43.h>
#include <glbinding/featured/bitfield43ext.h>
#include <glbinding/featured/enum43.h>
#include <glbinding/featured/enum43ext.h>
#include <glbinding/featured/functions43.h>
#include <glbinding/featured/functions43ext.h>
