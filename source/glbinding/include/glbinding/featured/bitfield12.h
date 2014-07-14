#pragma once

#include <glbinding/nogl.h>
#include <glbinding/types.h>

#include <glbinding/bitfield.h>


namespace gl12
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
static const gl::GLbitfield GL_ALL_ATTRIB_BITS = gl::GLbitfield::GL_ALL_ATTRIB_BITS;

// ClearBufferMask

// static const gl::GLbitfield GL_DEPTH_BUFFER_BIT = gl::GLbitfield::GL_DEPTH_BUFFER_BIT; // reuse AttribMask
// static const gl::GLbitfield GL_ACCUM_BUFFER_BIT = gl::GLbitfield::GL_ACCUM_BUFFER_BIT; // reuse AttribMask
// static const gl::GLbitfield GL_STENCIL_BUFFER_BIT = gl::GLbitfield::GL_STENCIL_BUFFER_BIT; // reuse AttribMask
// static const gl::GLbitfield GL_COLOR_BUFFER_BIT = gl::GLbitfield::GL_COLOR_BUFFER_BIT; // reuse AttribMask

// ClientAttribMask

static const gl::GLbitfield GL_CLIENT_PIXEL_STORE_BIT = gl::GLbitfield::GL_CLIENT_PIXEL_STORE_BIT;
static const gl::GLbitfield GL_CLIENT_VERTEX_ARRAY_BIT = gl::GLbitfield::GL_CLIENT_VERTEX_ARRAY_BIT;
static const gl::GLbitfield GL_CLIENT_ALL_ATTRIB_BITS = gl::GLbitfield::GL_CLIENT_ALL_ATTRIB_BITS;

} // namespace gl12
