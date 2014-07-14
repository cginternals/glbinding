#pragma once

#include <glbinding/nogl.h>
#include <glbinding/types.h>

#include <glbinding/bitfield.h>


namespace gl13
{

using namespace gl;

// import bitfields to namespace

// AttribMask

static const AttribMask GL_CURRENT_BIT = AttribMask::GL_CURRENT_BIT;
static const AttribMask GL_POINT_BIT = AttribMask::GL_POINT_BIT;
static const AttribMask GL_LINE_BIT = AttribMask::GL_LINE_BIT;
static const AttribMask GL_POLYGON_BIT = AttribMask::GL_POLYGON_BIT;
static const AttribMask GL_POLYGON_STIPPLE_BIT = AttribMask::GL_POLYGON_STIPPLE_BIT;
static const AttribMask GL_PIXEL_MODE_BIT = AttribMask::GL_PIXEL_MODE_BIT;
static const AttribMask GL_LIGHTING_BIT = AttribMask::GL_LIGHTING_BIT;
static const AttribMask GL_FOG_BIT = AttribMask::GL_FOG_BIT;
static const AttribMask GL_DEPTH_BUFFER_BIT = AttribMask::GL_DEPTH_BUFFER_BIT;
static const AttribMask GL_ACCUM_BUFFER_BIT = AttribMask::GL_ACCUM_BUFFER_BIT;
static const AttribMask GL_STENCIL_BUFFER_BIT = AttribMask::GL_STENCIL_BUFFER_BIT;
static const AttribMask GL_VIEWPORT_BIT = AttribMask::GL_VIEWPORT_BIT;
static const AttribMask GL_TRANSFORM_BIT = AttribMask::GL_TRANSFORM_BIT;
static const AttribMask GL_ENABLE_BIT = AttribMask::GL_ENABLE_BIT;
static const AttribMask GL_COLOR_BUFFER_BIT = AttribMask::GL_COLOR_BUFFER_BIT;
static const AttribMask GL_HINT_BIT = AttribMask::GL_HINT_BIT;
static const AttribMask GL_EVAL_BIT = AttribMask::GL_EVAL_BIT;
static const AttribMask GL_LIST_BIT = AttribMask::GL_LIST_BIT;
static const AttribMask GL_TEXTURE_BIT = AttribMask::GL_TEXTURE_BIT;
static const AttribMask GL_SCISSOR_BIT = AttribMask::GL_SCISSOR_BIT;
static const AttribMask GL_MULTISAMPLE_BIT = AttribMask::GL_MULTISAMPLE_BIT;
static const AttribMask GL_ALL_ATTRIB_BITS = AttribMask::GL_ALL_ATTRIB_BITS;

// ClearBufferMask

static const AttribMask GL_DEPTH_BUFFER_BIT = AttribMask::GL_DEPTH_BUFFER_BIT;
static const AttribMask GL_ACCUM_BUFFER_BIT = AttribMask::GL_ACCUM_BUFFER_BIT;
static const AttribMask GL_STENCIL_BUFFER_BIT = AttribMask::GL_STENCIL_BUFFER_BIT;
static const AttribMask GL_COLOR_BUFFER_BIT = AttribMask::GL_COLOR_BUFFER_BIT;

// ClientAttribMask

static const ClientAttribMask GL_CLIENT_PIXEL_STORE_BIT = ClientAttribMask::GL_CLIENT_PIXEL_STORE_BIT;
static const ClientAttribMask GL_CLIENT_VERTEX_ARRAY_BIT = ClientAttribMask::GL_CLIENT_VERTEX_ARRAY_BIT;
static const ClientAttribMask GL_CLIENT_ALL_ATTRIB_BITS = ClientAttribMask::GL_CLIENT_ALL_ATTRIB_BITS;

} // namespace gl13
