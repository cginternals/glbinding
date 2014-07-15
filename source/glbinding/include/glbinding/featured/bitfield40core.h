#pragma once

#include <glbinding/nogl.h>
#include <glbinding/types.h>

#include <glbinding/bitfield.h>


namespace gl40core
{

// import bitfields to namespace

// AttribMask

static const gl::GLbitfield GL_DEPTH_BUFFER_BIT = gl::GLbitfield::GL_DEPTH_BUFFER_BIT;
static const gl::GLbitfield GL_STENCIL_BUFFER_BIT = gl::GLbitfield::GL_STENCIL_BUFFER_BIT;
static const gl::GLbitfield GL_COLOR_BUFFER_BIT = gl::GLbitfield::GL_COLOR_BUFFER_BIT;

// BufferAccessMask

static const gl::GLbitfield GL_MAP_READ_BIT = gl::GLbitfield::GL_MAP_READ_BIT;
static const gl::GLbitfield GL_MAP_WRITE_BIT = gl::GLbitfield::GL_MAP_WRITE_BIT;
static const gl::GLbitfield GL_MAP_INVALIDATE_RANGE_BIT = gl::GLbitfield::GL_MAP_INVALIDATE_RANGE_BIT;
static const gl::GLbitfield GL_MAP_INVALIDATE_BUFFER_BIT = gl::GLbitfield::GL_MAP_INVALIDATE_BUFFER_BIT;
static const gl::GLbitfield GL_MAP_FLUSH_EXPLICIT_BIT = gl::GLbitfield::GL_MAP_FLUSH_EXPLICIT_BIT;
static const gl::GLbitfield GL_MAP_UNSYNCHRONIZED_BIT = gl::GLbitfield::GL_MAP_UNSYNCHRONIZED_BIT;

// ClearBufferMask

// static const gl::GLbitfield GL_DEPTH_BUFFER_BIT = gl::GLbitfield::GL_DEPTH_BUFFER_BIT; // reuse AttribMask
// static const gl::GLbitfield GL_STENCIL_BUFFER_BIT = gl::GLbitfield::GL_STENCIL_BUFFER_BIT; // reuse AttribMask
// static const gl::GLbitfield GL_COLOR_BUFFER_BIT = gl::GLbitfield::GL_COLOR_BUFFER_BIT; // reuse AttribMask

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

} // namespace gl40core
