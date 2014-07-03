#pragma once

#include <glbinding/types.h>


namespace gl40core
{

using namespace gl;

enum class GLbitfield : unsigned int
{
    // AttribMask
    GL_DEPTH_BUFFER_BIT = 0x00000100,
    GL_STENCIL_BUFFER_BIT = 0x00000400,
    GL_COLOR_BUFFER_BIT = 0x00004000,

    // ContextFlagMask
    GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 0x00000001,

    // ContextProfileMask
    GL_CONTEXT_CORE_PROFILE_BIT = 0x00000001,
    GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = 0x00000002,

    // MapBufferUsageMask
    GL_MAP_READ_BIT = 0x0001,
    GL_MAP_WRITE_BIT = 0x0002,
    GL_MAP_INVALIDATE_RANGE_BIT = 0x0004,
    GL_MAP_INVALIDATE_BUFFER_BIT = 0x0008,
    GL_MAP_FLUSH_EXPLICIT_BIT = 0x0010,
    GL_MAP_UNSYNCHRONIZED_BIT = 0x0020,

    // SyncObjectMask
    GL_SYNC_FLUSH_COMMANDS_BIT = 0x00000001,

    // UseProgramStageMask
    GL_COMPUTE_SHADER_BIT = 0x00000020,
};

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
static const GLbitfield GL_COMPUTE_SHADER_BIT = GLbitfield::GL_COMPUTE_SHADER_BIT;

} // namespace gl40core
