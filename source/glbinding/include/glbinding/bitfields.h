#pragma once

#include <glbinding/types.h>

namespace gl {

// AttribMask
constexpr GLbitfield CURRENT_BIT = 0x00000001;
constexpr GLbitfield POINT_BIT = 0x00000002;
constexpr GLbitfield LINE_BIT = 0x00000004;
constexpr GLbitfield POLYGON_BIT = 0x00000008;
constexpr GLbitfield POLYGON_STIPPLE_BIT = 0x00000010;
constexpr GLbitfield PIXEL_MODE_BIT = 0x00000020;
constexpr GLbitfield LIGHTING_BIT = 0x00000040;
constexpr GLbitfield FOG_BIT = 0x00000080;
constexpr GLbitfield DEPTH_BUFFER_BIT = 0x00000100;
constexpr GLbitfield ACCUM_BUFFER_BIT = 0x00000200;
constexpr GLbitfield STENCIL_BUFFER_BIT = 0x00000400;
constexpr GLbitfield VIEWPORT_BIT = 0x00000800;
constexpr GLbitfield TRANSFORM_BIT = 0x00001000;
constexpr GLbitfield ENABLE_BIT = 0x00002000;
constexpr GLbitfield COLOR_BUFFER_BIT = 0x00004000;
constexpr GLbitfield HINT_BIT = 0x00008000;
constexpr GLbitfield EVAL_BIT = 0x00010000;
constexpr GLbitfield LIST_BIT = 0x00020000;
constexpr GLbitfield TEXTURE_BIT = 0x00040000;
constexpr GLbitfield SCISSOR_BIT = 0x00080000;
constexpr GLbitfield MULTISAMPLE_BIT = 0x20000000;
constexpr GLbitfield MULTISAMPLE_BIT_3DFX = 0x20000000;
constexpr GLbitfield MULTISAMPLE_BIT_ARB = 0x20000000;
constexpr GLbitfield MULTISAMPLE_BIT_EXT = 0x20000000;
constexpr GLbitfield ALL_ATTRIB_BITS = 0xFFFFFFFF;

// BufferBitQCOM
constexpr GLbitfield COLOR_BUFFER_BIT0_QCOM = 0x00000001;
constexpr GLbitfield COLOR_BUFFER_BIT1_QCOM = 0x00000002;
constexpr GLbitfield COLOR_BUFFER_BIT2_QCOM = 0x00000004;
constexpr GLbitfield COLOR_BUFFER_BIT3_QCOM = 0x00000008;
constexpr GLbitfield COLOR_BUFFER_BIT4_QCOM = 0x00000010;
constexpr GLbitfield COLOR_BUFFER_BIT5_QCOM = 0x00000020;
constexpr GLbitfield COLOR_BUFFER_BIT6_QCOM = 0x00000040;
constexpr GLbitfield COLOR_BUFFER_BIT7_QCOM = 0x00000080;
constexpr GLbitfield DEPTH_BUFFER_BIT0_QCOM = 0x00000100;
constexpr GLbitfield DEPTH_BUFFER_BIT1_QCOM = 0x00000200;
constexpr GLbitfield DEPTH_BUFFER_BIT2_QCOM = 0x00000400;
constexpr GLbitfield DEPTH_BUFFER_BIT3_QCOM = 0x00000800;
constexpr GLbitfield DEPTH_BUFFER_BIT4_QCOM = 0x00001000;
constexpr GLbitfield DEPTH_BUFFER_BIT5_QCOM = 0x00002000;
constexpr GLbitfield DEPTH_BUFFER_BIT6_QCOM = 0x00004000;
constexpr GLbitfield DEPTH_BUFFER_BIT7_QCOM = 0x00008000;
constexpr GLbitfield STENCIL_BUFFER_BIT0_QCOM = 0x00010000;
constexpr GLbitfield STENCIL_BUFFER_BIT1_QCOM = 0x00020000;
constexpr GLbitfield STENCIL_BUFFER_BIT2_QCOM = 0x00040000;
constexpr GLbitfield STENCIL_BUFFER_BIT3_QCOM = 0x00080000;
constexpr GLbitfield STENCIL_BUFFER_BIT4_QCOM = 0x00100000;
constexpr GLbitfield STENCIL_BUFFER_BIT5_QCOM = 0x00200000;
constexpr GLbitfield STENCIL_BUFFER_BIT6_QCOM = 0x00400000;
constexpr GLbitfield STENCIL_BUFFER_BIT7_QCOM = 0x00800000;
constexpr GLbitfield MULTISAMPLE_BUFFER_BIT0_QCOM = 0x01000000;
constexpr GLbitfield MULTISAMPLE_BUFFER_BIT1_QCOM = 0x02000000;
constexpr GLbitfield MULTISAMPLE_BUFFER_BIT2_QCOM = 0x04000000;
constexpr GLbitfield MULTISAMPLE_BUFFER_BIT3_QCOM = 0x08000000;
constexpr GLbitfield MULTISAMPLE_BUFFER_BIT4_QCOM = 0x10000000;
constexpr GLbitfield MULTISAMPLE_BUFFER_BIT5_QCOM = 0x20000000;
constexpr GLbitfield MULTISAMPLE_BUFFER_BIT6_QCOM = 0x40000000;
constexpr GLbitfield MULTISAMPLE_BUFFER_BIT7_QCOM = 0x80000000;

// ClearBufferMask
constexpr GLbitfield COVERAGE_BUFFER_BIT_NV = 0x00008000;

// ClientAttribMask
constexpr GLbitfield CLIENT_PIXEL_STORE_BIT = 0x00000001;
constexpr GLbitfield CLIENT_VERTEX_ARRAY_BIT = 0x00000002;
constexpr GLbitfield CLIENT_ALL_ATTRIB_BITS = 0xFFFFFFFF;

// ContextFlagMask
constexpr GLbitfield CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 0x00000001;
constexpr GLbitfield CONTEXT_FLAG_DEBUG_BIT = 0x00000002;
constexpr GLbitfield CONTEXT_FLAG_DEBUG_BIT_KHR = 0x00000002;
constexpr GLbitfield CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB = 0x00000004;

// ContextProfileMask
constexpr GLbitfield CONTEXT_CORE_PROFILE_BIT = 0x00000001;
constexpr GLbitfield CONTEXT_COMPATIBILITY_PROFILE_BIT = 0x00000002;

// FfdMaskSGIX
constexpr GLbitfield TEXTURE_DEFORMATION_BIT_SGIX = 0x00000001;
constexpr GLbitfield GEOMETRY_DEFORMATION_BIT_SGIX = 0x00000002;

// FragmentShaderColorModMaskATI
constexpr GLbitfield COMP_BIT_ATI = 0x00000002;
constexpr GLbitfield NEGATE_BIT_ATI = 0x00000004;
constexpr GLbitfield BIAS_BIT_ATI = 0x00000008;

// FragmentShaderDestMaskATI
constexpr GLbitfield RED_BIT_ATI = 0x00000001;
constexpr GLbitfield GREEN_BIT_ATI = 0x00000002;
constexpr GLbitfield BLUE_BIT_ATI = 0x00000004;

// FragmentShaderDestModMaskATI
constexpr GLbitfield _2X_BIT_ATI = 0x00000001;
constexpr GLbitfield _4X_BIT_ATI = 0x00000002;
constexpr GLbitfield _8X_BIT_ATI = 0x00000004;
constexpr GLbitfield HALF_BIT_ATI = 0x00000008;
constexpr GLbitfield QUARTER_BIT_ATI = 0x00000010;
constexpr GLbitfield EIGHTH_BIT_ATI = 0x00000020;
constexpr GLbitfield SATURATE_BIT_ATI = 0x00000040;

// MapBufferUsageMask
constexpr GLbitfield MAP_READ_BIT = 0x0001;
constexpr GLbitfield MAP_READ_BIT_EXT = 0x0001;
constexpr GLbitfield MAP_WRITE_BIT = 0x0002;
constexpr GLbitfield MAP_WRITE_BIT_EXT = 0x0002;
constexpr GLbitfield MAP_INVALIDATE_RANGE_BIT = 0x0004;
constexpr GLbitfield MAP_INVALIDATE_RANGE_BIT_EXT = 0x0004;
constexpr GLbitfield MAP_INVALIDATE_BUFFER_BIT = 0x0008;
constexpr GLbitfield MAP_INVALIDATE_BUFFER_BIT_EXT = 0x0008;
constexpr GLbitfield MAP_FLUSH_EXPLICIT_BIT = 0x0010;
constexpr GLbitfield MAP_FLUSH_EXPLICIT_BIT_EXT = 0x0010;
constexpr GLbitfield MAP_UNSYNCHRONIZED_BIT = 0x0020;
constexpr GLbitfield MAP_UNSYNCHRONIZED_BIT_EXT = 0x0020;
constexpr GLbitfield MAP_PERSISTENT_BIT = 0x0040;
constexpr GLbitfield MAP_COHERENT_BIT = 0x0080;
constexpr GLbitfield DYNAMIC_STORAGE_BIT = 0x0100;
constexpr GLbitfield CLIENT_STORAGE_BIT = 0x0200;

// MemoryBarrierMask
constexpr GLbitfield VERTEX_ATTRIB_ARRAY_BARRIER_BIT = 0x00000001;
constexpr GLbitfield VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT = 0x00000001;
constexpr GLbitfield ELEMENT_ARRAY_BARRIER_BIT = 0x00000002;
constexpr GLbitfield ELEMENT_ARRAY_BARRIER_BIT_EXT = 0x00000002;
constexpr GLbitfield UNIFORM_BARRIER_BIT = 0x00000004;
constexpr GLbitfield UNIFORM_BARRIER_BIT_EXT = 0x00000004;
constexpr GLbitfield TEXTURE_FETCH_BARRIER_BIT = 0x00000008;
constexpr GLbitfield TEXTURE_FETCH_BARRIER_BIT_EXT = 0x00000008;
constexpr GLbitfield SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV = 0x00000010;
constexpr GLbitfield SHADER_IMAGE_ACCESS_BARRIER_BIT = 0x00000020;
constexpr GLbitfield SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT = 0x00000020;
constexpr GLbitfield COMMAND_BARRIER_BIT = 0x00000040;
constexpr GLbitfield COMMAND_BARRIER_BIT_EXT = 0x00000040;
constexpr GLbitfield PIXEL_BUFFER_BARRIER_BIT = 0x00000080;
constexpr GLbitfield PIXEL_BUFFER_BARRIER_BIT_EXT = 0x00000080;
constexpr GLbitfield TEXTURE_UPDATE_BARRIER_BIT = 0x00000100;
constexpr GLbitfield TEXTURE_UPDATE_BARRIER_BIT_EXT = 0x00000100;
constexpr GLbitfield BUFFER_UPDATE_BARRIER_BIT = 0x00000200;
constexpr GLbitfield BUFFER_UPDATE_BARRIER_BIT_EXT = 0x00000200;
constexpr GLbitfield FRAMEBUFFER_BARRIER_BIT = 0x00000400;
constexpr GLbitfield FRAMEBUFFER_BARRIER_BIT_EXT = 0x00000400;
constexpr GLbitfield TRANSFORM_FEEDBACK_BARRIER_BIT = 0x00000800;
constexpr GLbitfield TRANSFORM_FEEDBACK_BARRIER_BIT_EXT = 0x00000800;
constexpr GLbitfield ATOMIC_COUNTER_BARRIER_BIT = 0x00001000;
constexpr GLbitfield ATOMIC_COUNTER_BARRIER_BIT_EXT = 0x00001000;
constexpr GLbitfield SHADER_STORAGE_BARRIER_BIT = 0x00002000;
constexpr GLbitfield CLIENT_MAPPED_BUFFER_BARRIER_BIT = 0x00004000;
constexpr GLbitfield QUERY_BUFFER_BARRIER_BIT = 0x00008000;
constexpr GLbitfield ALL_BARRIER_BITS = 0xFFFFFFFF;
constexpr GLbitfield ALL_BARRIER_BITS_EXT = 0xFFFFFFFF;

// PathRenderingMaskNV
constexpr GLbitfield FONT_X_MIN_BOUNDS_BIT_NV = 0x00010000;
constexpr GLbitfield FONT_Y_MIN_BOUNDS_BIT_NV = 0x00020000;
constexpr GLbitfield FONT_X_MAX_BOUNDS_BIT_NV = 0x00040000;
constexpr GLbitfield FONT_Y_MAX_BOUNDS_BIT_NV = 0x00080000;
constexpr GLbitfield FONT_UNITS_PER_EM_BIT_NV = 0x00100000;
constexpr GLbitfield FONT_ASCENDER_BIT_NV = 0x00200000;
constexpr GLbitfield FONT_DESCENDER_BIT_NV = 0x00400000;
constexpr GLbitfield FONT_HEIGHT_BIT_NV = 0x00800000;
constexpr GLbitfield BOLD_BIT_NV = 0x01;
constexpr GLbitfield GLYPH_WIDTH_BIT_NV = 0x01;
constexpr GLbitfield FONT_MAX_ADVANCE_WIDTH_BIT_NV = 0x01000000;
constexpr GLbitfield GLYPH_HEIGHT_BIT_NV = 0x02;
constexpr GLbitfield ITALIC_BIT_NV = 0x02;
constexpr GLbitfield FONT_MAX_ADVANCE_HEIGHT_BIT_NV = 0x02000000;
constexpr GLbitfield GLYPH_HORIZONTAL_BEARING_X_BIT_NV = 0x04;
constexpr GLbitfield FONT_UNDERLINE_POSITION_BIT_NV = 0x04000000;
constexpr GLbitfield GLYPH_HORIZONTAL_BEARING_Y_BIT_NV = 0x08;
constexpr GLbitfield FONT_UNDERLINE_THICKNESS_BIT_NV = 0x08000000;
constexpr GLbitfield GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV = 0x10;
constexpr GLbitfield GLYPH_HAS_KERNING_BIT_NV = 0x100;
constexpr GLbitfield FONT_HAS_KERNING_BIT_NV = 0x10000000;
constexpr GLbitfield GLYPH_VERTICAL_BEARING_X_BIT_NV = 0x20;
constexpr GLbitfield GLYPH_VERTICAL_BEARING_Y_BIT_NV = 0x40;
constexpr GLbitfield GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV = 0x80;

// PerformanceQueryCapsMaskINTEL
constexpr GLbitfield PERFQUERY_SINGLE_CONTEXT_INTEL = 0x00000000;
constexpr GLbitfield PERFQUERY_GLOBAL_CONTEXT_INTEL = 0x00000001;

// SyncObjectMask
constexpr GLbitfield SYNC_FLUSH_COMMANDS_BIT = 0x00000001;
constexpr GLbitfield SYNC_FLUSH_COMMANDS_BIT_APPLE = 0x00000001;

// TextureStorageMaskAMD
constexpr GLbitfield TEXTURE_STORAGE_SPARSE_BIT_AMD = 0x00000001;

// TraceMaskMESA
constexpr GLbitfield TRACE_OPERATIONS_BIT_MESA = 0x0001;
constexpr GLbitfield TRACE_PRIMITIVES_BIT_MESA = 0x0002;
constexpr GLbitfield TRACE_ARRAYS_BIT_MESA = 0x0004;
constexpr GLbitfield TRACE_TEXTURES_BIT_MESA = 0x0008;
constexpr GLbitfield TRACE_PIXELS_BIT_MESA = 0x0010;
constexpr GLbitfield TRACE_ERRORS_BIT_MESA = 0x0020;
constexpr GLbitfield TRACE_ALL_BITS_MESA = 0xFFFF;

// UseProgramStageMask
constexpr GLbitfield VERTEX_SHADER_BIT = 0x00000001;
constexpr GLbitfield VERTEX_SHADER_BIT_EXT = 0x00000001;
constexpr GLbitfield FRAGMENT_SHADER_BIT = 0x00000002;
constexpr GLbitfield FRAGMENT_SHADER_BIT_EXT = 0x00000002;
constexpr GLbitfield GEOMETRY_SHADER_BIT = 0x00000004;
constexpr GLbitfield GEOMETRY_SHADER_BIT_EXT = 0x00000004;
constexpr GLbitfield TESS_CONTROL_SHADER_BIT = 0x00000008;
constexpr GLbitfield TESS_CONTROL_SHADER_BIT_EXT = 0x00000008;
constexpr GLbitfield TESS_EVALUATION_SHADER_BIT = 0x00000010;
constexpr GLbitfield TESS_EVALUATION_SHADER_BIT_EXT = 0x00000010;
constexpr GLbitfield COMPUTE_SHADER_BIT = 0x00000020;
constexpr GLbitfield ALL_SHADER_BITS = 0xFFFFFFFF;
constexpr GLbitfield ALL_SHADER_BITS_EXT = 0xFFFFFFFF;

// VertexHintsMaskPGI
constexpr GLbitfield VERTEX23_BIT_PGI = 0x00000004;
constexpr GLbitfield VERTEX4_BIT_PGI = 0x00000008;
constexpr GLbitfield COLOR3_BIT_PGI = 0x00010000;
constexpr GLbitfield COLOR4_BIT_PGI = 0x00020000;
constexpr GLbitfield EDGEFLAG_BIT_PGI = 0x00040000;
constexpr GLbitfield INDEX_BIT_PGI = 0x00080000;
constexpr GLbitfield MAT_AMBIENT_BIT_PGI = 0x00100000;
constexpr GLbitfield MAT_AMBIENT_AND_DIFFUSE_BIT_PGI = 0x00200000;
constexpr GLbitfield MAT_DIFFUSE_BIT_PGI = 0x00400000;
constexpr GLbitfield MAT_EMISSION_BIT_PGI = 0x00800000;
constexpr GLbitfield MAT_COLOR_INDEXES_BIT_PGI = 0x01000000;
constexpr GLbitfield MAT_SHININESS_BIT_PGI = 0x02000000;
constexpr GLbitfield MAT_SPECULAR_BIT_PGI = 0x04000000;
constexpr GLbitfield NORMAL_BIT_PGI = 0x08000000;
constexpr GLbitfield TEXCOORD1_BIT_PGI = 0x10000000;
constexpr GLbitfield TEXCOORD2_BIT_PGI = 0x20000000;
constexpr GLbitfield TEXCOORD3_BIT_PGI = 0x40000000;
constexpr GLbitfield TEXCOORD4_BIT_PGI = 0x80000000;

} // namespace gl
