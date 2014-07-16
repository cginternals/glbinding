#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl13
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl13

#include <glbinding/gl/bitfield13.h>
#include <glbinding/gl/bitfield13ext.h>
#include <glbinding/gl/enum13.h>
#include <glbinding/gl/enum13ext.h>
#include <glbinding/gl/functions13.h>
#include <glbinding/gl/functions13ext.h>
