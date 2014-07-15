#pragma once

#include <glbinding/nogl.h>
#include <glbinding/types.h>

#include <glbinding/bitfield.h>


namespace gl31ext
{

// import bitfields to namespace

// AttribMask

static const gl::GLbitfield GL_MULTISAMPLE_BIT_3DFX = gl::GLbitfield::GL_MULTISAMPLE_BIT_3DFX;
static const gl::GLbitfield GL_MULTISAMPLE_BIT_ARB = gl::GLbitfield::GL_MULTISAMPLE_BIT_ARB;
static const gl::GLbitfield GL_MULTISAMPLE_BIT_EXT = gl::GLbitfield::GL_MULTISAMPLE_BIT_EXT;

// BufferAccessMask

static const gl::GLbitfield GL_MAP_PERSISTENT_BIT = gl::GLbitfield::GL_MAP_PERSISTENT_BIT;
static const gl::GLbitfield GL_MAP_COHERENT_BIT = gl::GLbitfield::GL_MAP_COHERENT_BIT;

// ClearBufferMask

static const gl::GLbitfield GL_COVERAGE_BUFFER_BIT_NV = gl::GLbitfield::GL_COVERAGE_BUFFER_BIT_NV;

// ContextFlagMask

static const gl::GLbitfield GL_CONTEXT_FLAG_DEBUG_BIT = gl::GLbitfield::GL_CONTEXT_FLAG_DEBUG_BIT;
static const gl::GLbitfield GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB = gl::GLbitfield::GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB;

// ContextProfileMask

static const gl::GLbitfield GL_CONTEXT_CORE_PROFILE_BIT = gl::GLbitfield::GL_CONTEXT_CORE_PROFILE_BIT;
static const gl::GLbitfield GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = gl::GLbitfield::GL_CONTEXT_COMPATIBILITY_PROFILE_BIT;

// FfdMaskSGIX

static const gl::GLbitfield GL_TEXTURE_DEFORMATION_BIT_SGIX = gl::GLbitfield::GL_TEXTURE_DEFORMATION_BIT_SGIX;
static const gl::GLbitfield GL_GEOMETRY_DEFORMATION_BIT_SGIX = gl::GLbitfield::GL_GEOMETRY_DEFORMATION_BIT_SGIX;

// FragmentShaderColorModMaskATI

static const gl::GLbitfield GL_COMP_BIT_ATI = gl::GLbitfield::GL_COMP_BIT_ATI;
static const gl::GLbitfield GL_NEGATE_BIT_ATI = gl::GLbitfield::GL_NEGATE_BIT_ATI;
static const gl::GLbitfield GL_BIAS_BIT_ATI = gl::GLbitfield::GL_BIAS_BIT_ATI;

// FragmentShaderDestMaskATI

static const gl::GLbitfield GL_RED_BIT_ATI = gl::GLbitfield::GL_RED_BIT_ATI;
static const gl::GLbitfield GL_GREEN_BIT_ATI = gl::GLbitfield::GL_GREEN_BIT_ATI;
static const gl::GLbitfield GL_BLUE_BIT_ATI = gl::GLbitfield::GL_BLUE_BIT_ATI;

// FragmentShaderDestModMaskATI

static const gl::GLbitfield GL_2X_BIT_ATI = gl::GLbitfield::GL_2X_BIT_ATI;
static const gl::GLbitfield GL_4X_BIT_ATI = gl::GLbitfield::GL_4X_BIT_ATI;
static const gl::GLbitfield GL_8X_BIT_ATI = gl::GLbitfield::GL_8X_BIT_ATI;
static const gl::GLbitfield GL_HALF_BIT_ATI = gl::GLbitfield::GL_HALF_BIT_ATI;
static const gl::GLbitfield GL_QUARTER_BIT_ATI = gl::GLbitfield::GL_QUARTER_BIT_ATI;
static const gl::GLbitfield GL_EIGHTH_BIT_ATI = gl::GLbitfield::GL_EIGHTH_BIT_ATI;
static const gl::GLbitfield GL_SATURATE_BIT_ATI = gl::GLbitfield::GL_SATURATE_BIT_ATI;

// MapBufferUsageMask

// static const gl::GLbitfield GL_MAP_PERSISTENT_BIT = gl::GLbitfield::GL_MAP_PERSISTENT_BIT; // reuse BufferAccessMask
// static const gl::GLbitfield GL_MAP_COHERENT_BIT = gl::GLbitfield::GL_MAP_COHERENT_BIT; // reuse BufferAccessMask
static const gl::GLbitfield GL_DYNAMIC_STORAGE_BIT = gl::GLbitfield::GL_DYNAMIC_STORAGE_BIT;
static const gl::GLbitfield GL_CLIENT_STORAGE_BIT = gl::GLbitfield::GL_CLIENT_STORAGE_BIT;

// MemoryBarrierMask

static const gl::GLbitfield GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = gl::GLbitfield::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT;
static const gl::GLbitfield GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT = gl::GLbitfield::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT;
static const gl::GLbitfield GL_ELEMENT_ARRAY_BARRIER_BIT = gl::GLbitfield::GL_ELEMENT_ARRAY_BARRIER_BIT;
static const gl::GLbitfield GL_ELEMENT_ARRAY_BARRIER_BIT_EXT = gl::GLbitfield::GL_ELEMENT_ARRAY_BARRIER_BIT_EXT;
static const gl::GLbitfield GL_UNIFORM_BARRIER_BIT = gl::GLbitfield::GL_UNIFORM_BARRIER_BIT;
static const gl::GLbitfield GL_UNIFORM_BARRIER_BIT_EXT = gl::GLbitfield::GL_UNIFORM_BARRIER_BIT_EXT;
static const gl::GLbitfield GL_TEXTURE_FETCH_BARRIER_BIT = gl::GLbitfield::GL_TEXTURE_FETCH_BARRIER_BIT;
static const gl::GLbitfield GL_TEXTURE_FETCH_BARRIER_BIT_EXT = gl::GLbitfield::GL_TEXTURE_FETCH_BARRIER_BIT_EXT;
static const gl::GLbitfield GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV = gl::GLbitfield::GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV;
static const gl::GLbitfield GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = gl::GLbitfield::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT;
static const gl::GLbitfield GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT = gl::GLbitfield::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT;
static const gl::GLbitfield GL_COMMAND_BARRIER_BIT = gl::GLbitfield::GL_COMMAND_BARRIER_BIT;
static const gl::GLbitfield GL_COMMAND_BARRIER_BIT_EXT = gl::GLbitfield::GL_COMMAND_BARRIER_BIT_EXT;
static const gl::GLbitfield GL_PIXEL_BUFFER_BARRIER_BIT = gl::GLbitfield::GL_PIXEL_BUFFER_BARRIER_BIT;
static const gl::GLbitfield GL_PIXEL_BUFFER_BARRIER_BIT_EXT = gl::GLbitfield::GL_PIXEL_BUFFER_BARRIER_BIT_EXT;
static const gl::GLbitfield GL_TEXTURE_UPDATE_BARRIER_BIT = gl::GLbitfield::GL_TEXTURE_UPDATE_BARRIER_BIT;
static const gl::GLbitfield GL_TEXTURE_UPDATE_BARRIER_BIT_EXT = gl::GLbitfield::GL_TEXTURE_UPDATE_BARRIER_BIT_EXT;
static const gl::GLbitfield GL_BUFFER_UPDATE_BARRIER_BIT = gl::GLbitfield::GL_BUFFER_UPDATE_BARRIER_BIT;
static const gl::GLbitfield GL_BUFFER_UPDATE_BARRIER_BIT_EXT = gl::GLbitfield::GL_BUFFER_UPDATE_BARRIER_BIT_EXT;
static const gl::GLbitfield GL_FRAMEBUFFER_BARRIER_BIT = gl::GLbitfield::GL_FRAMEBUFFER_BARRIER_BIT;
static const gl::GLbitfield GL_FRAMEBUFFER_BARRIER_BIT_EXT = gl::GLbitfield::GL_FRAMEBUFFER_BARRIER_BIT_EXT;
static const gl::GLbitfield GL_TRANSFORM_FEEDBACK_BARRIER_BIT = gl::GLbitfield::GL_TRANSFORM_FEEDBACK_BARRIER_BIT;
static const gl::GLbitfield GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT = gl::GLbitfield::GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT;
static const gl::GLbitfield GL_ATOMIC_COUNTER_BARRIER_BIT = gl::GLbitfield::GL_ATOMIC_COUNTER_BARRIER_BIT;
static const gl::GLbitfield GL_ATOMIC_COUNTER_BARRIER_BIT_EXT = gl::GLbitfield::GL_ATOMIC_COUNTER_BARRIER_BIT_EXT;
static const gl::GLbitfield GL_SHADER_STORAGE_BARRIER_BIT = gl::GLbitfield::GL_SHADER_STORAGE_BARRIER_BIT;
static const gl::GLbitfield GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT = gl::GLbitfield::GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT;
static const gl::GLbitfield GL_QUERY_BUFFER_BARRIER_BIT = gl::GLbitfield::GL_QUERY_BUFFER_BARRIER_BIT;
static const gl::GLbitfield GL_ALL_BARRIER_BITS = gl::GLbitfield::GL_ALL_BARRIER_BITS;
static const gl::GLbitfield GL_ALL_BARRIER_BITS_EXT = gl::GLbitfield::GL_ALL_BARRIER_BITS_EXT;

// NotUsedMask

static const gl::GLbitfield GL_NOT_USED_BIT = gl::GLbitfield::GL_NOT_USED_BIT;

// PathFontStyle

static const gl::GLbitfield GL_NONE_BIT = gl::GLbitfield::GL_NONE_BIT;
static const gl::GLbitfield GL_BOLD_BIT_NV = gl::GLbitfield::GL_BOLD_BIT_NV;
static const gl::GLbitfield GL_ITALIC_BIT_NV = gl::GLbitfield::GL_ITALIC_BIT_NV;

// PathRenderingMaskNV

static const gl::GLbitfield GL_FONT_X_MIN_BOUNDS_BIT_NV = gl::GLbitfield::GL_FONT_X_MIN_BOUNDS_BIT_NV;
static const gl::GLbitfield GL_FONT_Y_MIN_BOUNDS_BIT_NV = gl::GLbitfield::GL_FONT_Y_MIN_BOUNDS_BIT_NV;
static const gl::GLbitfield GL_FONT_X_MAX_BOUNDS_BIT_NV = gl::GLbitfield::GL_FONT_X_MAX_BOUNDS_BIT_NV;
static const gl::GLbitfield GL_FONT_Y_MAX_BOUNDS_BIT_NV = gl::GLbitfield::GL_FONT_Y_MAX_BOUNDS_BIT_NV;
static const gl::GLbitfield GL_FONT_UNITS_PER_EM_BIT_NV = gl::GLbitfield::GL_FONT_UNITS_PER_EM_BIT_NV;
static const gl::GLbitfield GL_FONT_ASCENDER_BIT_NV = gl::GLbitfield::GL_FONT_ASCENDER_BIT_NV;
static const gl::GLbitfield GL_FONT_DESCENDER_BIT_NV = gl::GLbitfield::GL_FONT_DESCENDER_BIT_NV;
static const gl::GLbitfield GL_FONT_HEIGHT_BIT_NV = gl::GLbitfield::GL_FONT_HEIGHT_BIT_NV;
// static const gl::GLbitfield GL_BOLD_BIT_NV = gl::GLbitfield::GL_BOLD_BIT_NV; // reuse PathFontStyle
static const gl::GLbitfield GL_GLYPH_WIDTH_BIT_NV = gl::GLbitfield::GL_GLYPH_WIDTH_BIT_NV;
static const gl::GLbitfield GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV = gl::GLbitfield::GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV;
static const gl::GLbitfield GL_GLYPH_HEIGHT_BIT_NV = gl::GLbitfield::GL_GLYPH_HEIGHT_BIT_NV;
// static const gl::GLbitfield GL_ITALIC_BIT_NV = gl::GLbitfield::GL_ITALIC_BIT_NV; // reuse PathFontStyle
static const gl::GLbitfield GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV = gl::GLbitfield::GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV;
static const gl::GLbitfield GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV = gl::GLbitfield::GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV;
static const gl::GLbitfield GL_FONT_UNDERLINE_POSITION_BIT_NV = gl::GLbitfield::GL_FONT_UNDERLINE_POSITION_BIT_NV;
static const gl::GLbitfield GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV = gl::GLbitfield::GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV;
static const gl::GLbitfield GL_FONT_UNDERLINE_THICKNESS_BIT_NV = gl::GLbitfield::GL_FONT_UNDERLINE_THICKNESS_BIT_NV;
static const gl::GLbitfield GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV = gl::GLbitfield::GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV;
static const gl::GLbitfield GL_GLYPH_HAS_KERNING_BIT_NV = gl::GLbitfield::GL_GLYPH_HAS_KERNING_BIT_NV;
static const gl::GLbitfield GL_FONT_HAS_KERNING_BIT_NV = gl::GLbitfield::GL_FONT_HAS_KERNING_BIT_NV;
static const gl::GLbitfield GL_GLYPH_VERTICAL_BEARING_X_BIT_NV = gl::GLbitfield::GL_GLYPH_VERTICAL_BEARING_X_BIT_NV;
static const gl::GLbitfield GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV = gl::GLbitfield::GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV;
static const gl::GLbitfield GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV = gl::GLbitfield::GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV;

// PerformanceQueryCapsMaskINTEL

static const gl::GLbitfield GL_PERFQUERY_SINGLE_CONTEXT_INTEL = gl::GLbitfield::GL_PERFQUERY_SINGLE_CONTEXT_INTEL;
static const gl::GLbitfield GL_PERFQUERY_GLOBAL_CONTEXT_INTEL = gl::GLbitfield::GL_PERFQUERY_GLOBAL_CONTEXT_INTEL;

// SyncObjectMask

static const gl::GLbitfield GL_SYNC_FLUSH_COMMANDS_BIT = gl::GLbitfield::GL_SYNC_FLUSH_COMMANDS_BIT;

// TextureStorageMaskAMD

static const gl::GLbitfield GL_TEXTURE_STORAGE_SPARSE_BIT_AMD = gl::GLbitfield::GL_TEXTURE_STORAGE_SPARSE_BIT_AMD;

// UseProgramStageMask

static const gl::GLbitfield GL_VERTEX_SHADER_BIT = gl::GLbitfield::GL_VERTEX_SHADER_BIT;
static const gl::GLbitfield GL_FRAGMENT_SHADER_BIT = gl::GLbitfield::GL_FRAGMENT_SHADER_BIT;
static const gl::GLbitfield GL_GEOMETRY_SHADER_BIT = gl::GLbitfield::GL_GEOMETRY_SHADER_BIT;
static const gl::GLbitfield GL_TESS_CONTROL_SHADER_BIT = gl::GLbitfield::GL_TESS_CONTROL_SHADER_BIT;
static const gl::GLbitfield GL_TESS_EVALUATION_SHADER_BIT = gl::GLbitfield::GL_TESS_EVALUATION_SHADER_BIT;
static const gl::GLbitfield GL_COMPUTE_SHADER_BIT = gl::GLbitfield::GL_COMPUTE_SHADER_BIT;
static const gl::GLbitfield GL_ALL_SHADER_BITS = gl::GLbitfield::GL_ALL_SHADER_BITS;

// VertexHintsMaskPGI

static const gl::GLbitfield GL_VERTEX23_BIT_PGI = gl::GLbitfield::GL_VERTEX23_BIT_PGI;
static const gl::GLbitfield GL_VERTEX4_BIT_PGI = gl::GLbitfield::GL_VERTEX4_BIT_PGI;
static const gl::GLbitfield GL_COLOR3_BIT_PGI = gl::GLbitfield::GL_COLOR3_BIT_PGI;
static const gl::GLbitfield GL_COLOR4_BIT_PGI = gl::GLbitfield::GL_COLOR4_BIT_PGI;
static const gl::GLbitfield GL_EDGEFLAG_BIT_PGI = gl::GLbitfield::GL_EDGEFLAG_BIT_PGI;
static const gl::GLbitfield GL_INDEX_BIT_PGI = gl::GLbitfield::GL_INDEX_BIT_PGI;
static const gl::GLbitfield GL_MAT_AMBIENT_BIT_PGI = gl::GLbitfield::GL_MAT_AMBIENT_BIT_PGI;
static const gl::GLbitfield GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI = gl::GLbitfield::GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI;
static const gl::GLbitfield GL_MAT_DIFFUSE_BIT_PGI = gl::GLbitfield::GL_MAT_DIFFUSE_BIT_PGI;
static const gl::GLbitfield GL_MAT_EMISSION_BIT_PGI = gl::GLbitfield::GL_MAT_EMISSION_BIT_PGI;
static const gl::GLbitfield GL_MAT_COLOR_INDEXES_BIT_PGI = gl::GLbitfield::GL_MAT_COLOR_INDEXES_BIT_PGI;
static const gl::GLbitfield GL_MAT_SHININESS_BIT_PGI = gl::GLbitfield::GL_MAT_SHININESS_BIT_PGI;
static const gl::GLbitfield GL_MAT_SPECULAR_BIT_PGI = gl::GLbitfield::GL_MAT_SPECULAR_BIT_PGI;
static const gl::GLbitfield GL_NORMAL_BIT_PGI = gl::GLbitfield::GL_NORMAL_BIT_PGI;
static const gl::GLbitfield GL_TEXCOORD1_BIT_PGI = gl::GLbitfield::GL_TEXCOORD1_BIT_PGI;
static const gl::GLbitfield GL_TEXCOORD2_BIT_PGI = gl::GLbitfield::GL_TEXCOORD2_BIT_PGI;
static const gl::GLbitfield GL_TEXCOORD3_BIT_PGI = gl::GLbitfield::GL_TEXCOORD3_BIT_PGI;
static const gl::GLbitfield GL_TEXCOORD4_BIT_PGI = gl::GLbitfield::GL_TEXCOORD4_BIT_PGI;

} // namespace gl31ext
