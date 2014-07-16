#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl43ext
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl43ext

#include <glbinding/gl/bitfield43ext.h>
#include <glbinding/gl/enum43ext.h>
#include <glbinding/gl/functions43ext.h>
