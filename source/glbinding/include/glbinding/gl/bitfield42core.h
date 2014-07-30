#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/gl/types.h>

#include <glbinding/gl/bitfield.h>

#include <glbinding/SharedBitfield.hpp>

namespace gl42core
{

// import bitfields to namespace
static const gl::ContextProfileMask GL_CONTEXT_CORE_PROFILE_BIT = gl::ContextProfileMask::GL_CONTEXT_CORE_PROFILE_BIT;
static const gl::ContextFlagMask GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = gl::ContextFlagMask::GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT;
static const gl::SyncObjectMask GL_SYNC_FLUSH_COMMANDS_BIT = gl::SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT;
static const gl::MemoryBarrierMask GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = gl::MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT;
static const gl::UseProgramStageMask GL_VERTEX_SHADER_BIT = gl::UseProgramStageMask::GL_VERTEX_SHADER_BIT;
static const gl::ContextProfileMask GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = gl::ContextProfileMask::GL_CONTEXT_COMPATIBILITY_PROFILE_BIT;
static const gl::MemoryBarrierMask GL_ELEMENT_ARRAY_BARRIER_BIT = gl::MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT;
static const gl::UseProgramStageMask GL_FRAGMENT_SHADER_BIT = gl::UseProgramStageMask::GL_FRAGMENT_SHADER_BIT;
static const gl::UseProgramStageMask GL_GEOMETRY_SHADER_BIT = gl::UseProgramStageMask::GL_GEOMETRY_SHADER_BIT;
static const gl::MemoryBarrierMask GL_UNIFORM_BARRIER_BIT = gl::MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT;
static const gl::UseProgramStageMask GL_TESS_CONTROL_SHADER_BIT = gl::UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT;
static const gl::MemoryBarrierMask GL_TEXTURE_FETCH_BARRIER_BIT = gl::MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT;
static const gl::UseProgramStageMask GL_TESS_EVALUATION_SHADER_BIT = gl::UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT;
static const gl::MemoryBarrierMask GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = gl::MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_COMMAND_BARRIER_BIT = gl::MemoryBarrierMask::GL_COMMAND_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_PIXEL_BUFFER_BARRIER_BIT = gl::MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT;
static const glbinding::SharedBitfield<gl::AttribMask, gl::ClearBufferMask> GL_DEPTH_BUFFER_BIT = gl::AttribMask::GL_DEPTH_BUFFER_BIT;
static const gl::MemoryBarrierMask GL_TEXTURE_UPDATE_BARRIER_BIT = gl::MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_BUFFER_UPDATE_BARRIER_BIT = gl::MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_FRAMEBUFFER_BARRIER_BIT = gl::MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT;
static const glbinding::SharedBitfield<gl::AttribMask, gl::ClearBufferMask> GL_STENCIL_BUFFER_BIT = gl::AttribMask::GL_STENCIL_BUFFER_BIT;
static const gl::MemoryBarrierMask GL_TRANSFORM_FEEDBACK_BARRIER_BIT = gl::MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_ATOMIC_COUNTER_BARRIER_BIT = gl::MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT;
static const glbinding::SharedBitfield<gl::AttribMask, gl::ClearBufferMask> GL_COLOR_BUFFER_BIT = gl::AttribMask::GL_COLOR_BUFFER_BIT;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_READ_BIT = gl::BufferAccessMask::GL_MAP_READ_BIT;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_WRITE_BIT = gl::BufferAccessMask::GL_MAP_WRITE_BIT;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_INVALIDATE_RANGE_BIT = gl::BufferAccessMask::GL_MAP_INVALIDATE_RANGE_BIT;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_INVALIDATE_BUFFER_BIT = gl::BufferAccessMask::GL_MAP_INVALIDATE_BUFFER_BIT;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_FLUSH_EXPLICIT_BIT = gl::BufferAccessMask::GL_MAP_FLUSH_EXPLICIT_BIT;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_UNSYNCHRONIZED_BIT = gl::BufferAccessMask::GL_MAP_UNSYNCHRONIZED_BIT;
static const gl::MemoryBarrierMask GL_ALL_BARRIER_BITS = gl::MemoryBarrierMask::GL_ALL_BARRIER_BITS;
static const gl::UseProgramStageMask GL_ALL_SHADER_BITS = gl::UseProgramStageMask::GL_ALL_SHADER_BITS;

} // namespace gl42core
