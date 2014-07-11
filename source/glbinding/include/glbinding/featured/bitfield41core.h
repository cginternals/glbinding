#pragma once

#include <glbinding/nogl.h>
#include <glbinding/types.h>

#include <glbinding/bitfield.h>


namespace gl41core
{

using namespace gl;

// import bitfields to namespace

// AttribMask

static const GLbitfield GL_DEPTH_BUFFER_BIT = GLbitfield::GL_DEPTH_BUFFER_BIT;
static const GLbitfield GL_STENCIL_BUFFER_BIT = GLbitfield::GL_STENCIL_BUFFER_BIT;
static const GLbitfield GL_COLOR_BUFFER_BIT = GLbitfield::GL_COLOR_BUFFER_BIT;

// ContextFlagMask

static const GLbitfield GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = GLbitfield::GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT;

// ContextProfileMask

static const GLbitfield GL_CONTEXT_CORE_PROFILE_BIT = GLbitfield::GL_CONTEXT_CORE_PROFILE_BIT;
static const GLbitfield GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = GLbitfield::GL_CONTEXT_COMPATIBILITY_PROFILE_BIT;

// MapBufferUsageMask

static const GLbitfield GL_MAP_READ_BIT = GLbitfield::GL_MAP_READ_BIT;
static const GLbitfield GL_MAP_WRITE_BIT = GLbitfield::GL_MAP_WRITE_BIT;
static const GLbitfield GL_MAP_INVALIDATE_RANGE_BIT = GLbitfield::GL_MAP_INVALIDATE_RANGE_BIT;
static const GLbitfield GL_MAP_INVALIDATE_BUFFER_BIT = GLbitfield::GL_MAP_INVALIDATE_BUFFER_BIT;
static const GLbitfield GL_MAP_FLUSH_EXPLICIT_BIT = GLbitfield::GL_MAP_FLUSH_EXPLICIT_BIT;
static const GLbitfield GL_MAP_UNSYNCHRONIZED_BIT = GLbitfield::GL_MAP_UNSYNCHRONIZED_BIT;

// SyncObjectMask

static const GLbitfield GL_SYNC_FLUSH_COMMANDS_BIT = GLbitfield::GL_SYNC_FLUSH_COMMANDS_BIT;

// UseProgramStageMask

static const GLbitfield GL_VERTEX_SHADER_BIT = GLbitfield::GL_VERTEX_SHADER_BIT;
static const GLbitfield GL_FRAGMENT_SHADER_BIT = GLbitfield::GL_FRAGMENT_SHADER_BIT;
static const GLbitfield GL_GEOMETRY_SHADER_BIT = GLbitfield::GL_GEOMETRY_SHADER_BIT;
static const GLbitfield GL_TESS_CONTROL_SHADER_BIT = GLbitfield::GL_TESS_CONTROL_SHADER_BIT;
static const GLbitfield GL_TESS_EVALUATION_SHADER_BIT = GLbitfield::GL_TESS_EVALUATION_SHADER_BIT;
static const GLbitfield GL_ALL_SHADER_BITS = GLbitfield::GL_ALL_SHADER_BITS;

} // namespace gl41core
