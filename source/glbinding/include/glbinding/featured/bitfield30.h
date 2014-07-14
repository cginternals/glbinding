#pragma once

#include <glbinding/nogl.h>
#include <glbinding/types.h>

#include <glbinding/bitfield.h>


namespace gl30
{

using namespace gl;

// import bitfields to namespace

// AttribMask

static const GLbitfield GL_CURRENT_BIT = GLbitfield::GL_CURRENT_BIT;
static const GLbitfield GL_POINT_BIT = GLbitfield::GL_POINT_BIT;
static const GLbitfield GL_LINE_BIT = GLbitfield::GL_LINE_BIT;
static const GLbitfield GL_POLYGON_BIT = GLbitfield::GL_POLYGON_BIT;
static const GLbitfield GL_POLYGON_STIPPLE_BIT = GLbitfield::GL_POLYGON_STIPPLE_BIT;
static const GLbitfield GL_PIXEL_MODE_BIT = GLbitfield::GL_PIXEL_MODE_BIT;
static const GLbitfield GL_LIGHTING_BIT = GLbitfield::GL_LIGHTING_BIT;
static const GLbitfield GL_FOG_BIT = GLbitfield::GL_FOG_BIT;
static const GLbitfield GL_DEPTH_BUFFER_BIT = GLbitfield::GL_DEPTH_BUFFER_BIT;
static const GLbitfield GL_ACCUM_BUFFER_BIT = GLbitfield::GL_ACCUM_BUFFER_BIT;
static const GLbitfield GL_STENCIL_BUFFER_BIT = GLbitfield::GL_STENCIL_BUFFER_BIT;
static const GLbitfield GL_VIEWPORT_BIT = GLbitfield::GL_VIEWPORT_BIT;
static const GLbitfield GL_TRANSFORM_BIT = GLbitfield::GL_TRANSFORM_BIT;
static const GLbitfield GL_ENABLE_BIT = GLbitfield::GL_ENABLE_BIT;
static const GLbitfield GL_COLOR_BUFFER_BIT = GLbitfield::GL_COLOR_BUFFER_BIT;
static const GLbitfield GL_HINT_BIT = GLbitfield::GL_HINT_BIT;
static const GLbitfield GL_EVAL_BIT = GLbitfield::GL_EVAL_BIT;
static const GLbitfield GL_LIST_BIT = GLbitfield::GL_LIST_BIT;
static const GLbitfield GL_TEXTURE_BIT = GLbitfield::GL_TEXTURE_BIT;
static const GLbitfield GL_SCISSOR_BIT = GLbitfield::GL_SCISSOR_BIT;
static const GLbitfield GL_MULTISAMPLE_BIT = GLbitfield::GL_MULTISAMPLE_BIT;
static const GLbitfield GL_ALL_ATTRIB_BITS = GLbitfield::GL_ALL_ATTRIB_BITS;

// BufferAccessMask

static const GLbitfield GL_MAP_READ_BIT = GLbitfield::GL_MAP_READ_BIT;
static const GLbitfield GL_MAP_WRITE_BIT = GLbitfield::GL_MAP_WRITE_BIT;
static const GLbitfield GL_MAP_INVALIDATE_RANGE_BIT = GLbitfield::GL_MAP_INVALIDATE_RANGE_BIT;
static const GLbitfield GL_MAP_INVALIDATE_BUFFER_BIT = GLbitfield::GL_MAP_INVALIDATE_BUFFER_BIT;
static const GLbitfield GL_MAP_FLUSH_EXPLICIT_BIT = GLbitfield::GL_MAP_FLUSH_EXPLICIT_BIT;
static const GLbitfield GL_MAP_UNSYNCHRONIZED_BIT = GLbitfield::GL_MAP_UNSYNCHRONIZED_BIT;

// ClearBufferMask

// static const GLbitfield GL_DEPTH_BUFFER_BIT = GLbitfield::GL_DEPTH_BUFFER_BIT; // reuse AttribMask
// static const GLbitfield GL_ACCUM_BUFFER_BIT = GLbitfield::GL_ACCUM_BUFFER_BIT; // reuse AttribMask
// static const GLbitfield GL_STENCIL_BUFFER_BIT = GLbitfield::GL_STENCIL_BUFFER_BIT; // reuse AttribMask
// static const GLbitfield GL_COLOR_BUFFER_BIT = GLbitfield::GL_COLOR_BUFFER_BIT; // reuse AttribMask

// ClientAttribMask

static const GLbitfield GL_CLIENT_PIXEL_STORE_BIT = GLbitfield::GL_CLIENT_PIXEL_STORE_BIT;
static const GLbitfield GL_CLIENT_VERTEX_ARRAY_BIT = GLbitfield::GL_CLIENT_VERTEX_ARRAY_BIT;
static const GLbitfield GL_CLIENT_ALL_ATTRIB_BITS = GLbitfield::GL_CLIENT_ALL_ATTRIB_BITS;

// ContextFlagMask

static const GLbitfield GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = GLbitfield::GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT;

// MapBufferUsageMask

// static const GLbitfield GL_MAP_READ_BIT = GLbitfield::GL_MAP_READ_BIT; // reuse BufferAccessMask
// static const GLbitfield GL_MAP_WRITE_BIT = GLbitfield::GL_MAP_WRITE_BIT; // reuse BufferAccessMask
// static const GLbitfield GL_MAP_INVALIDATE_RANGE_BIT = GLbitfield::GL_MAP_INVALIDATE_RANGE_BIT; // reuse BufferAccessMask
// static const GLbitfield GL_MAP_INVALIDATE_BUFFER_BIT = GLbitfield::GL_MAP_INVALIDATE_BUFFER_BIT; // reuse BufferAccessMask
// static const GLbitfield GL_MAP_FLUSH_EXPLICIT_BIT = GLbitfield::GL_MAP_FLUSH_EXPLICIT_BIT; // reuse BufferAccessMask
// static const GLbitfield GL_MAP_UNSYNCHRONIZED_BIT = GLbitfield::GL_MAP_UNSYNCHRONIZED_BIT; // reuse BufferAccessMask

} // namespace gl30
