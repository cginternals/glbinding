#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl44
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl44

#include <glbinding/gl/bitfield44.h>
#include <glbinding/gl/bitfield44ext.h>
#include <glbinding/gl/enum44.h>
#include <glbinding/gl/enum44ext.h>
#include <glbinding/gl/functions44.h>
#include <glbinding/gl/functions44ext.h>
