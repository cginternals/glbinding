#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/gl/types.h>

#include <glbinding/gl/bitfield.h>

#include <glbinding/SharedBitfield.hpp>

namespace gl12ext
{

// import bitfields to namespace
static const gl::PerformanceQueryCapsMaskINTEL GL_PERFQUERY_SINGLE_CONTEXT_INTEL = gl::PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_SINGLE_CONTEXT_INTEL;
static const gl::UnusedMask GL_UNUSED_BIT = gl::UnusedMask::GL_UNUSED_BIT;
static const gl::FragmentShaderDestModMaskATI GL_2X_BIT_ATI = gl::FragmentShaderDestModMaskATI::GL_2X_BIT_ATI;
static const gl::ContextProfileMask GL_CONTEXT_CORE_PROFILE_BIT = gl::ContextProfileMask::GL_CONTEXT_CORE_PROFILE_BIT;
static const gl::ContextFlagMask GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = gl::ContextFlagMask::GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT;
static const gl::PerformanceQueryCapsMaskINTEL GL_PERFQUERY_GLOBAL_CONTEXT_INTEL = gl::PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_GLOBAL_CONTEXT_INTEL;
static const gl::FragmentShaderDestMaskATI GL_RED_BIT_ATI = gl::FragmentShaderDestMaskATI::GL_RED_BIT_ATI;
static const gl::SyncObjectMask GL_SYNC_FLUSH_COMMANDS_BIT = gl::SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT;
static const gl::FfdMaskSGIX GL_TEXTURE_DEFORMATION_BIT_SGIX = gl::FfdMaskSGIX::GL_TEXTURE_DEFORMATION_BIT_SGIX;
static const gl::TextureStorageMaskAMD GL_TEXTURE_STORAGE_SPARSE_BIT_AMD = gl::TextureStorageMaskAMD::GL_TEXTURE_STORAGE_SPARSE_BIT_AMD;
static const gl::MemoryBarrierMask GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = gl::MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT = gl::MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT;
static const gl::UseProgramStageMask GL_VERTEX_SHADER_BIT = gl::UseProgramStageMask::GL_VERTEX_SHADER_BIT;
static const gl::FragmentShaderDestModMaskATI GL_4X_BIT_ATI = gl::FragmentShaderDestModMaskATI::GL_4X_BIT_ATI;
static const gl::FragmentShaderColorModMaskATI GL_COMP_BIT_ATI = gl::FragmentShaderColorModMaskATI::GL_COMP_BIT_ATI;
static const gl::ContextProfileMask GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = gl::ContextProfileMask::GL_CONTEXT_COMPATIBILITY_PROFILE_BIT;
static const gl::ContextFlagMask GL_CONTEXT_FLAG_DEBUG_BIT = gl::ContextFlagMask::GL_CONTEXT_FLAG_DEBUG_BIT;
static const gl::MemoryBarrierMask GL_ELEMENT_ARRAY_BARRIER_BIT = gl::MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_ELEMENT_ARRAY_BARRIER_BIT_EXT = gl::MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT_EXT;
static const gl::UseProgramStageMask GL_FRAGMENT_SHADER_BIT = gl::UseProgramStageMask::GL_FRAGMENT_SHADER_BIT;
static const gl::FfdMaskSGIX GL_GEOMETRY_DEFORMATION_BIT_SGIX = gl::FfdMaskSGIX::GL_GEOMETRY_DEFORMATION_BIT_SGIX;
static const gl::FragmentShaderDestMaskATI GL_GREEN_BIT_ATI = gl::FragmentShaderDestMaskATI::GL_GREEN_BIT_ATI;
static const gl::FragmentShaderDestModMaskATI GL_8X_BIT_ATI = gl::FragmentShaderDestModMaskATI::GL_8X_BIT_ATI;
static const gl::FragmentShaderDestMaskATI GL_BLUE_BIT_ATI = gl::FragmentShaderDestMaskATI::GL_BLUE_BIT_ATI;
static const gl::ContextFlagMask GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT = gl::ContextFlagMask::GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT;
static const gl::ContextFlagMask GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB = gl::ContextFlagMask::GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB;
static const gl::UseProgramStageMask GL_GEOMETRY_SHADER_BIT = gl::UseProgramStageMask::GL_GEOMETRY_SHADER_BIT;
static const gl::FragmentShaderColorModMaskATI GL_NEGATE_BIT_ATI = gl::FragmentShaderColorModMaskATI::GL_NEGATE_BIT_ATI;
static const gl::MemoryBarrierMask GL_UNIFORM_BARRIER_BIT = gl::MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_UNIFORM_BARRIER_BIT_EXT = gl::MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT_EXT;
static const gl::VertexHintsMaskPGI GL_VERTEX23_BIT_PGI = gl::VertexHintsMaskPGI::GL_VERTEX23_BIT_PGI;
static const gl::FragmentShaderColorModMaskATI GL_BIAS_BIT_ATI = gl::FragmentShaderColorModMaskATI::GL_BIAS_BIT_ATI;
static const gl::FragmentShaderDestModMaskATI GL_HALF_BIT_ATI = gl::FragmentShaderDestModMaskATI::GL_HALF_BIT_ATI;
static const gl::UseProgramStageMask GL_TESS_CONTROL_SHADER_BIT = gl::UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT;
static const gl::MemoryBarrierMask GL_TEXTURE_FETCH_BARRIER_BIT = gl::MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_TEXTURE_FETCH_BARRIER_BIT_EXT = gl::MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT_EXT;
static const gl::VertexHintsMaskPGI GL_VERTEX4_BIT_PGI = gl::VertexHintsMaskPGI::GL_VERTEX4_BIT_PGI;
static const gl::FragmentShaderDestModMaskATI GL_QUARTER_BIT_ATI = gl::FragmentShaderDestModMaskATI::GL_QUARTER_BIT_ATI;
static const gl::MemoryBarrierMask GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV = gl::MemoryBarrierMask::GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV;
static const gl::UseProgramStageMask GL_TESS_EVALUATION_SHADER_BIT = gl::UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT;
static const gl::UseProgramStageMask GL_COMPUTE_SHADER_BIT = gl::UseProgramStageMask::GL_COMPUTE_SHADER_BIT;
static const gl::FragmentShaderDestModMaskATI GL_EIGHTH_BIT_ATI = gl::FragmentShaderDestModMaskATI::GL_EIGHTH_BIT_ATI;
static const gl::MemoryBarrierMask GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = gl::MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT = gl::MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT;
static const gl::MemoryBarrierMask GL_COMMAND_BARRIER_BIT = gl::MemoryBarrierMask::GL_COMMAND_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_COMMAND_BARRIER_BIT_EXT = gl::MemoryBarrierMask::GL_COMMAND_BARRIER_BIT_EXT;
static const gl::FragmentShaderDestModMaskATI GL_SATURATE_BIT_ATI = gl::FragmentShaderDestModMaskATI::GL_SATURATE_BIT_ATI;
static const gl::MemoryBarrierMask GL_PIXEL_BUFFER_BARRIER_BIT = gl::MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_PIXEL_BUFFER_BARRIER_BIT_EXT = gl::MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT_EXT;
static const gl::MemoryBarrierMask GL_TEXTURE_UPDATE_BARRIER_BIT = gl::MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_TEXTURE_UPDATE_BARRIER_BIT_EXT = gl::MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT_EXT;
static const gl::MemoryBarrierMask GL_BUFFER_UPDATE_BARRIER_BIT = gl::MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_BUFFER_UPDATE_BARRIER_BIT_EXT = gl::MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT_EXT;
static const gl::MemoryBarrierMask GL_FRAMEBUFFER_BARRIER_BIT = gl::MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_FRAMEBUFFER_BARRIER_BIT_EXT = gl::MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT_EXT;
static const gl::MemoryBarrierMask GL_TRANSFORM_FEEDBACK_BARRIER_BIT = gl::MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT = gl::MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT;
static const gl::MemoryBarrierMask GL_ATOMIC_COUNTER_BARRIER_BIT = gl::MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_ATOMIC_COUNTER_BARRIER_BIT_EXT = gl::MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT_EXT;
static const gl::MemoryBarrierMask GL_SHADER_STORAGE_BARRIER_BIT = gl::MemoryBarrierMask::GL_SHADER_STORAGE_BARRIER_BIT;
static const gl::MemoryBarrierMask GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT = gl::MemoryBarrierMask::GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT;
static const gl::ClearBufferMask GL_COVERAGE_BUFFER_BIT_NV = gl::ClearBufferMask::GL_COVERAGE_BUFFER_BIT_NV;
static const gl::MemoryBarrierMask GL_QUERY_BUFFER_BARRIER_BIT = gl::MemoryBarrierMask::GL_QUERY_BUFFER_BARRIER_BIT;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_READ_BIT = gl::BufferAccessMask::GL_MAP_READ_BIT;
static const gl::VertexHintsMaskPGI GL_COLOR3_BIT_PGI = gl::VertexHintsMaskPGI::GL_COLOR3_BIT_PGI;
static const gl::PathRenderingMaskNV GL_FONT_X_MIN_BOUNDS_BIT_NV = gl::PathRenderingMaskNV::GL_FONT_X_MIN_BOUNDS_BIT_NV;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_WRITE_BIT = gl::BufferAccessMask::GL_MAP_WRITE_BIT;
static const gl::VertexHintsMaskPGI GL_COLOR4_BIT_PGI = gl::VertexHintsMaskPGI::GL_COLOR4_BIT_PGI;
static const gl::PathRenderingMaskNV GL_FONT_Y_MIN_BOUNDS_BIT_NV = gl::PathRenderingMaskNV::GL_FONT_Y_MIN_BOUNDS_BIT_NV;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_INVALIDATE_RANGE_BIT = gl::BufferAccessMask::GL_MAP_INVALIDATE_RANGE_BIT;
static const gl::VertexHintsMaskPGI GL_EDGEFLAG_BIT_PGI = gl::VertexHintsMaskPGI::GL_EDGEFLAG_BIT_PGI;
static const gl::PathRenderingMaskNV GL_FONT_X_MAX_BOUNDS_BIT_NV = gl::PathRenderingMaskNV::GL_FONT_X_MAX_BOUNDS_BIT_NV;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_INVALIDATE_BUFFER_BIT = gl::BufferAccessMask::GL_MAP_INVALIDATE_BUFFER_BIT;
static const gl::PathRenderingMaskNV GL_FONT_Y_MAX_BOUNDS_BIT_NV = gl::PathRenderingMaskNV::GL_FONT_Y_MAX_BOUNDS_BIT_NV;
static const gl::VertexHintsMaskPGI GL_INDEX_BIT_PGI = gl::VertexHintsMaskPGI::GL_INDEX_BIT_PGI;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_FLUSH_EXPLICIT_BIT = gl::BufferAccessMask::GL_MAP_FLUSH_EXPLICIT_BIT;
static const gl::PathRenderingMaskNV GL_FONT_UNITS_PER_EM_BIT_NV = gl::PathRenderingMaskNV::GL_FONT_UNITS_PER_EM_BIT_NV;
static const gl::VertexHintsMaskPGI GL_MAT_AMBIENT_BIT_PGI = gl::VertexHintsMaskPGI::GL_MAT_AMBIENT_BIT_PGI;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_UNSYNCHRONIZED_BIT = gl::BufferAccessMask::GL_MAP_UNSYNCHRONIZED_BIT;
static const gl::PathRenderingMaskNV GL_FONT_ASCENDER_BIT_NV = gl::PathRenderingMaskNV::GL_FONT_ASCENDER_BIT_NV;
static const gl::VertexHintsMaskPGI GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI = gl::VertexHintsMaskPGI::GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_PERSISTENT_BIT = gl::BufferAccessMask::GL_MAP_PERSISTENT_BIT;
static const gl::PathRenderingMaskNV GL_FONT_DESCENDER_BIT_NV = gl::PathRenderingMaskNV::GL_FONT_DESCENDER_BIT_NV;
static const gl::VertexHintsMaskPGI GL_MAT_DIFFUSE_BIT_PGI = gl::VertexHintsMaskPGI::GL_MAT_DIFFUSE_BIT_PGI;
static const glbinding::SharedBitfield<gl::BufferAccessMask, gl::MapBufferUsageMask> GL_MAP_COHERENT_BIT = gl::BufferAccessMask::GL_MAP_COHERENT_BIT;
static const gl::PathRenderingMaskNV GL_FONT_HEIGHT_BIT_NV = gl::PathRenderingMaskNV::GL_FONT_HEIGHT_BIT_NV;
static const gl::VertexHintsMaskPGI GL_MAT_EMISSION_BIT_PGI = gl::VertexHintsMaskPGI::GL_MAT_EMISSION_BIT_PGI;
static const glbinding::SharedBitfield<gl::PathFontStyle, gl::PathRenderingMaskNV> GL_BOLD_BIT_NV = gl::PathFontStyle::GL_BOLD_BIT_NV;
static const gl::PathRenderingMaskNV GL_GLYPH_WIDTH_BIT_NV = gl::PathRenderingMaskNV::GL_GLYPH_WIDTH_BIT_NV;
static const gl::MapBufferUsageMask GL_DYNAMIC_STORAGE_BIT = gl::MapBufferUsageMask::GL_DYNAMIC_STORAGE_BIT;
static const gl::PathRenderingMaskNV GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV = gl::PathRenderingMaskNV::GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV;
static const gl::VertexHintsMaskPGI GL_MAT_COLOR_INDEXES_BIT_PGI = gl::VertexHintsMaskPGI::GL_MAT_COLOR_INDEXES_BIT_PGI;
static const gl::PathRenderingMaskNV GL_GLYPH_HEIGHT_BIT_NV = gl::PathRenderingMaskNV::GL_GLYPH_HEIGHT_BIT_NV;
static const glbinding::SharedBitfield<gl::PathFontStyle, gl::PathRenderingMaskNV> GL_ITALIC_BIT_NV = gl::PathFontStyle::GL_ITALIC_BIT_NV;
static const gl::MapBufferUsageMask GL_CLIENT_STORAGE_BIT = gl::MapBufferUsageMask::GL_CLIENT_STORAGE_BIT;
static const gl::PathRenderingMaskNV GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV = gl::PathRenderingMaskNV::GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV;
static const gl::VertexHintsMaskPGI GL_MAT_SHININESS_BIT_PGI = gl::VertexHintsMaskPGI::GL_MAT_SHININESS_BIT_PGI;
static const gl::PathRenderingMaskNV GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV = gl::PathRenderingMaskNV::GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV;
static const gl::MapBufferUsageMask GL_SPARSE_STORAGE_BIT_ARB = gl::MapBufferUsageMask::GL_SPARSE_STORAGE_BIT_ARB;
static const gl::PathRenderingMaskNV GL_FONT_UNDERLINE_POSITION_BIT_NV = gl::PathRenderingMaskNV::GL_FONT_UNDERLINE_POSITION_BIT_NV;
static const gl::VertexHintsMaskPGI GL_MAT_SPECULAR_BIT_PGI = gl::VertexHintsMaskPGI::GL_MAT_SPECULAR_BIT_PGI;
static const gl::PathRenderingMaskNV GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV = gl::PathRenderingMaskNV::GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV;
static const gl::PathRenderingMaskNV GL_FONT_UNDERLINE_THICKNESS_BIT_NV = gl::PathRenderingMaskNV::GL_FONT_UNDERLINE_THICKNESS_BIT_NV;
static const gl::VertexHintsMaskPGI GL_NORMAL_BIT_PGI = gl::VertexHintsMaskPGI::GL_NORMAL_BIT_PGI;
static const gl::PathRenderingMaskNV GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV = gl::PathRenderingMaskNV::GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV;
static const gl::PathRenderingMaskNV GL_GLYPH_HAS_KERNING_BIT_NV = gl::PathRenderingMaskNV::GL_GLYPH_HAS_KERNING_BIT_NV;
static const gl::PathRenderingMaskNV GL_FONT_HAS_KERNING_BIT_NV = gl::PathRenderingMaskNV::GL_FONT_HAS_KERNING_BIT_NV;
static const gl::VertexHintsMaskPGI GL_TEXCOORD1_BIT_PGI = gl::VertexHintsMaskPGI::GL_TEXCOORD1_BIT_PGI;
static const gl::PathRenderingMaskNV GL_GLYPH_VERTICAL_BEARING_X_BIT_NV = gl::PathRenderingMaskNV::GL_GLYPH_VERTICAL_BEARING_X_BIT_NV;
static const gl::PathRenderingMaskNV GL_FONT_NUM_GLYPH_INDICES_BIT_NV = gl::PathRenderingMaskNV::GL_FONT_NUM_GLYPH_INDICES_BIT_NV;
static const gl::AttribMask GL_MULTISAMPLE_BIT = gl::AttribMask::GL_MULTISAMPLE_BIT;
static const gl::AttribMask GL_MULTISAMPLE_BIT_3DFX = gl::AttribMask::GL_MULTISAMPLE_BIT_3DFX;
static const gl::AttribMask GL_MULTISAMPLE_BIT_ARB = gl::AttribMask::GL_MULTISAMPLE_BIT_ARB;
static const gl::AttribMask GL_MULTISAMPLE_BIT_EXT = gl::AttribMask::GL_MULTISAMPLE_BIT_EXT;
static const gl::VertexHintsMaskPGI GL_TEXCOORD2_BIT_PGI = gl::VertexHintsMaskPGI::GL_TEXCOORD2_BIT_PGI;
static const gl::PathRenderingMaskNV GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV = gl::PathRenderingMaskNV::GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV;
static const gl::VertexHintsMaskPGI GL_TEXCOORD3_BIT_PGI = gl::VertexHintsMaskPGI::GL_TEXCOORD3_BIT_PGI;
static const gl::PathRenderingMaskNV GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV = gl::PathRenderingMaskNV::GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV;
static const gl::VertexHintsMaskPGI GL_TEXCOORD4_BIT_PGI = gl::VertexHintsMaskPGI::GL_TEXCOORD4_BIT_PGI;
static const gl::MemoryBarrierMask GL_ALL_BARRIER_BITS = gl::MemoryBarrierMask::GL_ALL_BARRIER_BITS;
static const gl::MemoryBarrierMask GL_ALL_BARRIER_BITS_EXT = gl::MemoryBarrierMask::GL_ALL_BARRIER_BITS_EXT;
static const gl::UseProgramStageMask GL_ALL_SHADER_BITS = gl::UseProgramStageMask::GL_ALL_SHADER_BITS;

} // namespace gl12ext
