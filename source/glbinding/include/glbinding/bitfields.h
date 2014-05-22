#pragma once

#include <glbinding/types.h>

namespace gl {

// AttribMask
static const GLbitfield CURRENT_BIT = 0x00000001;
static const GLbitfield POINT_BIT = 0x00000002;
static const GLbitfield LINE_BIT = 0x00000004;
static const GLbitfield POLYGON_BIT = 0x00000008;
static const GLbitfield POLYGON_STIPPLE_BIT = 0x00000010;
static const GLbitfield PIXEL_MODE_BIT = 0x00000020;
static const GLbitfield LIGHTING_BIT = 0x00000040;
static const GLbitfield FOG_BIT = 0x00000080;
static const GLbitfield DEPTH_BUFFER_BIT = 0x00000100;
static const GLbitfield ACCUM_BUFFER_BIT = 0x00000200;
static const GLbitfield STENCIL_BUFFER_BIT = 0x00000400;
static const GLbitfield VIEWPORT_BIT = 0x00000800;
static const GLbitfield TRANSFORM_BIT = 0x00001000;
static const GLbitfield ENABLE_BIT = 0x00002000;
static const GLbitfield COLOR_BUFFER_BIT = 0x00004000;
static const GLbitfield HINT_BIT = 0x00008000;
static const GLbitfield EVAL_BIT = 0x00010000;
static const GLbitfield LIST_BIT = 0x00020000;
static const GLbitfield TEXTURE_BIT = 0x00040000;
static const GLbitfield SCISSOR_BIT = 0x00080000;
static const GLbitfield MULTISAMPLE_BIT = 0x20000000;
static const GLbitfield MULTISAMPLE_BIT_3DFX = 0x20000000;
static const GLbitfield MULTISAMPLE_BIT_ARB = 0x20000000;
static const GLbitfield MULTISAMPLE_BIT_EXT = 0x20000000;
static const GLbitfield ALL_ATTRIB_BITS = 0xFFFFFFFF;

// BufferBitQCOM
static const GLbitfield COLOR_BUFFER_BIT0_QCOM = 0x00000001;
static const GLbitfield COLOR_BUFFER_BIT1_QCOM = 0x00000002;
static const GLbitfield COLOR_BUFFER_BIT2_QCOM = 0x00000004;
static const GLbitfield COLOR_BUFFER_BIT3_QCOM = 0x00000008;
static const GLbitfield COLOR_BUFFER_BIT4_QCOM = 0x00000010;
static const GLbitfield COLOR_BUFFER_BIT5_QCOM = 0x00000020;
static const GLbitfield COLOR_BUFFER_BIT6_QCOM = 0x00000040;
static const GLbitfield COLOR_BUFFER_BIT7_QCOM = 0x00000080;
static const GLbitfield DEPTH_BUFFER_BIT0_QCOM = 0x00000100;
static const GLbitfield DEPTH_BUFFER_BIT1_QCOM = 0x00000200;
static const GLbitfield DEPTH_BUFFER_BIT2_QCOM = 0x00000400;
static const GLbitfield DEPTH_BUFFER_BIT3_QCOM = 0x00000800;
static const GLbitfield DEPTH_BUFFER_BIT4_QCOM = 0x00001000;
static const GLbitfield DEPTH_BUFFER_BIT5_QCOM = 0x00002000;
static const GLbitfield DEPTH_BUFFER_BIT6_QCOM = 0x00004000;
static const GLbitfield DEPTH_BUFFER_BIT7_QCOM = 0x00008000;
static const GLbitfield STENCIL_BUFFER_BIT0_QCOM = 0x00010000;
static const GLbitfield STENCIL_BUFFER_BIT1_QCOM = 0x00020000;
static const GLbitfield STENCIL_BUFFER_BIT2_QCOM = 0x00040000;
static const GLbitfield STENCIL_BUFFER_BIT3_QCOM = 0x00080000;
static const GLbitfield STENCIL_BUFFER_BIT4_QCOM = 0x00100000;
static const GLbitfield STENCIL_BUFFER_BIT5_QCOM = 0x00200000;
static const GLbitfield STENCIL_BUFFER_BIT6_QCOM = 0x00400000;
static const GLbitfield STENCIL_BUFFER_BIT7_QCOM = 0x00800000;
static const GLbitfield MULTISAMPLE_BUFFER_BIT0_QCOM = 0x01000000;
static const GLbitfield MULTISAMPLE_BUFFER_BIT1_QCOM = 0x02000000;
static const GLbitfield MULTISAMPLE_BUFFER_BIT2_QCOM = 0x04000000;
static const GLbitfield MULTISAMPLE_BUFFER_BIT3_QCOM = 0x08000000;
static const GLbitfield MULTISAMPLE_BUFFER_BIT4_QCOM = 0x10000000;
static const GLbitfield MULTISAMPLE_BUFFER_BIT5_QCOM = 0x20000000;
static const GLbitfield MULTISAMPLE_BUFFER_BIT6_QCOM = 0x40000000;
static const GLbitfield MULTISAMPLE_BUFFER_BIT7_QCOM = 0x80000000;

// ClearBufferMask
static const GLbitfield COVERAGE_BUFFER_BIT_NV = 0x00008000;

// ClientAttribMask
static const GLbitfield CLIENT_PIXEL_STORE_BIT = 0x00000001;
static const GLbitfield CLIENT_VERTEX_ARRAY_BIT = 0x00000002;
static const GLbitfield CLIENT_ALL_ATTRIB_BITS = 0xFFFFFFFF;

// ContextFlagMask
static const GLbitfield CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 0x00000001;
static const GLbitfield CONTEXT_FLAG_DEBUG_BIT = 0x00000002;
static const GLbitfield CONTEXT_FLAG_DEBUG_BIT_KHR = 0x00000002;
static const GLbitfield CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB = 0x00000004;

// ContextProfileMask
static const GLbitfield CONTEXT_CORE_PROFILE_BIT = 0x00000001;
static const GLbitfield CONTEXT_COMPATIBILITY_PROFILE_BIT = 0x00000002;

// FfdMaskSGIX
static const GLbitfield TEXTURE_DEFORMATION_BIT_SGIX = 0x00000001;
static const GLbitfield GEOMETRY_DEFORMATION_BIT_SGIX = 0x00000002;

// FragmentShaderColorModMaskATI
static const GLbitfield COMP_BIT_ATI = 0x00000002;
static const GLbitfield NEGATE_BIT_ATI = 0x00000004;
static const GLbitfield BIAS_BIT_ATI = 0x00000008;

// FragmentShaderDestMaskATI
static const GLbitfield RED_BIT_ATI = 0x00000001;
static const GLbitfield GREEN_BIT_ATI = 0x00000002;
static const GLbitfield BLUE_BIT_ATI = 0x00000004;

// FragmentShaderDestModMaskATI
static const GLbitfield _2X_BIT_ATI = 0x00000001;
static const GLbitfield _4X_BIT_ATI = 0x00000002;
static const GLbitfield _8X_BIT_ATI = 0x00000004;
static const GLbitfield HALF_BIT_ATI = 0x00000008;
static const GLbitfield QUARTER_BIT_ATI = 0x00000010;
static const GLbitfield EIGHTH_BIT_ATI = 0x00000020;
static const GLbitfield SATURATE_BIT_ATI = 0x00000040;

// MapBufferUsageMask
static const GLbitfield MAP_READ_BIT = 0x0001;
static const GLbitfield MAP_READ_BIT_EXT = 0x0001;
static const GLbitfield MAP_WRITE_BIT = 0x0002;
static const GLbitfield MAP_WRITE_BIT_EXT = 0x0002;
static const GLbitfield MAP_INVALIDATE_RANGE_BIT = 0x0004;
static const GLbitfield MAP_INVALIDATE_RANGE_BIT_EXT = 0x0004;
static const GLbitfield MAP_INVALIDATE_BUFFER_BIT = 0x0008;
static const GLbitfield MAP_INVALIDATE_BUFFER_BIT_EXT = 0x0008;
static const GLbitfield MAP_FLUSH_EXPLICIT_BIT = 0x0010;
static const GLbitfield MAP_FLUSH_EXPLICIT_BIT_EXT = 0x0010;
static const GLbitfield MAP_UNSYNCHRONIZED_BIT = 0x0020;
static const GLbitfield MAP_UNSYNCHRONIZED_BIT_EXT = 0x0020;
static const GLbitfield MAP_PERSISTENT_BIT = 0x0040;
static const GLbitfield MAP_COHERENT_BIT = 0x0080;
static const GLbitfield DYNAMIC_STORAGE_BIT = 0x0100;
static const GLbitfield CLIENT_STORAGE_BIT = 0x0200;

// MemoryBarrierMask
static const GLbitfield VERTEX_ATTRIB_ARRAY_BARRIER_BIT = 0x00000001;
static const GLbitfield VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT = 0x00000001;
static const GLbitfield ELEMENT_ARRAY_BARRIER_BIT = 0x00000002;
static const GLbitfield ELEMENT_ARRAY_BARRIER_BIT_EXT = 0x00000002;
static const GLbitfield UNIFORM_BARRIER_BIT = 0x00000004;
static const GLbitfield UNIFORM_BARRIER_BIT_EXT = 0x00000004;
static const GLbitfield TEXTURE_FETCH_BARRIER_BIT = 0x00000008;
static const GLbitfield TEXTURE_FETCH_BARRIER_BIT_EXT = 0x00000008;
static const GLbitfield SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV = 0x00000010;
static const GLbitfield SHADER_IMAGE_ACCESS_BARRIER_BIT = 0x00000020;
static const GLbitfield SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT = 0x00000020;
static const GLbitfield COMMAND_BARRIER_BIT = 0x00000040;
static const GLbitfield COMMAND_BARRIER_BIT_EXT = 0x00000040;
static const GLbitfield PIXEL_BUFFER_BARRIER_BIT = 0x00000080;
static const GLbitfield PIXEL_BUFFER_BARRIER_BIT_EXT = 0x00000080;
static const GLbitfield TEXTURE_UPDATE_BARRIER_BIT = 0x00000100;
static const GLbitfield TEXTURE_UPDATE_BARRIER_BIT_EXT = 0x00000100;
static const GLbitfield BUFFER_UPDATE_BARRIER_BIT = 0x00000200;
static const GLbitfield BUFFER_UPDATE_BARRIER_BIT_EXT = 0x00000200;
static const GLbitfield FRAMEBUFFER_BARRIER_BIT = 0x00000400;
static const GLbitfield FRAMEBUFFER_BARRIER_BIT_EXT = 0x00000400;
static const GLbitfield TRANSFORM_FEEDBACK_BARRIER_BIT = 0x00000800;
static const GLbitfield TRANSFORM_FEEDBACK_BARRIER_BIT_EXT = 0x00000800;
static const GLbitfield ATOMIC_COUNTER_BARRIER_BIT = 0x00001000;
static const GLbitfield ATOMIC_COUNTER_BARRIER_BIT_EXT = 0x00001000;
static const GLbitfield SHADER_STORAGE_BARRIER_BIT = 0x00002000;
static const GLbitfield CLIENT_MAPPED_BUFFER_BARRIER_BIT = 0x00004000;
static const GLbitfield QUERY_BUFFER_BARRIER_BIT = 0x00008000;
static const GLbitfield ALL_BARRIER_BITS = 0xFFFFFFFF;
static const GLbitfield ALL_BARRIER_BITS_EXT = 0xFFFFFFFF;

// PathRenderingMaskNV
static const GLbitfield FONT_X_MIN_BOUNDS_BIT_NV = 0x00010000;
static const GLbitfield FONT_Y_MIN_BOUNDS_BIT_NV = 0x00020000;
static const GLbitfield FONT_X_MAX_BOUNDS_BIT_NV = 0x00040000;
static const GLbitfield FONT_Y_MAX_BOUNDS_BIT_NV = 0x00080000;
static const GLbitfield FONT_UNITS_PER_EM_BIT_NV = 0x00100000;
static const GLbitfield FONT_ASCENDER_BIT_NV = 0x00200000;
static const GLbitfield FONT_DESCENDER_BIT_NV = 0x00400000;
static const GLbitfield FONT_HEIGHT_BIT_NV = 0x00800000;
static const GLbitfield BOLD_BIT_NV = 0x01;
static const GLbitfield GLYPH_WIDTH_BIT_NV = 0x01;
static const GLbitfield FONT_MAX_ADVANCE_WIDTH_BIT_NV = 0x01000000;
static const GLbitfield GLYPH_HEIGHT_BIT_NV = 0x02;
static const GLbitfield ITALIC_BIT_NV = 0x02;
static const GLbitfield FONT_MAX_ADVANCE_HEIGHT_BIT_NV = 0x02000000;
static const GLbitfield GLYPH_HORIZONTAL_BEARING_X_BIT_NV = 0x04;
static const GLbitfield FONT_UNDERLINE_POSITION_BIT_NV = 0x04000000;
static const GLbitfield GLYPH_HORIZONTAL_BEARING_Y_BIT_NV = 0x08;
static const GLbitfield FONT_UNDERLINE_THICKNESS_BIT_NV = 0x08000000;
static const GLbitfield GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV = 0x10;
static const GLbitfield GLYPH_HAS_KERNING_BIT_NV = 0x100;
static const GLbitfield FONT_HAS_KERNING_BIT_NV = 0x10000000;
static const GLbitfield GLYPH_VERTICAL_BEARING_X_BIT_NV = 0x20;
static const GLbitfield GLYPH_VERTICAL_BEARING_Y_BIT_NV = 0x40;
static const GLbitfield GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV = 0x80;

// PerformanceQueryCapsMaskINTEL
static const GLbitfield PERFQUERY_SINGLE_CONTEXT_INTEL = 0x00000000;
static const GLbitfield PERFQUERY_GLOBAL_CONTEXT_INTEL = 0x00000001;

// SyncObjectMask
static const GLbitfield SYNC_FLUSH_COMMANDS_BIT = 0x00000001;
static const GLbitfield SYNC_FLUSH_COMMANDS_BIT_APPLE = 0x00000001;

// TextureStorageMaskAMD
static const GLbitfield TEXTURE_STORAGE_SPARSE_BIT_AMD = 0x00000001;

// TraceMaskMESA
static const GLbitfield TRACE_OPERATIONS_BIT_MESA = 0x0001;
static const GLbitfield TRACE_PRIMITIVES_BIT_MESA = 0x0002;
static const GLbitfield TRACE_ARRAYS_BIT_MESA = 0x0004;
static const GLbitfield TRACE_TEXTURES_BIT_MESA = 0x0008;
static const GLbitfield TRACE_PIXELS_BIT_MESA = 0x0010;
static const GLbitfield TRACE_ERRORS_BIT_MESA = 0x0020;
static const GLbitfield TRACE_ALL_BITS_MESA = 0xFFFF;

// UseProgramStageMask
static const GLbitfield VERTEX_SHADER_BIT = 0x00000001;
static const GLbitfield VERTEX_SHADER_BIT_EXT = 0x00000001;
static const GLbitfield FRAGMENT_SHADER_BIT = 0x00000002;
static const GLbitfield FRAGMENT_SHADER_BIT_EXT = 0x00000002;
static const GLbitfield GEOMETRY_SHADER_BIT = 0x00000004;
static const GLbitfield GEOMETRY_SHADER_BIT_EXT = 0x00000004;
static const GLbitfield TESS_CONTROL_SHADER_BIT = 0x00000008;
static const GLbitfield TESS_CONTROL_SHADER_BIT_EXT = 0x00000008;
static const GLbitfield TESS_EVALUATION_SHADER_BIT = 0x00000010;
static const GLbitfield TESS_EVALUATION_SHADER_BIT_EXT = 0x00000010;
static const GLbitfield COMPUTE_SHADER_BIT = 0x00000020;
static const GLbitfield ALL_SHADER_BITS = 0xFFFFFFFF;
static const GLbitfield ALL_SHADER_BITS_EXT = 0xFFFFFFFF;

// VertexHintsMaskPGI
static const GLbitfield VERTEX23_BIT_PGI = 0x00000004;
static const GLbitfield VERTEX4_BIT_PGI = 0x00000008;
static const GLbitfield COLOR3_BIT_PGI = 0x00010000;
static const GLbitfield COLOR4_BIT_PGI = 0x00020000;
static const GLbitfield EDGEFLAG_BIT_PGI = 0x00040000;
static const GLbitfield INDEX_BIT_PGI = 0x00080000;
static const GLbitfield MAT_AMBIENT_BIT_PGI = 0x00100000;
static const GLbitfield MAT_AMBIENT_AND_DIFFUSE_BIT_PGI = 0x00200000;
static const GLbitfield MAT_DIFFUSE_BIT_PGI = 0x00400000;
static const GLbitfield MAT_EMISSION_BIT_PGI = 0x00800000;
static const GLbitfield MAT_COLOR_INDEXES_BIT_PGI = 0x01000000;
static const GLbitfield MAT_SHININESS_BIT_PGI = 0x02000000;
static const GLbitfield MAT_SPECULAR_BIT_PGI = 0x04000000;
static const GLbitfield NORMAL_BIT_PGI = 0x08000000;
static const GLbitfield TEXCOORD1_BIT_PGI = 0x10000000;
static const GLbitfield TEXCOORD2_BIT_PGI = 0x20000000;
static const GLbitfield TEXCOORD3_BIT_PGI = 0x40000000;
static const GLbitfield TEXCOORD4_BIT_PGI = 0x80000000;

} // namespace gl
