#pragma once

#include <glpbinding/noglp.h>

#include <glpbinding/glp/bitfield.h>

namespace glp31
{

// import bitfields to namespace
using glp::GL_NONE_BIT;
using glp::GL_SYNC_FLUSH_COMMANDS_BIT;
using glp::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT;
using glp::GL_VERTEX_SHADER_BIT;
using glp::GL_ELEMENT_ARRAY_BARRIER_BIT;
using glp::GL_FRAGMENT_SHADER_BIT;
using glp::GL_UNIFORM_BARRIER_BIT;
using glp::GL_TEXTURE_FETCH_BARRIER_BIT;
using glp::GL_COMPUTE_SHADER_BIT;
using glp::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT;
using glp::GL_COMMAND_BARRIER_BIT;
using glp::GL_PIXEL_BUFFER_BARRIER_BIT;
using glp::GL_DEPTH_BUFFER_BIT;
using glp::GL_TEXTURE_UPDATE_BARRIER_BIT;
using glp::GL_BUFFER_UPDATE_BARRIER_BIT;
using glp::GL_FRAMEBUFFER_BARRIER_BIT;
using glp::GL_STENCIL_BUFFER_BIT;
using glp::GL_TRANSFORM_FEEDBACK_BARRIER_BIT;
using glp::GL_ATOMIC_COUNTER_BARRIER_BIT;
using glp::GL_SHADER_STORAGE_BARRIER_BIT;
using glp::GL_COLOR_BUFFER_BIT;
using glp::GL_MAP_READ_BIT;
using glp::GL_MAP_WRITE_BIT;
using glp::GL_MAP_INVALIDATE_RANGE_BIT;
using glp::GL_MAP_INVALIDATE_BUFFER_BIT;
using glp::GL_MAP_FLUSH_EXPLICIT_BIT;
using glp::GL_MAP_UNSYNCHRONIZED_BIT;
using glp::GL_ALL_BARRIER_BITS;
using glp::GL_ALL_SHADER_BITS;

} // namespace glp31
