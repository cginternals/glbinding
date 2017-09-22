
#include "Meta_Maps.h"

#include <glbinding/gl/bitfield.h>


using namespace gl;


namespace glbinding
{


const std::unordered_map<AttribMask, std::string> Meta_StringsByAttribMask =
{
    { AttribMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { AttribMask::GL_CURRENT_BIT, "GL_CURRENT_BIT" },
    { AttribMask::GL_POINT_BIT, "GL_POINT_BIT" },
    { AttribMask::GL_LINE_BIT, "GL_LINE_BIT" },
    { AttribMask::GL_POLYGON_BIT, "GL_POLYGON_BIT" },
    { AttribMask::GL_POLYGON_STIPPLE_BIT, "GL_POLYGON_STIPPLE_BIT" },
    { AttribMask::GL_PIXEL_MODE_BIT, "GL_PIXEL_MODE_BIT" },
    { AttribMask::GL_LIGHTING_BIT, "GL_LIGHTING_BIT" },
    { AttribMask::GL_FOG_BIT, "GL_FOG_BIT" },
    { AttribMask::GL_DEPTH_BUFFER_BIT, "GL_DEPTH_BUFFER_BIT" },
    { AttribMask::GL_ACCUM_BUFFER_BIT, "GL_ACCUM_BUFFER_BIT" },
    { AttribMask::GL_STENCIL_BUFFER_BIT, "GL_STENCIL_BUFFER_BIT" },
    { AttribMask::GL_VIEWPORT_BIT, "GL_VIEWPORT_BIT" },
    { AttribMask::GL_TRANSFORM_BIT, "GL_TRANSFORM_BIT" },
    { AttribMask::GL_ENABLE_BIT, "GL_ENABLE_BIT" },
    { AttribMask::GL_COLOR_BUFFER_BIT, "GL_COLOR_BUFFER_BIT" },
    { AttribMask::GL_HINT_BIT, "GL_HINT_BIT" },
    { AttribMask::GL_EVAL_BIT, "GL_EVAL_BIT" },
    { AttribMask::GL_LIST_BIT, "GL_LIST_BIT" },
    { AttribMask::GL_TEXTURE_BIT, "GL_TEXTURE_BIT" },
    { AttribMask::GL_SCISSOR_BIT, "GL_SCISSOR_BIT" },
    { AttribMask::GL_MULTISAMPLE_BIT, "GL_MULTISAMPLE_BIT" },
    { AttribMask::GL_MULTISAMPLE_BIT_3DFX, "GL_MULTISAMPLE_BIT_3DFX" },
    { AttribMask::GL_MULTISAMPLE_BIT_ARB, "GL_MULTISAMPLE_BIT_ARB" },
    { AttribMask::GL_MULTISAMPLE_BIT_EXT, "GL_MULTISAMPLE_BIT_EXT" },
    { AttribMask::GL_ALL_ATTRIB_BITS, "GL_ALL_ATTRIB_BITS" }
};


const std::unordered_map<BufferAccessMask, std::string> Meta_StringsByBufferAccessMask =
{
    { BufferAccessMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { BufferAccessMask::GL_MAP_READ_BIT, "GL_MAP_READ_BIT" },
    { BufferAccessMask::GL_MAP_WRITE_BIT, "GL_MAP_WRITE_BIT" },
    { BufferAccessMask::GL_MAP_INVALIDATE_RANGE_BIT, "GL_MAP_INVALIDATE_RANGE_BIT" },
    { BufferAccessMask::GL_MAP_INVALIDATE_BUFFER_BIT, "GL_MAP_INVALIDATE_BUFFER_BIT" },
    { BufferAccessMask::GL_MAP_FLUSH_EXPLICIT_BIT, "GL_MAP_FLUSH_EXPLICIT_BIT" },
    { BufferAccessMask::GL_MAP_UNSYNCHRONIZED_BIT, "GL_MAP_UNSYNCHRONIZED_BIT" },
    { BufferAccessMask::GL_MAP_PERSISTENT_BIT, "GL_MAP_PERSISTENT_BIT" },
    { BufferAccessMask::GL_MAP_COHERENT_BIT, "GL_MAP_COHERENT_BIT" }
};


const std::unordered_map<BufferStorageMask, std::string> Meta_StringsByBufferStorageMask =
{
    { BufferStorageMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { BufferStorageMask::GL_MAP_READ_BIT, "GL_MAP_READ_BIT" },
    { BufferStorageMask::GL_MAP_WRITE_BIT, "GL_MAP_WRITE_BIT" },
    { BufferStorageMask::GL_MAP_PERSISTENT_BIT, "GL_MAP_PERSISTENT_BIT" },
    { BufferStorageMask::GL_MAP_COHERENT_BIT, "GL_MAP_COHERENT_BIT" },
    { BufferStorageMask::GL_DYNAMIC_STORAGE_BIT, "GL_DYNAMIC_STORAGE_BIT" },
    { BufferStorageMask::GL_CLIENT_STORAGE_BIT, "GL_CLIENT_STORAGE_BIT" }
};


const std::unordered_map<ClearBufferMask, std::string> Meta_StringsByClearBufferMask =
{
    { ClearBufferMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { ClearBufferMask::GL_DEPTH_BUFFER_BIT, "GL_DEPTH_BUFFER_BIT" },
    { ClearBufferMask::GL_ACCUM_BUFFER_BIT, "GL_ACCUM_BUFFER_BIT" },
    { ClearBufferMask::GL_STENCIL_BUFFER_BIT, "GL_STENCIL_BUFFER_BIT" },
    { ClearBufferMask::GL_COLOR_BUFFER_BIT, "GL_COLOR_BUFFER_BIT" },
    { ClearBufferMask::GL_COVERAGE_BUFFER_BIT_NV, "GL_COVERAGE_BUFFER_BIT_NV" }
};


const std::unordered_map<ClientAttribMask, std::string> Meta_StringsByClientAttribMask =
{
    { ClientAttribMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { ClientAttribMask::GL_CLIENT_PIXEL_STORE_BIT, "GL_CLIENT_PIXEL_STORE_BIT" },
    { ClientAttribMask::GL_CLIENT_VERTEX_ARRAY_BIT, "GL_CLIENT_VERTEX_ARRAY_BIT" },
    { ClientAttribMask::GL_CLIENT_ALL_ATTRIB_BITS, "GL_CLIENT_ALL_ATTRIB_BITS" }
};


const std::unordered_map<ContextFlagMask, std::string> Meta_StringsByContextFlagMask =
{
    { ContextFlagMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { ContextFlagMask::GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT, "GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT" },
    { ContextFlagMask::GL_CONTEXT_FLAG_DEBUG_BIT, "GL_CONTEXT_FLAG_DEBUG_BIT" },
    { ContextFlagMask::GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT, "GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT" },
    { ContextFlagMask::GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB, "GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB" },
    { ContextFlagMask::GL_CONTEXT_FLAG_NO_ERROR_BIT, "GL_CONTEXT_FLAG_NO_ERROR_BIT" },
    { ContextFlagMask::GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR, "GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR" }
};


const std::unordered_map<ContextProfileMask, std::string> Meta_StringsByContextProfileMask =
{
    { ContextProfileMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { ContextProfileMask::GL_CONTEXT_CORE_PROFILE_BIT, "GL_CONTEXT_CORE_PROFILE_BIT" },
    { ContextProfileMask::GL_CONTEXT_COMPATIBILITY_PROFILE_BIT, "GL_CONTEXT_COMPATIBILITY_PROFILE_BIT" }
};


const std::unordered_map<FfdMaskSGIX, std::string> Meta_StringsByFfdMaskSGIX =
{
    { FfdMaskSGIX::GL_NONE_BIT, "GL_NONE_BIT" },
    { FfdMaskSGIX::GL_TEXTURE_DEFORMATION_BIT_SGIX, "GL_TEXTURE_DEFORMATION_BIT_SGIX" },
    { FfdMaskSGIX::GL_GEOMETRY_DEFORMATION_BIT_SGIX, "GL_GEOMETRY_DEFORMATION_BIT_SGIX" }
};


const std::unordered_map<FragmentShaderColorModMaskATI, std::string> Meta_StringsByFragmentShaderColorModMaskATI =
{
    { FragmentShaderColorModMaskATI::GL_NONE_BIT, "GL_NONE_BIT" },
    { FragmentShaderColorModMaskATI::GL_COMP_BIT_ATI, "GL_COMP_BIT_ATI" },
    { FragmentShaderColorModMaskATI::GL_NEGATE_BIT_ATI, "GL_NEGATE_BIT_ATI" },
    { FragmentShaderColorModMaskATI::GL_BIAS_BIT_ATI, "GL_BIAS_BIT_ATI" }
};


const std::unordered_map<FragmentShaderDestMaskATI, std::string> Meta_StringsByFragmentShaderDestMaskATI =
{
    { FragmentShaderDestMaskATI::GL_NONE_BIT, "GL_NONE_BIT" },
    { FragmentShaderDestMaskATI::GL_RED_BIT_ATI, "GL_RED_BIT_ATI" },
    { FragmentShaderDestMaskATI::GL_GREEN_BIT_ATI, "GL_GREEN_BIT_ATI" },
    { FragmentShaderDestMaskATI::GL_BLUE_BIT_ATI, "GL_BLUE_BIT_ATI" }
};


const std::unordered_map<FragmentShaderDestModMaskATI, std::string> Meta_StringsByFragmentShaderDestModMaskATI =
{
    { FragmentShaderDestModMaskATI::GL_NONE_BIT, "GL_NONE_BIT" },
    { FragmentShaderDestModMaskATI::GL_2X_BIT_ATI, "GL_2X_BIT_ATI" },
    { FragmentShaderDestModMaskATI::GL_4X_BIT_ATI, "GL_4X_BIT_ATI" },
    { FragmentShaderDestModMaskATI::GL_8X_BIT_ATI, "GL_8X_BIT_ATI" },
    { FragmentShaderDestModMaskATI::GL_HALF_BIT_ATI, "GL_HALF_BIT_ATI" },
    { FragmentShaderDestModMaskATI::GL_QUARTER_BIT_ATI, "GL_QUARTER_BIT_ATI" },
    { FragmentShaderDestModMaskATI::GL_EIGHTH_BIT_ATI, "GL_EIGHTH_BIT_ATI" },
    { FragmentShaderDestModMaskATI::GL_SATURATE_BIT_ATI, "GL_SATURATE_BIT_ATI" }
};


const std::unordered_map<MapBufferUsageMask, std::string> Meta_StringsByMapBufferUsageMask =
{
    { MapBufferUsageMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { MapBufferUsageMask::GL_MAP_READ_BIT, "GL_MAP_READ_BIT" },
    { MapBufferUsageMask::GL_MAP_WRITE_BIT, "GL_MAP_WRITE_BIT" },
    { MapBufferUsageMask::GL_MAP_INVALIDATE_RANGE_BIT, "GL_MAP_INVALIDATE_RANGE_BIT" },
    { MapBufferUsageMask::GL_MAP_INVALIDATE_BUFFER_BIT, "GL_MAP_INVALIDATE_BUFFER_BIT" },
    { MapBufferUsageMask::GL_MAP_FLUSH_EXPLICIT_BIT, "GL_MAP_FLUSH_EXPLICIT_BIT" },
    { MapBufferUsageMask::GL_MAP_UNSYNCHRONIZED_BIT, "GL_MAP_UNSYNCHRONIZED_BIT" },
    { MapBufferUsageMask::GL_MAP_PERSISTENT_BIT, "GL_MAP_PERSISTENT_BIT" },
    { MapBufferUsageMask::GL_MAP_COHERENT_BIT, "GL_MAP_COHERENT_BIT" },
    { MapBufferUsageMask::GL_DYNAMIC_STORAGE_BIT, "GL_DYNAMIC_STORAGE_BIT" },
    { MapBufferUsageMask::GL_CLIENT_STORAGE_BIT, "GL_CLIENT_STORAGE_BIT" },
    { MapBufferUsageMask::GL_SPARSE_STORAGE_BIT_ARB, "GL_SPARSE_STORAGE_BIT_ARB" },
    { MapBufferUsageMask::GL_LGPU_SEPARATE_STORAGE_BIT_NVX, "GL_LGPU_SEPARATE_STORAGE_BIT_NVX" },
    { MapBufferUsageMask::GL_PER_GPU_STORAGE_BIT_NV, "GL_PER_GPU_STORAGE_BIT_NV" }
};


const std::unordered_map<MemoryBarrierMask, std::string> Meta_StringsByMemoryBarrierMask =
{
    { MemoryBarrierMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT, "GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT" },
    { MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT, "GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT" },
    { MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT, "GL_ELEMENT_ARRAY_BARRIER_BIT" },
    { MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT_EXT, "GL_ELEMENT_ARRAY_BARRIER_BIT_EXT" },
    { MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT, "GL_UNIFORM_BARRIER_BIT" },
    { MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT_EXT, "GL_UNIFORM_BARRIER_BIT_EXT" },
    { MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT, "GL_TEXTURE_FETCH_BARRIER_BIT" },
    { MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT_EXT, "GL_TEXTURE_FETCH_BARRIER_BIT_EXT" },
    { MemoryBarrierMask::GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV, "GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV" },
    { MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT, "GL_SHADER_IMAGE_ACCESS_BARRIER_BIT" },
    { MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT, "GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT" },
    { MemoryBarrierMask::GL_COMMAND_BARRIER_BIT, "GL_COMMAND_BARRIER_BIT" },
    { MemoryBarrierMask::GL_COMMAND_BARRIER_BIT_EXT, "GL_COMMAND_BARRIER_BIT_EXT" },
    { MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT, "GL_PIXEL_BUFFER_BARRIER_BIT" },
    { MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT_EXT, "GL_PIXEL_BUFFER_BARRIER_BIT_EXT" },
    { MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT, "GL_TEXTURE_UPDATE_BARRIER_BIT" },
    { MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT_EXT, "GL_TEXTURE_UPDATE_BARRIER_BIT_EXT" },
    { MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT, "GL_BUFFER_UPDATE_BARRIER_BIT" },
    { MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT_EXT, "GL_BUFFER_UPDATE_BARRIER_BIT_EXT" },
    { MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT, "GL_FRAMEBUFFER_BARRIER_BIT" },
    { MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT_EXT, "GL_FRAMEBUFFER_BARRIER_BIT_EXT" },
    { MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT, "GL_TRANSFORM_FEEDBACK_BARRIER_BIT" },
    { MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT, "GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT" },
    { MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT, "GL_ATOMIC_COUNTER_BARRIER_BIT" },
    { MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT_EXT, "GL_ATOMIC_COUNTER_BARRIER_BIT_EXT" },
    { MemoryBarrierMask::GL_SHADER_STORAGE_BARRIER_BIT, "GL_SHADER_STORAGE_BARRIER_BIT" },
    { MemoryBarrierMask::GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT, "GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT" },
    { MemoryBarrierMask::GL_QUERY_BUFFER_BARRIER_BIT, "GL_QUERY_BUFFER_BARRIER_BIT" },
    { MemoryBarrierMask::GL_ALL_BARRIER_BITS, "GL_ALL_BARRIER_BITS" },
    { MemoryBarrierMask::GL_ALL_BARRIER_BITS_EXT, "GL_ALL_BARRIER_BITS_EXT" }
};


const std::unordered_map<PathFontStyle, std::string> Meta_StringsByPathFontStyle =
{
    { PathFontStyle::GL_NONE_BIT, "GL_NONE_BIT" },
    { PathFontStyle::GL_BOLD_BIT_NV, "GL_BOLD_BIT_NV" },
    { PathFontStyle::GL_ITALIC_BIT_NV, "GL_ITALIC_BIT_NV" }
};


const std::unordered_map<PathMetricMask, std::string> Meta_StringsByPathMetricMask =
{
    { PathMetricMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { PathMetricMask::GL_FONT_X_MIN_BOUNDS_BIT_NV, "GL_FONT_X_MIN_BOUNDS_BIT_NV" },
    { PathMetricMask::GL_FONT_Y_MIN_BOUNDS_BIT_NV, "GL_FONT_Y_MIN_BOUNDS_BIT_NV" },
    { PathMetricMask::GL_FONT_X_MAX_BOUNDS_BIT_NV, "GL_FONT_X_MAX_BOUNDS_BIT_NV" },
    { PathMetricMask::GL_FONT_Y_MAX_BOUNDS_BIT_NV, "GL_FONT_Y_MAX_BOUNDS_BIT_NV" },
    { PathMetricMask::GL_FONT_UNITS_PER_EM_BIT_NV, "GL_FONT_UNITS_PER_EM_BIT_NV" },
    { PathMetricMask::GL_FONT_ASCENDER_BIT_NV, "GL_FONT_ASCENDER_BIT_NV" },
    { PathMetricMask::GL_FONT_DESCENDER_BIT_NV, "GL_FONT_DESCENDER_BIT_NV" },
    { PathMetricMask::GL_FONT_HEIGHT_BIT_NV, "GL_FONT_HEIGHT_BIT_NV" },
    { PathMetricMask::GL_GLYPH_WIDTH_BIT_NV, "GL_GLYPH_WIDTH_BIT_NV" },
    { PathMetricMask::GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV, "GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV" },
    { PathMetricMask::GL_GLYPH_HEIGHT_BIT_NV, "GL_GLYPH_HEIGHT_BIT_NV" },
    { PathMetricMask::GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV, "GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV" },
    { PathMetricMask::GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV, "GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV" },
    { PathMetricMask::GL_FONT_UNDERLINE_POSITION_BIT_NV, "GL_FONT_UNDERLINE_POSITION_BIT_NV" },
    { PathMetricMask::GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV, "GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV" },
    { PathMetricMask::GL_FONT_UNDERLINE_THICKNESS_BIT_NV, "GL_FONT_UNDERLINE_THICKNESS_BIT_NV" },
    { PathMetricMask::GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV, "GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV" },
    { PathMetricMask::GL_GLYPH_HAS_KERNING_BIT_NV, "GL_GLYPH_HAS_KERNING_BIT_NV" },
    { PathMetricMask::GL_FONT_HAS_KERNING_BIT_NV, "GL_FONT_HAS_KERNING_BIT_NV" },
    { PathMetricMask::GL_GLYPH_VERTICAL_BEARING_X_BIT_NV, "GL_GLYPH_VERTICAL_BEARING_X_BIT_NV" },
    { PathMetricMask::GL_FONT_NUM_GLYPH_INDICES_BIT_NV, "GL_FONT_NUM_GLYPH_INDICES_BIT_NV" },
    { PathMetricMask::GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV, "GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV" },
    { PathMetricMask::GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV, "GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV" }
};


const std::unordered_map<PathRenderingMaskNV, std::string> Meta_StringsByPathRenderingMaskNV =
{
    { PathRenderingMaskNV::GL_NONE_BIT, "GL_NONE_BIT" },
    { PathRenderingMaskNV::GL_FONT_X_MIN_BOUNDS_BIT_NV, "GL_FONT_X_MIN_BOUNDS_BIT_NV" },
    { PathRenderingMaskNV::GL_FONT_Y_MIN_BOUNDS_BIT_NV, "GL_FONT_Y_MIN_BOUNDS_BIT_NV" },
    { PathRenderingMaskNV::GL_FONT_X_MAX_BOUNDS_BIT_NV, "GL_FONT_X_MAX_BOUNDS_BIT_NV" },
    { PathRenderingMaskNV::GL_FONT_Y_MAX_BOUNDS_BIT_NV, "GL_FONT_Y_MAX_BOUNDS_BIT_NV" },
    { PathRenderingMaskNV::GL_FONT_UNITS_PER_EM_BIT_NV, "GL_FONT_UNITS_PER_EM_BIT_NV" },
    { PathRenderingMaskNV::GL_FONT_ASCENDER_BIT_NV, "GL_FONT_ASCENDER_BIT_NV" },
    { PathRenderingMaskNV::GL_FONT_DESCENDER_BIT_NV, "GL_FONT_DESCENDER_BIT_NV" },
    { PathRenderingMaskNV::GL_FONT_HEIGHT_BIT_NV, "GL_FONT_HEIGHT_BIT_NV" },
    { PathRenderingMaskNV::GL_BOLD_BIT_NV, "GL_BOLD_BIT_NV" },
    { PathRenderingMaskNV::GL_GLYPH_WIDTH_BIT_NV, "GL_GLYPH_WIDTH_BIT_NV" },
    { PathRenderingMaskNV::GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV, "GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV" },
    { PathRenderingMaskNV::GL_GLYPH_HEIGHT_BIT_NV, "GL_GLYPH_HEIGHT_BIT_NV" },
    { PathRenderingMaskNV::GL_ITALIC_BIT_NV, "GL_ITALIC_BIT_NV" },
    { PathRenderingMaskNV::GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV, "GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV" },
    { PathRenderingMaskNV::GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV, "GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV" },
    { PathRenderingMaskNV::GL_FONT_UNDERLINE_POSITION_BIT_NV, "GL_FONT_UNDERLINE_POSITION_BIT_NV" },
    { PathRenderingMaskNV::GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV, "GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV" },
    { PathRenderingMaskNV::GL_FONT_UNDERLINE_THICKNESS_BIT_NV, "GL_FONT_UNDERLINE_THICKNESS_BIT_NV" },
    { PathRenderingMaskNV::GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV, "GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV" },
    { PathRenderingMaskNV::GL_GLYPH_HAS_KERNING_BIT_NV, "GL_GLYPH_HAS_KERNING_BIT_NV" },
    { PathRenderingMaskNV::GL_FONT_HAS_KERNING_BIT_NV, "GL_FONT_HAS_KERNING_BIT_NV" },
    { PathRenderingMaskNV::GL_GLYPH_VERTICAL_BEARING_X_BIT_NV, "GL_GLYPH_VERTICAL_BEARING_X_BIT_NV" },
    { PathRenderingMaskNV::GL_FONT_NUM_GLYPH_INDICES_BIT_NV, "GL_FONT_NUM_GLYPH_INDICES_BIT_NV" },
    { PathRenderingMaskNV::GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV, "GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV" },
    { PathRenderingMaskNV::GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV, "GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV" }
};


const std::unordered_map<PerformanceQueryCapsMaskINTEL, std::string> Meta_StringsByPerformanceQueryCapsMaskINTEL =
{
    { PerformanceQueryCapsMaskINTEL::GL_NONE_BIT, "GL_NONE_BIT" },
    { PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_SINGLE_CONTEXT_INTEL, "GL_PERFQUERY_SINGLE_CONTEXT_INTEL" },
    { PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_GLOBAL_CONTEXT_INTEL, "GL_PERFQUERY_GLOBAL_CONTEXT_INTEL" }
};


const std::unordered_map<SyncObjectMask, std::string> Meta_StringsBySyncObjectMask =
{
    { SyncObjectMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT, "GL_SYNC_FLUSH_COMMANDS_BIT" }
};


const std::unordered_map<TextureStorageMaskAMD, std::string> Meta_StringsByTextureStorageMaskAMD =
{
    { TextureStorageMaskAMD::GL_NONE_BIT, "GL_NONE_BIT" },
    { TextureStorageMaskAMD::GL_TEXTURE_STORAGE_SPARSE_BIT_AMD, "GL_TEXTURE_STORAGE_SPARSE_BIT_AMD" }
};


const std::unordered_map<UnusedMask, std::string> Meta_StringsByUnusedMask =
{
    { UnusedMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { UnusedMask::GL_UNUSED_BIT, "GL_UNUSED_BIT" }
};


const std::unordered_map<UseProgramStageMask, std::string> Meta_StringsByUseProgramStageMask =
{
    { UseProgramStageMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { UseProgramStageMask::GL_VERTEX_SHADER_BIT, "GL_VERTEX_SHADER_BIT" },
    { UseProgramStageMask::GL_FRAGMENT_SHADER_BIT, "GL_FRAGMENT_SHADER_BIT" },
    { UseProgramStageMask::GL_GEOMETRY_SHADER_BIT, "GL_GEOMETRY_SHADER_BIT" },
    { UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT, "GL_TESS_CONTROL_SHADER_BIT" },
    { UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT, "GL_TESS_EVALUATION_SHADER_BIT" },
    { UseProgramStageMask::GL_COMPUTE_SHADER_BIT, "GL_COMPUTE_SHADER_BIT" },
    { UseProgramStageMask::GL_ALL_SHADER_BITS, "GL_ALL_SHADER_BITS" }
};


const std::unordered_map<VertexHintsMaskPGI, std::string> Meta_StringsByVertexHintsMaskPGI =
{
    { VertexHintsMaskPGI::GL_NONE_BIT, "GL_NONE_BIT" },
    { VertexHintsMaskPGI::GL_VERTEX23_BIT_PGI, "GL_VERTEX23_BIT_PGI" },
    { VertexHintsMaskPGI::GL_VERTEX4_BIT_PGI, "GL_VERTEX4_BIT_PGI" },
    { VertexHintsMaskPGI::GL_COLOR3_BIT_PGI, "GL_COLOR3_BIT_PGI" },
    { VertexHintsMaskPGI::GL_COLOR4_BIT_PGI, "GL_COLOR4_BIT_PGI" },
    { VertexHintsMaskPGI::GL_EDGEFLAG_BIT_PGI, "GL_EDGEFLAG_BIT_PGI" },
    { VertexHintsMaskPGI::GL_INDEX_BIT_PGI, "GL_INDEX_BIT_PGI" },
    { VertexHintsMaskPGI::GL_MAT_AMBIENT_BIT_PGI, "GL_MAT_AMBIENT_BIT_PGI" },
    { VertexHintsMaskPGI::GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI, "GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI" },
    { VertexHintsMaskPGI::GL_MAT_DIFFUSE_BIT_PGI, "GL_MAT_DIFFUSE_BIT_PGI" },
    { VertexHintsMaskPGI::GL_MAT_EMISSION_BIT_PGI, "GL_MAT_EMISSION_BIT_PGI" },
    { VertexHintsMaskPGI::GL_MAT_COLOR_INDEXES_BIT_PGI, "GL_MAT_COLOR_INDEXES_BIT_PGI" },
    { VertexHintsMaskPGI::GL_MAT_SHININESS_BIT_PGI, "GL_MAT_SHININESS_BIT_PGI" },
    { VertexHintsMaskPGI::GL_MAT_SPECULAR_BIT_PGI, "GL_MAT_SPECULAR_BIT_PGI" },
    { VertexHintsMaskPGI::GL_NORMAL_BIT_PGI, "GL_NORMAL_BIT_PGI" },
    { VertexHintsMaskPGI::GL_TEXCOORD1_BIT_PGI, "GL_TEXCOORD1_BIT_PGI" },
    { VertexHintsMaskPGI::GL_TEXCOORD2_BIT_PGI, "GL_TEXCOORD2_BIT_PGI" },
    { VertexHintsMaskPGI::GL_TEXCOORD3_BIT_PGI, "GL_TEXCOORD3_BIT_PGI" },
    { VertexHintsMaskPGI::GL_TEXCOORD4_BIT_PGI, "GL_TEXCOORD4_BIT_PGI" }
};




} // namespace glbinding
