#pragma once

#include <glbinding/nogl.h>
#include <glbinding/types.h>

#include <glbinding/bitfield.h>


namespace gl32core
{

using namespace gl;

// import bitfields to namespace

// AttribMask

static const AttribMask GL_DEPTH_BUFFER_BIT = AttribMask::GL_DEPTH_BUFFER_BIT;
static const AttribMask GL_STENCIL_BUFFER_BIT = AttribMask::GL_STENCIL_BUFFER_BIT;
static const AttribMask GL_COLOR_BUFFER_BIT = AttribMask::GL_COLOR_BUFFER_BIT;

// ContextFlagMask

static const ContextFlagMask GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = ContextFlagMask::GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT;

// ContextProfileMask

static const ContextProfileMask GL_CONTEXT_CORE_PROFILE_BIT = ContextProfileMask::GL_CONTEXT_CORE_PROFILE_BIT;
static const ContextProfileMask GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = ContextProfileMask::GL_CONTEXT_COMPATIBILITY_PROFILE_BIT;

// MapBufferUsageMask

static const MapBufferUsageMask GL_MAP_READ_BIT = MapBufferUsageMask::GL_MAP_READ_BIT;
static const MapBufferUsageMask GL_MAP_WRITE_BIT = MapBufferUsageMask::GL_MAP_WRITE_BIT;
static const MapBufferUsageMask GL_MAP_INVALIDATE_RANGE_BIT = MapBufferUsageMask::GL_MAP_INVALIDATE_RANGE_BIT;
static const MapBufferUsageMask GL_MAP_INVALIDATE_BUFFER_BIT = MapBufferUsageMask::GL_MAP_INVALIDATE_BUFFER_BIT;
static const MapBufferUsageMask GL_MAP_FLUSH_EXPLICIT_BIT = MapBufferUsageMask::GL_MAP_FLUSH_EXPLICIT_BIT;
static const MapBufferUsageMask GL_MAP_UNSYNCHRONIZED_BIT = MapBufferUsageMask::GL_MAP_UNSYNCHRONIZED_BIT;

// SyncObjectMask

static const SyncObjectMask GL_SYNC_FLUSH_COMMANDS_BIT = SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT;

} // namespace gl32core
