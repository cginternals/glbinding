#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/gl/types.h>

#include <glbinding/gl/bitfield.h>


namespace gl41
{

// import bitfields to namespace

// AttribMask

static const gl::GLbitfield GL_CURRENT_BIT = gl::GLbitfield::GL_CURRENT_BIT;
static const gl::GLbitfield GL_POINT_BIT = gl::GLbitfield::GL_POINT_BIT;
static const gl::GLbitfield GL_LINE_BIT = gl::GLbitfield::GL_LINE_BIT;
static const gl::GLbitfield GL_POLYGON_BIT = gl::GLbitfield::GL_POLYGON_BIT;
static const gl::GLbitfield GL_POLYGON_STIPPLE_BIT = gl::GLbitfield::GL_POLYGON_STIPPLE_BIT;
static const gl::GLbitfield GL_PIXEL_MODE_BIT = gl::GLbitfield::GL_PIXEL_MODE_BIT;
static const gl::GLbitfield GL_LIGHTING_BIT = gl::GLbitfield::GL_LIGHTING_BIT;
static const gl::GLbitfield GL_FOG_BIT = gl::GLbitfield::GL_FOG_BIT;
static const gl::GLbitfield GL_DEPTH_BUFFER_BIT = gl::GLbitfield::GL_DEPTH_BUFFER_BIT;
static const gl::GLbitfield GL_ACCUM_BUFFER_BIT = gl::GLbitfield::GL_ACCUM_BUFFER_BIT;
static const gl::GLbitfield GL_STENCIL_BUFFER_BIT = gl::GLbitfield::GL_STENCIL_BUFFER_BIT;
static const gl::GLbitfield GL_VIEWPORT_BIT = gl::GLbitfield::GL_VIEWPORT_BIT;
static const gl::GLbitfield GL_TRANSFORM_BIT = gl::GLbitfield::GL_TRANSFORM_BIT;
static const gl::GLbitfield GL_ENABLE_BIT = gl::GLbitfield::GL_ENABLE_BIT;
static const gl::GLbitfield GL_COLOR_BUFFER_BIT = gl::GLbitfield::GL_COLOR_BUFFER_BIT;
static const gl::GLbitfield GL_HINT_BIT = gl::GLbitfield::GL_HINT_BIT;
static const gl::GLbitfield GL_EVAL_BIT = gl::GLbitfield::GL_EVAL_BIT;
static const gl::GLbitfield GL_LIST_BIT = gl::GLbitfield::GL_LIST_BIT;
static const gl::GLbitfield GL_TEXTURE_BIT = gl::GLbitfield::GL_TEXTURE_BIT;
static const gl::GLbitfield GL_SCISSOR_BIT = gl::GLbitfield::GL_SCISSOR_BIT;
static const gl::GLbitfield GL_MULTISAMPLE_BIT = gl::GLbitfield::GL_MULTISAMPLE_BIT;
static const gl::GLbitfield GL_ALL_ATTRIB_BITS = gl::GLbitfield::GL_ALL_ATTRIB_BITS;

// BufferAccessMask

static const gl::GLbitfield GL_MAP_READ_BIT = gl::GLbitfield::GL_MAP_READ_BIT;
static const gl::GLbitfield GL_MAP_WRITE_BIT = gl::GLbitfield::GL_MAP_WRITE_BIT;
static const gl::GLbitfield GL_MAP_INVALIDATE_RANGE_BIT = gl::GLbitfield::GL_MAP_INVALIDATE_RANGE_BIT;
static const gl::GLbitfield GL_MAP_INVALIDATE_BUFFER_BIT = gl::GLbitfield::GL_MAP_INVALIDATE_BUFFER_BIT;
static const gl::GLbitfield GL_MAP_FLUSH_EXPLICIT_BIT = gl::GLbitfield::GL_MAP_FLUSH_EXPLICIT_BIT;
static const gl::GLbitfield GL_MAP_UNSYNCHRONIZED_BIT = gl::GLbitfield::GL_MAP_UNSYNCHRONIZED_BIT;

// ClearBufferMask

// static const gl::GLbitfield GL_DEPTH_BUFFER_BIT = gl::GLbitfield::GL_DEPTH_BUFFER_BIT; // reuse AttribMask
// static const gl::GLbitfield GL_ACCUM_BUFFER_BIT = gl::GLbitfield::GL_ACCUM_BUFFER_BIT; // reuse AttribMask
// static const gl::GLbitfield GL_STENCIL_BUFFER_BIT = gl::GLbitfield::GL_STENCIL_BUFFER_BIT; // reuse AttribMask
// static const gl::GLbitfield GL_COLOR_BUFFER_BIT = gl::GLbitfield::GL_COLOR_BUFFER_BIT; // reuse AttribMask

// ClientAttribMask

static const gl::GLbitfield GL_CLIENT_PIXEL_STORE_BIT = gl::GLbitfield::GL_CLIENT_PIXEL_STORE_BIT;
static const gl::GLbitfield GL_CLIENT_VERTEX_ARRAY_BIT = gl::GLbitfield::GL_CLIENT_VERTEX_ARRAY_BIT;
static const gl::GLbitfield GL_CLIENT_ALL_ATTRIB_BITS = gl::GLbitfield::GL_CLIENT_ALL_ATTRIB_BITS;

// ContextFlagMask

static const gl::GLbitfield GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = gl::GLbitfield::GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT;

// ContextProfileMask

static const gl::GLbitfield GL_CONTEXT_CORE_PROFILE_BIT = gl::GLbitfield::GL_CONTEXT_CORE_PROFILE_BIT;
static const gl::GLbitfield GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = gl::GLbitfield::GL_CONTEXT_COMPATIBILITY_PROFILE_BIT;

// MapBufferUsageMask

// static const gl::GLbitfield GL_MAP_READ_BIT = gl::GLbitfield::GL_MAP_READ_BIT; // reuse BufferAccessMask
// static const gl::GLbitfield GL_MAP_WRITE_BIT = gl::GLbitfield::GL_MAP_WRITE_BIT; // reuse BufferAccessMask
// static const gl::GLbitfield GL_MAP_INVALIDATE_RANGE_BIT = gl::GLbitfield::GL_MAP_INVALIDATE_RANGE_BIT; // reuse BufferAccessMask
// static const gl::GLbitfield GL_MAP_INVALIDATE_BUFFER_BIT = gl::GLbitfield::GL_MAP_INVALIDATE_BUFFER_BIT; // reuse BufferAccessMask
// static const gl::GLbitfield GL_MAP_FLUSH_EXPLICIT_BIT = gl::GLbitfield::GL_MAP_FLUSH_EXPLICIT_BIT; // reuse BufferAccessMask
// static const gl::GLbitfield GL_MAP_UNSYNCHRONIZED_BIT = gl::GLbitfield::GL_MAP_UNSYNCHRONIZED_BIT; // reuse BufferAccessMask

// SyncObjectMask

static const gl::GLbitfield GL_SYNC_FLUSH_COMMANDS_BIT = gl::GLbitfield::GL_SYNC_FLUSH_COMMANDS_BIT;

// UseProgramStageMask

static const gl::GLbitfield GL_VERTEX_SHADER_BIT = gl::GLbitfield::GL_VERTEX_SHADER_BIT;
static const gl::GLbitfield GL_FRAGMENT_SHADER_BIT = gl::GLbitfield::GL_FRAGMENT_SHADER_BIT;
static const gl::GLbitfield GL_GEOMETRY_SHADER_BIT = gl::GLbitfield::GL_GEOMETRY_SHADER_BIT;
static const gl::GLbitfield GL_TESS_CONTROL_SHADER_BIT = gl::GLbitfield::GL_TESS_CONTROL_SHADER_BIT;
static const gl::GLbitfield GL_TESS_EVALUATION_SHADER_BIT = gl::GLbitfield::GL_TESS_EVALUATION_SHADER_BIT;
static const gl::GLbitfield GL_ALL_SHADER_BITS = gl::GLbitfield::GL_ALL_SHADER_BITS;

} // namespace gl41
