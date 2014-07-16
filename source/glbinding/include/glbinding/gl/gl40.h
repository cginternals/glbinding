#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl40
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl40

#include <glbinding/gl/bitfield40.h>
#include <glbinding/gl/bitfield40ext.h>
#include <glbinding/gl/enum40.h>
#include <glbinding/gl/enum40ext.h>
#include <glbinding/gl/functions40.h>
#include <glbinding/gl/functions40ext.h>
