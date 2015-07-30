#pragma once

#include <glpbinding/noglp.h>

#include <glpbinding/glp/bitfield.h>

namespace glp30
{

// import bitfields to namespace
using glp::GL_NONE_BIT;
using glp::GL_SYNC_FLUSH_COMMANDS_BIT;
using glp::GL_DEPTH_BUFFER_BIT;
using glp::GL_STENCIL_BUFFER_BIT;
using glp::GL_COLOR_BUFFER_BIT;
using glp::GL_MAP_READ_BIT;
using glp::GL_MAP_WRITE_BIT;
using glp::GL_MAP_INVALIDATE_RANGE_BIT;
using glp::GL_MAP_INVALIDATE_BUFFER_BIT;
using glp::GL_MAP_FLUSH_EXPLICIT_BIT;
using glp::GL_MAP_UNSYNCHRONIZED_BIT;

} // namespace glp30
