#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/gl/types.h>

#include <glbinding/gl/bitfield.h>

#include <glbinding/SharedBitfield.hpp>

namespace gl42
{

// import bitfields to namespace
static const gl::ClientAttribMask GL_CLIENT_PIXEL_STORE_BIT = gl::ClientAttribMask::GL_CLIENT_PIXEL_STORE_BIT;
static const gl::ContextProfileMask GL_CONTEXT_CORE_PROFILE_BIT = gl::ContextProfileMask::GL_CONTEXT_CORE_PROFILE_BIT;
static const gl::ContextFlagMask GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = gl::ContextFlagMask::GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT;
static const gl::AttribMask GL_CURRENT_BIT = gl::AttribMask::GL_CURRENT_BIT;
static const gl::SyncObjectMask GL_SYNC_FLUSH_COMMANDS_BIT = gl::SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT;
static const gl::MemoryBarrierMask GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = gl::MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT;
static const gl::UseProgramStageMask GL_VERTEX_SHADER_BIT = gl::UseProgramStageMask::GL_VERTEX_SHADER_BIT;
static const gl::ClientAttribMask GL_CLIENT_VERTEX_ARRAY_BIT = gl::ClientAttribMask::GL_CLIENT_VERTEX_ARRAY_BIT;
static const gl::ContextProfileMask GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = gl::ContextProfileMask::GL_CONTEXT_COMPATIBILITY_PROFILE_BIT;
static const gl::MemoryBarrierMask GL_ELEMENT_ARRAY_BARRIER_BIT = gl::MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT;
static const gl::UseProgramStageMask GL_FRAGMENT_SHADER_BIT = gl::UseProgramStageMask::GL_FRAGMENT_SHADER_BIT;
static const gl::AttribMask GL_POINT_BIT = gl::AttribMask::GL_POINT_BIT;
static const gl::UseProgramStageMask GL_GEOMETRY_SHADER_BIT = gl::UseProgramStageMask::GL_GEOMETRY_SHADER_BIT;
static const gl::AttribMask GL_LINE_BIT = gl::AttribMask::GL_LINE_BIT;
static const gl::MemoryBarrierMask GL_UNIFORM_BARRIER_BIT = gl::MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT;
static const gl::AttribMask GL_POLYGON_BIT = gl::AttribMask::GL_POLYGON_BIT;
static const gl::UseProgramStageMask GL_TESS_CONTROL_SHADER_BIT = gl::UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT;
static const gl::MemoryBarrierMask GL_TEXTURE_FETCH_BARRIER_BIT = gl::MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT;
static const gl::AttribMask GL_POLYGON_STIPPLE_BIT = gl::AttribMask::GL_POLYGON_STIPPLE_BIT;
static const gl::UseProgramStageMask GL_TESS_EVALUATION_SHADER_BIT = gl::UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT;
static const gl::AttribMask GL_PIXEL_MODE_BIT = gl::AttribMask::GL_PIXEL_MODE_BIT;
static const gl::MemoryBarrierMask GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = gl::MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_COMMAND_BARRIER_BIT = gl::MemoryBarrierMask::GL_COMMAND_BARRIER_BIT;
static const gl::AttribMask GL_LIGHTING_BIT = gl::AttribMask::GL_LIGHTING_BIT;
static const gl::AttribMask GL_FOG_BIT = gl::AttribMask::GL_FOG_BIT;
static const gl::MemoryBarrierMask GL_PIXEL_BUFFER_BARRIER_BIT = gl::MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT;
static const glbinding::SharedBitfield<gl::AttribMask, gl::ClearBufferMask> GL_DEPTH_BUFFER_BIT = gl::AttribMask::GL_DEPTH_BUFFER_BIT;
static const gl::MemoryBarrierMask GL_TEXTURE_UPDATE_BARRIER_BIT = gl::MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT;
static const glbinding::SharedBitfield<gl::AttribMask, gl::ClearBufferMask> GL_ACCUM_BUFFER_BIT = gl::AttribMask::GL_ACCUM_BUFFER_BIT;
static const gl::MemoryBarrierMask GL_BUFFER_UPDATE_BARRIER_BIT = gl::MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_FRAMEBUFFER_BARRIER_BIT = gl::MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT;
static const glbinding::SharedBitfield<gl::AttribMask, gl::ClearBufferMask> GL_STENCIL_BUFFER_BIT = gl::AttribMask::GL_STENCIL_BUFFER_BIT;
static const gl::MemoryBarrierMask GL_TRANSFORM_FEEDBACK_BARRIER_BIT = gl::MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT;
static const gl::AttribMask GL_VIEWPORT_BIT = gl::AttribMask::GL_VIEWPORT_BIT;
static const gl::MemoryBarrierMask GL_ATOMIC_COUNTER_BARRIER_BIT = gl::MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT;
static const gl::AttribMask GL_TRANSFORM_BIT = gl::AttribMask::GL_TRANSFORM_BIT;
static const gl::AttribMask GL_ENABLE_BIT = gl::AttribMask::GL_ENABLE_BIT;
static const glbinding::SharedBitfield<gl::AttribMask, gl::ClearBufferMask> GL_COLOR_BUFFER_BIT = gl::AttribMask::GL_COLOR_BUFFER_BIT;
static const gl::AttribMask GL_HINT_BIT = gl::AttribMask::GL_HINT_BIT;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_READ_BIT = gl::BufferAccessMask::GL_MAP_READ_BIT;
static const gl::AttribMask GL_EVAL_BIT = gl::AttribMask::GL_EVAL_BIT;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_WRITE_BIT = gl::BufferAccessMask::GL_MAP_WRITE_BIT;
static const gl::AttribMask GL_LIST_BIT = gl::AttribMask::GL_LIST_BIT;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_INVALIDATE_RANGE_BIT = gl::BufferAccessMask::GL_MAP_INVALIDATE_RANGE_BIT;
static const gl::AttribMask GL_TEXTURE_BIT = gl::AttribMask::GL_TEXTURE_BIT;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_INVALIDATE_BUFFER_BIT = gl::BufferAccessMask::GL_MAP_INVALIDATE_BUFFER_BIT;
static const gl::AttribMask GL_SCISSOR_BIT = gl::AttribMask::GL_SCISSOR_BIT;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_FLUSH_EXPLICIT_BIT = gl::BufferAccessMask::GL_MAP_FLUSH_EXPLICIT_BIT;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_UNSYNCHRONIZED_BIT = gl::BufferAccessMask::GL_MAP_UNSYNCHRONIZED_BIT;
static const gl::AttribMask GL_MULTISAMPLE_BIT = gl::AttribMask::GL_MULTISAMPLE_BIT;
static const gl::AttribMask GL_ALL_ATTRIB_BITS = gl::AttribMask::GL_ALL_ATTRIB_BITS;
static const gl::MemoryBarrierMask GL_ALL_BARRIER_BITS = gl::MemoryBarrierMask::GL_ALL_BARRIER_BITS;
static const gl::UseProgramStageMask GL_ALL_SHADER_BITS = gl::UseProgramStageMask::GL_ALL_SHADER_BITS;
static const gl::ClientAttribMask GL_CLIENT_ALL_ATTRIB_BITS = gl::ClientAttribMask::GL_CLIENT_ALL_ATTRIB_BITS;

} // namespace gl42
