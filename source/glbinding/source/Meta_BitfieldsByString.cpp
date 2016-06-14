
#include "Meta_Maps.h"

#include <glbinding/gl/bitfield.h>


using namespace gl;

namespace glbinding
{


const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_0 =
{
    { "GL_2X_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestModMaskATI::GL_2X_BIT_ATI) },
    { "GL_4X_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestModMaskATI::GL_4X_BIT_ATI) },
    { "GL_8X_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestModMaskATI::GL_8X_BIT_ATI) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_A =
{
    { "GL_ACCUM_BUFFER_BIT", static_cast<GLbitfield>(AttribMask::GL_ACCUM_BUFFER_BIT) },
    { "GL_ALL_ATTRIB_BITS", static_cast<GLbitfield>(AttribMask::GL_ALL_ATTRIB_BITS) },
    { "GL_ALL_BARRIER_BITS", static_cast<GLbitfield>(MemoryBarrierMask::GL_ALL_BARRIER_BITS) },
    { "GL_ALL_BARRIER_BITS_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_ALL_BARRIER_BITS_EXT) },
    { "GL_ALL_SHADER_BITS", static_cast<GLbitfield>(UseProgramStageMask::GL_ALL_SHADER_BITS) },
    { "GL_ATOMIC_COUNTER_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT) },
    { "GL_ATOMIC_COUNTER_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT_EXT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_B =
{
    { "GL_BIAS_BIT_ATI", static_cast<GLbitfield>(FragmentShaderColorModMaskATI::GL_BIAS_BIT_ATI) },
    { "GL_BLUE_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestMaskATI::GL_BLUE_BIT_ATI) },
    { "GL_BOLD_BIT_NV", static_cast<GLbitfield>(PathFontStyle::GL_BOLD_BIT_NV) },
    { "GL_BUFFER_UPDATE_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT) },
    { "GL_BUFFER_UPDATE_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT_EXT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_C =
{
    { "GL_CLIENT_ALL_ATTRIB_BITS", static_cast<GLbitfield>(ClientAttribMask::GL_CLIENT_ALL_ATTRIB_BITS) },
    { "GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT) },
    { "GL_CLIENT_PIXEL_STORE_BIT", static_cast<GLbitfield>(ClientAttribMask::GL_CLIENT_PIXEL_STORE_BIT) },
    { "GL_CLIENT_STORAGE_BIT", static_cast<GLbitfield>(BufferStorageMask::GL_CLIENT_STORAGE_BIT) },
    { "GL_CLIENT_VERTEX_ARRAY_BIT", static_cast<GLbitfield>(ClientAttribMask::GL_CLIENT_VERTEX_ARRAY_BIT) },
    { "GL_COLOR3_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_COLOR3_BIT_PGI) },
    { "GL_COLOR4_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_COLOR4_BIT_PGI) },
    { "GL_COLOR_BUFFER_BIT", static_cast<GLbitfield>(AttribMask::GL_COLOR_BUFFER_BIT) },
    { "GL_COMMAND_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_COMMAND_BARRIER_BIT) },
    { "GL_COMMAND_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_COMMAND_BARRIER_BIT_EXT) },
    { "GL_COMPUTE_SHADER_BIT", static_cast<GLbitfield>(UseProgramStageMask::GL_COMPUTE_SHADER_BIT) },
    { "GL_COMP_BIT_ATI", static_cast<GLbitfield>(FragmentShaderColorModMaskATI::GL_COMP_BIT_ATI) },
    { "GL_CONTEXT_COMPATIBILITY_PROFILE_BIT", static_cast<GLbitfield>(ContextProfileMask::GL_CONTEXT_COMPATIBILITY_PROFILE_BIT) },
    { "GL_CONTEXT_CORE_PROFILE_BIT", static_cast<GLbitfield>(ContextProfileMask::GL_CONTEXT_CORE_PROFILE_BIT) },
    { "GL_CONTEXT_FLAG_DEBUG_BIT", static_cast<GLbitfield>(ContextFlagMask::GL_CONTEXT_FLAG_DEBUG_BIT) },
    { "GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT", static_cast<GLbitfield>(ContextFlagMask::GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT) },
    { "GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR", static_cast<GLbitfield>(ContextFlagMask::GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR) },
    { "GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT", static_cast<GLbitfield>(ContextFlagMask::GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT) },
    { "GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB", static_cast<GLbitfield>(ContextFlagMask::GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB) },
    { "GL_COVERAGE_BUFFER_BIT_NV", static_cast<GLbitfield>(ClearBufferMask::GL_COVERAGE_BUFFER_BIT_NV) },
    { "GL_CURRENT_BIT", static_cast<GLbitfield>(AttribMask::GL_CURRENT_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_D =
{
    { "GL_DEPTH_BUFFER_BIT", static_cast<GLbitfield>(AttribMask::GL_DEPTH_BUFFER_BIT) },
    { "GL_DYNAMIC_STORAGE_BIT", static_cast<GLbitfield>(BufferStorageMask::GL_DYNAMIC_STORAGE_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_E =
{
    { "GL_EDGEFLAG_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_EDGEFLAG_BIT_PGI) },
    { "GL_EIGHTH_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestModMaskATI::GL_EIGHTH_BIT_ATI) },
    { "GL_ELEMENT_ARRAY_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT) },
    { "GL_ELEMENT_ARRAY_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT_EXT) },
    { "GL_ENABLE_BIT", static_cast<GLbitfield>(AttribMask::GL_ENABLE_BIT) },
    { "GL_EVAL_BIT", static_cast<GLbitfield>(AttribMask::GL_EVAL_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_F =
{
    { "GL_FOG_BIT", static_cast<GLbitfield>(AttribMask::GL_FOG_BIT) },
    { "GL_FONT_ASCENDER_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_ASCENDER_BIT_NV) },
    { "GL_FONT_DESCENDER_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_DESCENDER_BIT_NV) },
    { "GL_FONT_HAS_KERNING_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_HAS_KERNING_BIT_NV) },
    { "GL_FONT_HEIGHT_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_HEIGHT_BIT_NV) },
    { "GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV) },
    { "GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV) },
    { "GL_FONT_NUM_GLYPH_INDICES_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_NUM_GLYPH_INDICES_BIT_NV) },
    { "GL_FONT_UNDERLINE_POSITION_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_UNDERLINE_POSITION_BIT_NV) },
    { "GL_FONT_UNDERLINE_THICKNESS_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_UNDERLINE_THICKNESS_BIT_NV) },
    { "GL_FONT_UNITS_PER_EM_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_UNITS_PER_EM_BIT_NV) },
    { "GL_FONT_X_MAX_BOUNDS_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_X_MAX_BOUNDS_BIT_NV) },
    { "GL_FONT_X_MIN_BOUNDS_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_X_MIN_BOUNDS_BIT_NV) },
    { "GL_FONT_Y_MAX_BOUNDS_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_Y_MAX_BOUNDS_BIT_NV) },
    { "GL_FONT_Y_MIN_BOUNDS_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_FONT_Y_MIN_BOUNDS_BIT_NV) },
    { "GL_FRAGMENT_SHADER_BIT", static_cast<GLbitfield>(UseProgramStageMask::GL_FRAGMENT_SHADER_BIT) },
    { "GL_FRAMEBUFFER_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT) },
    { "GL_FRAMEBUFFER_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT_EXT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_G =
{
    { "GL_GEOMETRY_DEFORMATION_BIT_SGIX", static_cast<GLbitfield>(FfdMaskSGIX::GL_GEOMETRY_DEFORMATION_BIT_SGIX) },
    { "GL_GEOMETRY_SHADER_BIT", static_cast<GLbitfield>(UseProgramStageMask::GL_GEOMETRY_SHADER_BIT) },
    { "GL_GLYPH_HAS_KERNING_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_GLYPH_HAS_KERNING_BIT_NV) },
    { "GL_GLYPH_HEIGHT_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_GLYPH_HEIGHT_BIT_NV) },
    { "GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV) },
    { "GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV) },
    { "GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV) },
    { "GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV) },
    { "GL_GLYPH_VERTICAL_BEARING_X_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_GLYPH_VERTICAL_BEARING_X_BIT_NV) },
    { "GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV) },
    { "GL_GLYPH_WIDTH_BIT_NV", static_cast<GLbitfield>(PathRenderingMaskNV::GL_GLYPH_WIDTH_BIT_NV) },
    { "GL_GREEN_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestMaskATI::GL_GREEN_BIT_ATI) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_H =
{
    { "GL_HALF_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestModMaskATI::GL_HALF_BIT_ATI) },
    { "GL_HINT_BIT", static_cast<GLbitfield>(AttribMask::GL_HINT_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_I =
{
    { "GL_INDEX_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_INDEX_BIT_PGI) },
    { "GL_ITALIC_BIT_NV", static_cast<GLbitfield>(PathFontStyle::GL_ITALIC_BIT_NV) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_J{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_K{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_L =
{
    { "GL_LIGHTING_BIT", static_cast<GLbitfield>(AttribMask::GL_LIGHTING_BIT) },
    { "GL_LINE_BIT", static_cast<GLbitfield>(AttribMask::GL_LINE_BIT) },
    { "GL_LIST_BIT", static_cast<GLbitfield>(AttribMask::GL_LIST_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_M =
{
    { "GL_MAP_COHERENT_BIT", static_cast<GLbitfield>(BufferAccessMask::GL_MAP_COHERENT_BIT) },
    { "GL_MAP_FLUSH_EXPLICIT_BIT", static_cast<GLbitfield>(BufferAccessMask::GL_MAP_FLUSH_EXPLICIT_BIT) },
    { "GL_MAP_INVALIDATE_BUFFER_BIT", static_cast<GLbitfield>(BufferAccessMask::GL_MAP_INVALIDATE_BUFFER_BIT) },
    { "GL_MAP_INVALIDATE_RANGE_BIT", static_cast<GLbitfield>(BufferAccessMask::GL_MAP_INVALIDATE_RANGE_BIT) },
    { "GL_MAP_PERSISTENT_BIT", static_cast<GLbitfield>(BufferAccessMask::GL_MAP_PERSISTENT_BIT) },
    { "GL_MAP_READ_BIT", static_cast<GLbitfield>(BufferAccessMask::GL_MAP_READ_BIT) },
    { "GL_MAP_UNSYNCHRONIZED_BIT", static_cast<GLbitfield>(BufferAccessMask::GL_MAP_UNSYNCHRONIZED_BIT) },
    { "GL_MAP_WRITE_BIT", static_cast<GLbitfield>(BufferAccessMask::GL_MAP_WRITE_BIT) },
    { "GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI) },
    { "GL_MAT_AMBIENT_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_MAT_AMBIENT_BIT_PGI) },
    { "GL_MAT_COLOR_INDEXES_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_MAT_COLOR_INDEXES_BIT_PGI) },
    { "GL_MAT_DIFFUSE_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_MAT_DIFFUSE_BIT_PGI) },
    { "GL_MAT_EMISSION_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_MAT_EMISSION_BIT_PGI) },
    { "GL_MAT_SHININESS_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_MAT_SHININESS_BIT_PGI) },
    { "GL_MAT_SPECULAR_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_MAT_SPECULAR_BIT_PGI) },
    { "GL_MULTISAMPLE_BIT", static_cast<GLbitfield>(AttribMask::GL_MULTISAMPLE_BIT) },
    { "GL_MULTISAMPLE_BIT_3DFX", static_cast<GLbitfield>(AttribMask::GL_MULTISAMPLE_BIT_3DFX) },
    { "GL_MULTISAMPLE_BIT_ARB", static_cast<GLbitfield>(AttribMask::GL_MULTISAMPLE_BIT_ARB) },
    { "GL_MULTISAMPLE_BIT_EXT", static_cast<GLbitfield>(AttribMask::GL_MULTISAMPLE_BIT_EXT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_N =
{
    { "GL_NEGATE_BIT_ATI", static_cast<GLbitfield>(FragmentShaderColorModMaskATI::GL_NEGATE_BIT_ATI) },
    { "GL_NONE_BIT", static_cast<GLbitfield>(AttribMask::GL_NONE_BIT) },
    { "GL_NORMAL_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_NORMAL_BIT_PGI) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_O{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_P =
{
    { "GL_PERFQUERY_GLOBAL_CONTEXT_INTEL", static_cast<GLbitfield>(PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_GLOBAL_CONTEXT_INTEL) },
    { "GL_PERFQUERY_SINGLE_CONTEXT_INTEL", static_cast<GLbitfield>(PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_SINGLE_CONTEXT_INTEL) },
    { "GL_PIXEL_BUFFER_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT) },
    { "GL_PIXEL_BUFFER_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT_EXT) },
    { "GL_PIXEL_MODE_BIT", static_cast<GLbitfield>(AttribMask::GL_PIXEL_MODE_BIT) },
    { "GL_POINT_BIT", static_cast<GLbitfield>(AttribMask::GL_POINT_BIT) },
    { "GL_POLYGON_BIT", static_cast<GLbitfield>(AttribMask::GL_POLYGON_BIT) },
    { "GL_POLYGON_STIPPLE_BIT", static_cast<GLbitfield>(AttribMask::GL_POLYGON_STIPPLE_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_Q =
{
    { "GL_QUARTER_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestModMaskATI::GL_QUARTER_BIT_ATI) },
    { "GL_QUERY_BUFFER_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_QUERY_BUFFER_BARRIER_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_R =
{
    { "GL_RED_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestMaskATI::GL_RED_BIT_ATI) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_S =
{
    { "GL_SATURATE_BIT_ATI", static_cast<GLbitfield>(FragmentShaderDestModMaskATI::GL_SATURATE_BIT_ATI) },
    { "GL_SCISSOR_BIT", static_cast<GLbitfield>(AttribMask::GL_SCISSOR_BIT) },
    { "GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV", static_cast<GLbitfield>(MemoryBarrierMask::GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV) },
    { "GL_SHADER_IMAGE_ACCESS_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT) },
    { "GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT) },
    { "GL_SHADER_STORAGE_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_SHADER_STORAGE_BARRIER_BIT) },
    { "GL_SPARSE_STORAGE_BIT_ARB", static_cast<GLbitfield>(MapBufferUsageMask::GL_SPARSE_STORAGE_BIT_ARB) },
    { "GL_STENCIL_BUFFER_BIT", static_cast<GLbitfield>(AttribMask::GL_STENCIL_BUFFER_BIT) },
    { "GL_SYNC_FLUSH_COMMANDS_BIT", static_cast<GLbitfield>(SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_T =
{
    { "GL_TESS_CONTROL_SHADER_BIT", static_cast<GLbitfield>(UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT) },
    { "GL_TESS_EVALUATION_SHADER_BIT", static_cast<GLbitfield>(UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT) },
    { "GL_TEXCOORD1_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_TEXCOORD1_BIT_PGI) },
    { "GL_TEXCOORD2_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_TEXCOORD2_BIT_PGI) },
    { "GL_TEXCOORD3_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_TEXCOORD3_BIT_PGI) },
    { "GL_TEXCOORD4_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_TEXCOORD4_BIT_PGI) },
    { "GL_TEXTURE_BIT", static_cast<GLbitfield>(AttribMask::GL_TEXTURE_BIT) },
    { "GL_TEXTURE_DEFORMATION_BIT_SGIX", static_cast<GLbitfield>(FfdMaskSGIX::GL_TEXTURE_DEFORMATION_BIT_SGIX) },
    { "GL_TEXTURE_FETCH_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT) },
    { "GL_TEXTURE_FETCH_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT_EXT) },
    { "GL_TEXTURE_STORAGE_SPARSE_BIT_AMD", static_cast<GLbitfield>(TextureStorageMaskAMD::GL_TEXTURE_STORAGE_SPARSE_BIT_AMD) },
    { "GL_TEXTURE_UPDATE_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT) },
    { "GL_TEXTURE_UPDATE_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT_EXT) },
    { "GL_TRANSFORM_BIT", static_cast<GLbitfield>(AttribMask::GL_TRANSFORM_BIT) },
    { "GL_TRANSFORM_FEEDBACK_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT) },
    { "GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_U =
{
    { "GL_UNIFORM_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT) },
    { "GL_UNIFORM_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT_EXT) },
    { "GL_UNUSED_BIT", static_cast<GLbitfield>(UnusedMask::GL_UNUSED_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_V =
{
    { "GL_VERTEX23_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_VERTEX23_BIT_PGI) },
    { "GL_VERTEX4_BIT_PGI", static_cast<GLbitfield>(VertexHintsMaskPGI::GL_VERTEX4_BIT_PGI) },
    { "GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT", static_cast<GLbitfield>(MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT) },
    { "GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT", static_cast<GLbitfield>(MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT) },
    { "GL_VERTEX_SHADER_BIT", static_cast<GLbitfield>(UseProgramStageMask::GL_VERTEX_SHADER_BIT) },
    { "GL_VIEWPORT_BIT", static_cast<GLbitfield>(AttribMask::GL_VIEWPORT_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_W{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_X{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_Y{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_Z{};

const std::array<std::unordered_map<std::string, gl::GLbitfield>, 27> Meta_BitfieldsByStringMaps =
{ {
    Meta_BitfieldsByString_0,
    Meta_BitfieldsByString_A,
    Meta_BitfieldsByString_B,
    Meta_BitfieldsByString_C,
    Meta_BitfieldsByString_D,
    Meta_BitfieldsByString_E,
    Meta_BitfieldsByString_F,
    Meta_BitfieldsByString_G,
    Meta_BitfieldsByString_H,
    Meta_BitfieldsByString_I,
    Meta_BitfieldsByString_J,
    Meta_BitfieldsByString_K,
    Meta_BitfieldsByString_L,
    Meta_BitfieldsByString_M,
    Meta_BitfieldsByString_N,
    Meta_BitfieldsByString_O,
    Meta_BitfieldsByString_P,
    Meta_BitfieldsByString_Q,
    Meta_BitfieldsByString_R,
    Meta_BitfieldsByString_S,
    Meta_BitfieldsByString_T,
    Meta_BitfieldsByString_U,
    Meta_BitfieldsByString_V,
    Meta_BitfieldsByString_W,
    Meta_BitfieldsByString_X,
    Meta_BitfieldsByString_Y,
    Meta_BitfieldsByString_Z
} };


} // namespace glbinding
