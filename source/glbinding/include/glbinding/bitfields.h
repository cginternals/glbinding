#pragma once

#include <glbinding/noGL.h>

#include <glbinding/types.h>

namespace gl {

// AttribMask
static const GLbitfield GL_CURRENT_BIT = 0x00000001;
static const GLbitfield GL_POINT_BIT = 0x00000002;
static const GLbitfield GL_LINE_BIT = 0x00000004;
static const GLbitfield GL_POLYGON_BIT = 0x00000008;
static const GLbitfield GL_POLYGON_STIPPLE_BIT = 0x00000010;
static const GLbitfield GL_PIXEL_MODE_BIT = 0x00000020;
static const GLbitfield GL_LIGHTING_BIT = 0x00000040;
static const GLbitfield GL_FOG_BIT = 0x00000080;
static const GLbitfield GL_DEPTH_BUFFER_BIT = 0x00000100;
static const GLbitfield GL_ACCUM_BUFFER_BIT = 0x00000200;
static const GLbitfield GL_STENCIL_BUFFER_BIT = 0x00000400;
static const GLbitfield GL_VIEWPORT_BIT = 0x00000800;
static const GLbitfield GL_TRANSFORM_BIT = 0x00001000;
static const GLbitfield GL_ENABLE_BIT = 0x00002000;
static const GLbitfield GL_COLOR_BUFFER_BIT = 0x00004000;
static const GLbitfield GL_HINT_BIT = 0x00008000;
static const GLbitfield GL_EVAL_BIT = 0x00010000;
static const GLbitfield GL_LIST_BIT = 0x00020000;
static const GLbitfield GL_TEXTURE_BIT = 0x00040000;
static const GLbitfield GL_SCISSOR_BIT = 0x00080000;
static const GLbitfield GL_MULTISAMPLE_BIT = 0x20000000;
static const GLbitfield GL_MULTISAMPLE_BIT_3DFX = 0x20000000;
static const GLbitfield GL_MULTISAMPLE_BIT_ARB = 0x20000000;
static const GLbitfield GL_MULTISAMPLE_BIT_EXT = 0x20000000;
static const GLbitfield GL_ALL_ATTRIB_BITS = 0xFFFFFFFF;

// BufferBitQCOM
static const GLbitfield GL_COLOR_BUFFER_BIT0_QCOM = 0x00000001;
static const GLbitfield GL_COLOR_BUFFER_BIT1_QCOM = 0x00000002;
static const GLbitfield GL_COLOR_BUFFER_BIT2_QCOM = 0x00000004;
static const GLbitfield GL_COLOR_BUFFER_BIT3_QCOM = 0x00000008;
static const GLbitfield GL_COLOR_BUFFER_BIT4_QCOM = 0x00000010;
static const GLbitfield GL_COLOR_BUFFER_BIT5_QCOM = 0x00000020;
static const GLbitfield GL_COLOR_BUFFER_BIT6_QCOM = 0x00000040;
static const GLbitfield GL_COLOR_BUFFER_BIT7_QCOM = 0x00000080;
static const GLbitfield GL_DEPTH_BUFFER_BIT0_QCOM = 0x00000100;
static const GLbitfield GL_DEPTH_BUFFER_BIT1_QCOM = 0x00000200;
static const GLbitfield GL_DEPTH_BUFFER_BIT2_QCOM = 0x00000400;
static const GLbitfield GL_DEPTH_BUFFER_BIT3_QCOM = 0x00000800;
static const GLbitfield GL_DEPTH_BUFFER_BIT4_QCOM = 0x00001000;
static const GLbitfield GL_DEPTH_BUFFER_BIT5_QCOM = 0x00002000;
static const GLbitfield GL_DEPTH_BUFFER_BIT6_QCOM = 0x00004000;
static const GLbitfield GL_DEPTH_BUFFER_BIT7_QCOM = 0x00008000;
static const GLbitfield GL_STENCIL_BUFFER_BIT0_QCOM = 0x00010000;
static const GLbitfield GL_STENCIL_BUFFER_BIT1_QCOM = 0x00020000;
static const GLbitfield GL_STENCIL_BUFFER_BIT2_QCOM = 0x00040000;
static const GLbitfield GL_STENCIL_BUFFER_BIT3_QCOM = 0x00080000;
static const GLbitfield GL_STENCIL_BUFFER_BIT4_QCOM = 0x00100000;
static const GLbitfield GL_STENCIL_BUFFER_BIT5_QCOM = 0x00200000;
static const GLbitfield GL_STENCIL_BUFFER_BIT6_QCOM = 0x00400000;
static const GLbitfield GL_STENCIL_BUFFER_BIT7_QCOM = 0x00800000;
static const GLbitfield GL_MULTISAMPLE_BUFFER_BIT0_QCOM = 0x01000000;
static const GLbitfield GL_MULTISAMPLE_BUFFER_BIT1_QCOM = 0x02000000;
static const GLbitfield GL_MULTISAMPLE_BUFFER_BIT2_QCOM = 0x04000000;
static const GLbitfield GL_MULTISAMPLE_BUFFER_BIT3_QCOM = 0x08000000;
static const GLbitfield GL_MULTISAMPLE_BUFFER_BIT4_QCOM = 0x10000000;
static const GLbitfield GL_MULTISAMPLE_BUFFER_BIT5_QCOM = 0x20000000;
static const GLbitfield GL_MULTISAMPLE_BUFFER_BIT6_QCOM = 0x40000000;
static const GLbitfield GL_MULTISAMPLE_BUFFER_BIT7_QCOM = 0x80000000;

// ClearBufferMask
static const GLbitfield GL_COVERAGE_BUFFER_BIT_NV = 0x00008000;

// ClientAttribMask
static const GLbitfield GL_CLIENT_PIXEL_STORE_BIT = 0x00000001;
static const GLbitfield GL_CLIENT_VERTEX_ARRAY_BIT = 0x00000002;
static const GLbitfield GL_CLIENT_ALL_ATTRIB_BITS = 0xFFFFFFFF;

// ContextFlagMask
static const GLbitfield GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 0x00000001;
static const GLbitfield GL_CONTEXT_FLAG_DEBUG_BIT = 0x00000002;
static const GLbitfield GL_CONTEXT_FLAG_DEBUG_BIT_KHR = 0x00000002;
static const GLbitfield GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB = 0x00000004;

// ContextProfileMask
static const GLbitfield GL_CONTEXT_CORE_PROFILE_BIT = 0x00000001;
static const GLbitfield GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = 0x00000002;

// FfdMaskSGIX
static const GLbitfield GL_TEXTURE_DEFORMATION_BIT_SGIX = 0x00000001;
static const GLbitfield GL_GEOMETRY_DEFORMATION_BIT_SGIX = 0x00000002;

// FragmentShaderColorModMaskATI
static const GLbitfield GL_COMP_BIT_ATI = 0x00000002;
static const GLbitfield GL_NEGATE_BIT_ATI = 0x00000004;
static const GLbitfield GL_BIAS_BIT_ATI = 0x00000008;

// FragmentShaderDestMaskATI
static const GLbitfield GL_RED_BIT_ATI = 0x00000001;
static const GLbitfield GL_GREEN_BIT_ATI = 0x00000002;
static const GLbitfield GL_BLUE_BIT_ATI = 0x00000004;

// FragmentShaderDestModMaskATI
static const GLbitfield GL_2X_BIT_ATI = 0x00000001;
static const GLbitfield GL_4X_BIT_ATI = 0x00000002;
static const GLbitfield GL_8X_BIT_ATI = 0x00000004;
static const GLbitfield GL_HALF_BIT_ATI = 0x00000008;
static const GLbitfield GL_QUARTER_BIT_ATI = 0x00000010;
static const GLbitfield GL_EIGHTH_BIT_ATI = 0x00000020;
static const GLbitfield GL_SATURATE_BIT_ATI = 0x00000040;

// MapBufferUsageMask
static const GLbitfield GL_MAP_READ_BIT = 0x0001;
static const GLbitfield GL_MAP_READ_BIT_EXT = 0x0001;
static const GLbitfield GL_MAP_WRITE_BIT = 0x0002;
static const GLbitfield GL_MAP_WRITE_BIT_EXT = 0x0002;
static const GLbitfield GL_MAP_INVALIDATE_RANGE_BIT = 0x0004;
static const GLbitfield GL_MAP_INVALIDATE_RANGE_BIT_EXT = 0x0004;
static const GLbitfield GL_MAP_INVALIDATE_BUFFER_BIT = 0x0008;
static const GLbitfield GL_MAP_INVALIDATE_BUFFER_BIT_EXT = 0x0008;
static const GLbitfield GL_MAP_FLUSH_EXPLICIT_BIT = 0x0010;
static const GLbitfield GL_MAP_FLUSH_EXPLICIT_BIT_EXT = 0x0010;
static const GLbitfield GL_MAP_UNSYNCHRONIZED_BIT = 0x0020;
static const GLbitfield GL_MAP_UNSYNCHRONIZED_BIT_EXT = 0x0020;
static const GLbitfield GL_MAP_PERSISTENT_BIT = 0x0040;
static const GLbitfield GL_MAP_COHERENT_BIT = 0x0080;
static const GLbitfield GL_DYNAMIC_STORAGE_BIT = 0x0100;
static const GLbitfield GL_CLIENT_STORAGE_BIT = 0x0200;

// MemoryBarrierMask
static const GLbitfield GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = 0x00000001;
static const GLbitfield GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT = 0x00000001;
static const GLbitfield GL_ELEMENT_ARRAY_BARRIER_BIT = 0x00000002;
static const GLbitfield GL_ELEMENT_ARRAY_BARRIER_BIT_EXT = 0x00000002;
static const GLbitfield GL_UNIFORM_BARRIER_BIT = 0x00000004;
static const GLbitfield GL_UNIFORM_BARRIER_BIT_EXT = 0x00000004;
static const GLbitfield GL_TEXTURE_FETCH_BARRIER_BIT = 0x00000008;
static const GLbitfield GL_TEXTURE_FETCH_BARRIER_BIT_EXT = 0x00000008;
static const GLbitfield GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV = 0x00000010;
static const GLbitfield GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = 0x00000020;
static const GLbitfield GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT = 0x00000020;
static const GLbitfield GL_COMMAND_BARRIER_BIT = 0x00000040;
static const GLbitfield GL_COMMAND_BARRIER_BIT_EXT = 0x00000040;
static const GLbitfield GL_PIXEL_BUFFER_BARRIER_BIT = 0x00000080;
static const GLbitfield GL_PIXEL_BUFFER_BARRIER_BIT_EXT = 0x00000080;
static const GLbitfield GL_TEXTURE_UPDATE_BARRIER_BIT = 0x00000100;
static const GLbitfield GL_TEXTURE_UPDATE_BARRIER_BIT_EXT = 0x00000100;
static const GLbitfield GL_BUFFER_UPDATE_BARRIER_BIT = 0x00000200;
static const GLbitfield GL_BUFFER_UPDATE_BARRIER_BIT_EXT = 0x00000200;
static const GLbitfield GL_FRAMEBUFFER_BARRIER_BIT = 0x00000400;
static const GLbitfield GL_FRAMEBUFFER_BARRIER_BIT_EXT = 0x00000400;
static const GLbitfield GL_TRANSFORM_FEEDBACK_BARRIER_BIT = 0x00000800;
static const GLbitfield GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT = 0x00000800;
static const GLbitfield GL_ATOMIC_COUNTER_BARRIER_BIT = 0x00001000;
static const GLbitfield GL_ATOMIC_COUNTER_BARRIER_BIT_EXT = 0x00001000;
static const GLbitfield GL_SHADER_STORAGE_BARRIER_BIT = 0x00002000;
static const GLbitfield GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT = 0x00004000;
static const GLbitfield GL_QUERY_BUFFER_BARRIER_BIT = 0x00008000;
static const GLbitfield GL_ALL_BARRIER_BITS = 0xFFFFFFFF;
static const GLbitfield GL_ALL_BARRIER_BITS_EXT = 0xFFFFFFFF;

// PathRenderingMaskNV
static const GLbitfield GL_FONT_X_MIN_BOUNDS_BIT_NV = 0x00010000;
static const GLbitfield GL_FONT_Y_MIN_BOUNDS_BIT_NV = 0x00020000;
static const GLbitfield GL_FONT_X_MAX_BOUNDS_BIT_NV = 0x00040000;
static const GLbitfield GL_FONT_Y_MAX_BOUNDS_BIT_NV = 0x00080000;
static const GLbitfield GL_FONT_UNITS_PER_EM_BIT_NV = 0x00100000;
static const GLbitfield GL_FONT_ASCENDER_BIT_NV = 0x00200000;
static const GLbitfield GL_FONT_DESCENDER_BIT_NV = 0x00400000;
static const GLbitfield GL_FONT_HEIGHT_BIT_NV = 0x00800000;
static const GLbitfield GL_BOLD_BIT_NV = 0x01;
static const GLbitfield GL_GLYPH_WIDTH_BIT_NV = 0x01;
static const GLbitfield GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV = 0x01000000;
static const GLbitfield GL_GLYPH_HEIGHT_BIT_NV = 0x02;
static const GLbitfield GL_ITALIC_BIT_NV = 0x02;
static const GLbitfield GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV = 0x02000000;
static const GLbitfield GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV = 0x04;
static const GLbitfield GL_FONT_UNDERLINE_POSITION_BIT_NV = 0x04000000;
static const GLbitfield GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV = 0x08;
static const GLbitfield GL_FONT_UNDERLINE_THICKNESS_BIT_NV = 0x08000000;
static const GLbitfield GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV = 0x10;
static const GLbitfield GL_GLYPH_HAS_KERNING_BIT_NV = 0x100;
static const GLbitfield GL_FONT_HAS_KERNING_BIT_NV = 0x10000000;
static const GLbitfield GL_GLYPH_VERTICAL_BEARING_X_BIT_NV = 0x20;
static const GLbitfield GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV = 0x40;
static const GLbitfield GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV = 0x80;

// PerformanceQueryCapsMaskINTEL
static const GLbitfield GL_PERFQUERY_SINGLE_CONTEXT_INTEL = 0x00000000;
static const GLbitfield GL_PERFQUERY_GLOBAL_CONTEXT_INTEL = 0x00000001;

// SyncObjectMask
static const GLbitfield GL_SYNC_FLUSH_COMMANDS_BIT = 0x00000001;
static const GLbitfield GL_SYNC_FLUSH_COMMANDS_BIT_APPLE = 0x00000001;

// TextureStorageMaskAMD
static const GLbitfield GL_TEXTURE_STORAGE_SPARSE_BIT_AMD = 0x00000001;

// TraceMaskMESA
static const GLbitfield GL_TRACE_OPERATIONS_BIT_MESA = 0x0001;
static const GLbitfield GL_TRACE_PRIMITIVES_BIT_MESA = 0x0002;
static const GLbitfield GL_TRACE_ARRAYS_BIT_MESA = 0x0004;
static const GLbitfield GL_TRACE_TEXTURES_BIT_MESA = 0x0008;
static const GLbitfield GL_TRACE_PIXELS_BIT_MESA = 0x0010;
static const GLbitfield GL_TRACE_ERRORS_BIT_MESA = 0x0020;
static const GLbitfield GL_TRACE_ALL_BITS_MESA = 0xFFFF;

// UseProgramStageMask
static const GLbitfield GL_VERTEX_SHADER_BIT = 0x00000001;
static const GLbitfield GL_VERTEX_SHADER_BIT_EXT = 0x00000001;
static const GLbitfield GL_FRAGMENT_SHADER_BIT = 0x00000002;
static const GLbitfield GL_FRAGMENT_SHADER_BIT_EXT = 0x00000002;
static const GLbitfield GL_GEOMETRY_SHADER_BIT = 0x00000004;
static const GLbitfield GL_GEOMETRY_SHADER_BIT_EXT = 0x00000004;
static const GLbitfield GL_TESS_CONTROL_SHADER_BIT = 0x00000008;
static const GLbitfield GL_TESS_CONTROL_SHADER_BIT_EXT = 0x00000008;
static const GLbitfield GL_TESS_EVALUATION_SHADER_BIT = 0x00000010;
static const GLbitfield GL_TESS_EVALUATION_SHADER_BIT_EXT = 0x00000010;
static const GLbitfield GL_COMPUTE_SHADER_BIT = 0x00000020;
static const GLbitfield GL_ALL_SHADER_BITS = 0xFFFFFFFF;
static const GLbitfield GL_ALL_SHADER_BITS_EXT = 0xFFFFFFFF;

// VertexHintsMaskPGI
static const GLbitfield GL_VERTEX23_BIT_PGI = 0x00000004;
static const GLbitfield GL_VERTEX4_BIT_PGI = 0x00000008;
static const GLbitfield GL_COLOR3_BIT_PGI = 0x00010000;
static const GLbitfield GL_COLOR4_BIT_PGI = 0x00020000;
static const GLbitfield GL_EDGEFLAG_BIT_PGI = 0x00040000;
static const GLbitfield GL_INDEX_BIT_PGI = 0x00080000;
static const GLbitfield GL_MAT_AMBIENT_BIT_PGI = 0x00100000;
static const GLbitfield GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI = 0x00200000;
static const GLbitfield GL_MAT_DIFFUSE_BIT_PGI = 0x00400000;
static const GLbitfield GL_MAT_EMISSION_BIT_PGI = 0x00800000;
static const GLbitfield GL_MAT_COLOR_INDEXES_BIT_PGI = 0x01000000;
static const GLbitfield GL_MAT_SHININESS_BIT_PGI = 0x02000000;
static const GLbitfield GL_MAT_SPECULAR_BIT_PGI = 0x04000000;
static const GLbitfield GL_NORMAL_BIT_PGI = 0x08000000;
static const GLbitfield GL_TEXCOORD1_BIT_PGI = 0x10000000;
static const GLbitfield GL_TEXCOORD2_BIT_PGI = 0x20000000;
static const GLbitfield GL_TEXCOORD3_BIT_PGI = 0x40000000;
static const GLbitfield GL_TEXCOORD4_BIT_PGI = 0x80000000;

} // namespace gl
