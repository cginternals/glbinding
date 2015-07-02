#pragma once

#include <glesbinding/nogles.h>

#include <glesbinding/gles/bitfield.h>

namespace gles31
{

// import bitfields to namespace
using gles::GL_NONE_BIT;
using gles2::GL_SYNC_FLUSH_COMMANDS_BIT;
using gles2::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT;
using gles2::GL_VERTEX_SHADER_BIT;
using gles2::GL_ELEMENT_ARRAY_BARRIER_BIT;
using gles2::GL_FRAGMENT_SHADER_BIT;
using gles2::GL_UNIFORM_BARRIER_BIT;
using gles2::GL_TEXTURE_FETCH_BARRIER_BIT;
using gles2::GL_COMPUTE_SHADER_BIT;
using gles2::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT;
using gles2::GL_COMMAND_BARRIER_BIT;
using gles2::GL_PIXEL_BUFFER_BARRIER_BIT;
using gles2::GL_DEPTH_BUFFER_BIT;
using gles2::GL_TEXTURE_UPDATE_BARRIER_BIT;
using gles2::GL_BUFFER_UPDATE_BARRIER_BIT;
using gles2::GL_FRAMEBUFFER_BARRIER_BIT;
using gles2::GL_STENCIL_BUFFER_BIT;
using gles2::GL_TRANSFORM_FEEDBACK_BARRIER_BIT;
using gles2::GL_ATOMIC_COUNTER_BARRIER_BIT;
using gles2::GL_SHADER_STORAGE_BARRIER_BIT;
using gles2::GL_COLOR_BUFFER_BIT;
using gles2::GL_MAP_READ_BIT;
using gles2::GL_MAP_WRITE_BIT;
using gles2::GL_MAP_INVALIDATE_RANGE_BIT;
using gles2::GL_MAP_INVALIDATE_BUFFER_BIT;
using gles2::GL_MAP_FLUSH_EXPLICIT_BIT;
using gles2::GL_MAP_UNSYNCHRONIZED_BIT;
using gles2::GL_ALL_BARRIER_BITS;
using gles2::GL_ALL_SHADER_BITS;

} // namespace gles31
