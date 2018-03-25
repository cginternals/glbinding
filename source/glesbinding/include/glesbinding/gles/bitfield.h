
#pragma once


#include <glesbinding/nogles.h>

#include <glesbinding/glesbinding_features.h>

#include <glesbinding/SharedBitfield.h>


namespace gles
{


enum class AttribMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_DEPTH_BUFFER_BIT                        = 0x00000100,
    GL_STENCIL_BUFFER_BIT                      = 0x00000400,
    GL_COLOR_BUFFER_BIT                        = 0x00004000,
};


enum class BufferAccessMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_MAP_READ_BIT                            = 0x0001,
    GL_MAP_READ_BIT_EXT                        = 0x0001,
    GL_MAP_WRITE_BIT                           = 0x0002,
    GL_MAP_WRITE_BIT_EXT                       = 0x0002,
    GL_MAP_INVALIDATE_RANGE_BIT                = 0x0004,
    GL_MAP_INVALIDATE_RANGE_BIT_EXT            = 0x0004,
    GL_MAP_INVALIDATE_BUFFER_BIT               = 0x0008,
    GL_MAP_INVALIDATE_BUFFER_BIT_EXT           = 0x0008,
    GL_MAP_FLUSH_EXPLICIT_BIT                  = 0x0010,
    GL_MAP_FLUSH_EXPLICIT_BIT_EXT              = 0x0010,
    GL_MAP_UNSYNCHRONIZED_BIT                  = 0x0020,
    GL_MAP_UNSYNCHRONIZED_BIT_EXT              = 0x0020,
    GL_MAP_PERSISTENT_BIT                      = 0x0040,
    GL_MAP_PERSISTENT_BIT_EXT                  = 0x0040,
    GL_MAP_COHERENT_BIT                        = 0x0080,
    GL_MAP_COHERENT_BIT_EXT                    = 0x0080,
};


enum class BufferBitQCOM : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_COLOR_BUFFER_BIT0_QCOM                  = 0x00000001,
    GL_COLOR_BUFFER_BIT1_QCOM                  = 0x00000002,
    GL_COLOR_BUFFER_BIT2_QCOM                  = 0x00000004,
    GL_COLOR_BUFFER_BIT3_QCOM                  = 0x00000008,
    GL_COLOR_BUFFER_BIT4_QCOM                  = 0x00000010,
    GL_COLOR_BUFFER_BIT5_QCOM                  = 0x00000020,
    GL_COLOR_BUFFER_BIT6_QCOM                  = 0x00000040,
    GL_COLOR_BUFFER_BIT7_QCOM                  = 0x00000080,
    GL_DEPTH_BUFFER_BIT0_QCOM                  = 0x00000100,
    GL_DEPTH_BUFFER_BIT1_QCOM                  = 0x00000200,
    GL_DEPTH_BUFFER_BIT2_QCOM                  = 0x00000400,
    GL_DEPTH_BUFFER_BIT3_QCOM                  = 0x00000800,
    GL_DEPTH_BUFFER_BIT4_QCOM                  = 0x00001000,
    GL_DEPTH_BUFFER_BIT5_QCOM                  = 0x00002000,
    GL_DEPTH_BUFFER_BIT6_QCOM                  = 0x00004000,
    GL_DEPTH_BUFFER_BIT7_QCOM                  = 0x00008000,
    GL_STENCIL_BUFFER_BIT0_QCOM                = 0x00010000,
    GL_STENCIL_BUFFER_BIT1_QCOM                = 0x00020000,
    GL_STENCIL_BUFFER_BIT2_QCOM                = 0x00040000,
    GL_STENCIL_BUFFER_BIT3_QCOM                = 0x00080000,
    GL_STENCIL_BUFFER_BIT4_QCOM                = 0x00100000,
    GL_STENCIL_BUFFER_BIT5_QCOM                = 0x00200000,
    GL_STENCIL_BUFFER_BIT6_QCOM                = 0x00400000,
    GL_STENCIL_BUFFER_BIT7_QCOM                = 0x00800000,
    GL_MULTISAMPLE_BUFFER_BIT0_QCOM            = 0x01000000,
    GL_MULTISAMPLE_BUFFER_BIT1_QCOM            = 0x02000000,
    GL_MULTISAMPLE_BUFFER_BIT2_QCOM            = 0x04000000,
    GL_MULTISAMPLE_BUFFER_BIT3_QCOM            = 0x08000000,
    GL_MULTISAMPLE_BUFFER_BIT4_QCOM            = 0x10000000,
    GL_MULTISAMPLE_BUFFER_BIT5_QCOM            = 0x20000000,
    GL_MULTISAMPLE_BUFFER_BIT6_QCOM            = 0x40000000,
    GL_MULTISAMPLE_BUFFER_BIT7_QCOM            = 0x80000000,
};


enum class BufferStorageMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_MAP_READ_BIT                            = 0x0001, // reuse from BufferAccessMask
    GL_MAP_WRITE_BIT                           = 0x0002, // reuse from BufferAccessMask
    GL_MAP_PERSISTENT_BIT                      = 0x0040, // reuse from BufferAccessMask
    GL_MAP_COHERENT_BIT                        = 0x0080, // reuse from BufferAccessMask
    GL_DYNAMIC_STORAGE_BIT                     = 0x0100,
    GL_CLIENT_STORAGE_BIT                      = 0x0200,
};


enum class ClearBufferMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_DEPTH_BUFFER_BIT                        = 0x00000100, // reuse from AttribMask
    GL_STENCIL_BUFFER_BIT                      = 0x00000400, // reuse from AttribMask
    GL_COLOR_BUFFER_BIT                        = 0x00004000, // reuse from AttribMask
    GL_COVERAGE_BUFFER_BIT_NV                  = 0x00008000,
};


enum class ContextFlagMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_CONTEXT_FLAG_DEBUG_BIT                  = 0x00000002,
    GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT          = 0x00000004,
    GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR           = 0x00000008,
    GL_CONTEXT_FLAG_PROTECTED_CONTENT_BIT_EXT  = 0x00000010,
};


enum class FoveationConfigBitQCOM : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_FOVEATION_ENABLE_BIT_QCOM               = 0x00000001,
    GL_FOVEATION_SCALED_BIN_METHOD_BIT_QCOM    = 0x00000002,
};


enum class MapBufferUsageMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_MAP_READ_BIT                            = 0x0001, // reuse from BufferAccessMask
    GL_MAP_READ_BIT_EXT                        = 0x0001, // reuse from BufferAccessMask
    GL_MAP_WRITE_BIT                           = 0x0002, // reuse from BufferAccessMask
    GL_MAP_WRITE_BIT_EXT                       = 0x0002, // reuse from BufferAccessMask
    GL_MAP_INVALIDATE_RANGE_BIT                = 0x0004, // reuse from BufferAccessMask
    GL_MAP_INVALIDATE_RANGE_BIT_EXT            = 0x0004, // reuse from BufferAccessMask
    GL_MAP_INVALIDATE_BUFFER_BIT               = 0x0008, // reuse from BufferAccessMask
    GL_MAP_INVALIDATE_BUFFER_BIT_EXT           = 0x0008, // reuse from BufferAccessMask
    GL_MAP_FLUSH_EXPLICIT_BIT                  = 0x0010, // reuse from BufferAccessMask
    GL_MAP_FLUSH_EXPLICIT_BIT_EXT              = 0x0010, // reuse from BufferAccessMask
    GL_MAP_UNSYNCHRONIZED_BIT                  = 0x0020, // reuse from BufferAccessMask
    GL_MAP_UNSYNCHRONIZED_BIT_EXT              = 0x0020, // reuse from BufferAccessMask
    GL_MAP_PERSISTENT_BIT                      = 0x0040, // reuse from BufferAccessMask
    GL_MAP_PERSISTENT_BIT_EXT                  = 0x0040, // reuse from BufferAccessMask
    GL_MAP_COHERENT_BIT                        = 0x0080, // reuse from BufferAccessMask
    GL_MAP_COHERENT_BIT_EXT                    = 0x0080, // reuse from BufferAccessMask
    GL_DYNAMIC_STORAGE_BIT                     = 0x0100, // reuse from BufferStorageMask
    GL_DYNAMIC_STORAGE_BIT_EXT                 = 0x0100,
    GL_CLIENT_STORAGE_BIT                      = 0x0200, // reuse from BufferStorageMask
    GL_CLIENT_STORAGE_BIT_EXT                  = 0x0200,
    GL_SPARSE_STORAGE_BIT_ARB                  = 0x0400,
    GL_LGPU_SEPARATE_STORAGE_BIT_NVX           = 0x0800,
    GL_PER_GPU_STORAGE_BIT_NV                  = 0x0800,
    GL_EXTERNAL_STORAGE_BIT_NVX                = 0x2000,
};


enum class MemoryBarrierMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT         = 0x00000001,
    GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT     = 0x00000001,
    GL_ELEMENT_ARRAY_BARRIER_BIT               = 0x00000002,
    GL_ELEMENT_ARRAY_BARRIER_BIT_EXT           = 0x00000002,
    GL_UNIFORM_BARRIER_BIT                     = 0x00000004,
    GL_UNIFORM_BARRIER_BIT_EXT                 = 0x00000004,
    GL_TEXTURE_FETCH_BARRIER_BIT               = 0x00000008,
    GL_TEXTURE_FETCH_BARRIER_BIT_EXT           = 0x00000008,
    GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV     = 0x00000010,
    GL_SHADER_IMAGE_ACCESS_BARRIER_BIT         = 0x00000020,
    GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT     = 0x00000020,
    GL_COMMAND_BARRIER_BIT                     = 0x00000040,
    GL_COMMAND_BARRIER_BIT_EXT                 = 0x00000040,
    GL_PIXEL_BUFFER_BARRIER_BIT                = 0x00000080,
    GL_PIXEL_BUFFER_BARRIER_BIT_EXT            = 0x00000080,
    GL_TEXTURE_UPDATE_BARRIER_BIT              = 0x00000100,
    GL_TEXTURE_UPDATE_BARRIER_BIT_EXT          = 0x00000100,
    GL_BUFFER_UPDATE_BARRIER_BIT               = 0x00000200,
    GL_BUFFER_UPDATE_BARRIER_BIT_EXT           = 0x00000200,
    GL_FRAMEBUFFER_BARRIER_BIT                 = 0x00000400,
    GL_FRAMEBUFFER_BARRIER_BIT_EXT             = 0x00000400,
    GL_TRANSFORM_FEEDBACK_BARRIER_BIT          = 0x00000800,
    GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT      = 0x00000800,
    GL_ATOMIC_COUNTER_BARRIER_BIT              = 0x00001000,
    GL_ATOMIC_COUNTER_BARRIER_BIT_EXT          = 0x00001000,
    GL_SHADER_STORAGE_BARRIER_BIT              = 0x00002000,
    GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT        = 0x00004000,
    GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT    = 0x00004000,
    GL_QUERY_BUFFER_BARRIER_BIT                = 0x00008000,
    GL_ALL_BARRIER_BITS                        = 0xFFFFFFFF,
    GL_ALL_BARRIER_BITS_EXT                    = 0xFFFFFFFF,
};


enum class PathFontStyle : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_BOLD_BIT_NV                             = 0x01,
    GL_ITALIC_BIT_NV                           = 0x02,
};


enum class PathMetricMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_FONT_X_MIN_BOUNDS_BIT_NV                = 0x00010000,
    GL_FONT_Y_MIN_BOUNDS_BIT_NV                = 0x00020000,
    GL_FONT_X_MAX_BOUNDS_BIT_NV                = 0x00040000,
    GL_FONT_Y_MAX_BOUNDS_BIT_NV                = 0x00080000,
    GL_FONT_UNITS_PER_EM_BIT_NV                = 0x00100000,
    GL_FONT_ASCENDER_BIT_NV                    = 0x00200000,
    GL_FONT_DESCENDER_BIT_NV                   = 0x00400000,
    GL_FONT_HEIGHT_BIT_NV                      = 0x00800000,
    GL_GLYPH_WIDTH_BIT_NV                      = 0x01,
    GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV           = 0x01000000,
    GL_GLYPH_HEIGHT_BIT_NV                     = 0x02,
    GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV          = 0x02000000,
    GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV       = 0x04,
    GL_FONT_UNDERLINE_POSITION_BIT_NV          = 0x04000000,
    GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV       = 0x08,
    GL_FONT_UNDERLINE_THICKNESS_BIT_NV         = 0x08000000,
    GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV = 0x10,
    GL_GLYPH_HAS_KERNING_BIT_NV                = 0x100,
    GL_FONT_HAS_KERNING_BIT_NV                 = 0x10000000,
    GL_GLYPH_VERTICAL_BEARING_X_BIT_NV         = 0x20,
    GL_FONT_NUM_GLYPH_INDICES_BIT_NV           = 0x20000000,
    GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV         = 0x40,
    GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV   = 0x80,
};


enum class PathRenderingMaskNV : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_FONT_X_MIN_BOUNDS_BIT_NV                = 0x00010000, // reuse from PathMetricMask
    GL_FONT_Y_MIN_BOUNDS_BIT_NV                = 0x00020000, // reuse from PathMetricMask
    GL_FONT_X_MAX_BOUNDS_BIT_NV                = 0x00040000, // reuse from PathMetricMask
    GL_FONT_Y_MAX_BOUNDS_BIT_NV                = 0x00080000, // reuse from PathMetricMask
    GL_FONT_UNITS_PER_EM_BIT_NV                = 0x00100000, // reuse from PathMetricMask
    GL_FONT_ASCENDER_BIT_NV                    = 0x00200000, // reuse from PathMetricMask
    GL_FONT_DESCENDER_BIT_NV                   = 0x00400000, // reuse from PathMetricMask
    GL_FONT_HEIGHT_BIT_NV                      = 0x00800000, // reuse from PathMetricMask
    GL_BOLD_BIT_NV                             = 0x01, // reuse from PathFontStyle
    GL_GLYPH_WIDTH_BIT_NV                      = 0x01, // reuse from PathMetricMask
    GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV           = 0x01000000, // reuse from PathMetricMask
    GL_GLYPH_HEIGHT_BIT_NV                     = 0x02, // reuse from PathMetricMask
    GL_ITALIC_BIT_NV                           = 0x02, // reuse from PathFontStyle
    GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV          = 0x02000000, // reuse from PathMetricMask
    GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV       = 0x04, // reuse from PathMetricMask
    GL_FONT_UNDERLINE_POSITION_BIT_NV          = 0x04000000, // reuse from PathMetricMask
    GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV       = 0x08, // reuse from PathMetricMask
    GL_FONT_UNDERLINE_THICKNESS_BIT_NV         = 0x08000000, // reuse from PathMetricMask
    GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV = 0x10, // reuse from PathMetricMask
    GL_GLYPH_HAS_KERNING_BIT_NV                = 0x100, // reuse from PathMetricMask
    GL_FONT_HAS_KERNING_BIT_NV                 = 0x10000000, // reuse from PathMetricMask
    GL_GLYPH_VERTICAL_BEARING_X_BIT_NV         = 0x20, // reuse from PathMetricMask
    GL_FONT_NUM_GLYPH_INDICES_BIT_NV           = 0x20000000, // reuse from PathMetricMask
    GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV         = 0x40, // reuse from PathMetricMask
    GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV   = 0x80, // reuse from PathMetricMask
};


enum class PerformanceQueryCapsMaskINTEL : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_PERFQUERY_SINGLE_CONTEXT_INTEL          = 0x00000000,
    GL_PERFQUERY_GLOBAL_CONTEXT_INTEL          = 0x00000001,
};


enum class SyncObjectMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_SYNC_FLUSH_COMMANDS_BIT                 = 0x00000001,
    GL_SYNC_FLUSH_COMMANDS_BIT_APPLE           = 0x00000001,
};


enum class UnusedMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_UNUSED_BIT                              = 0x00000000,
};


enum class UseProgramStageMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_VERTEX_SHADER_BIT                       = 0x00000001,
    GL_VERTEX_SHADER_BIT_EXT                   = 0x00000001,
    GL_FRAGMENT_SHADER_BIT                     = 0x00000002,
    GL_FRAGMENT_SHADER_BIT_EXT                 = 0x00000002,
    GL_GEOMETRY_SHADER_BIT                     = 0x00000004,
    GL_GEOMETRY_SHADER_BIT_EXT                 = 0x00000004,
    GL_GEOMETRY_SHADER_BIT_OES                 = 0x00000004,
    GL_TESS_CONTROL_SHADER_BIT                 = 0x00000008,
    GL_TESS_CONTROL_SHADER_BIT_EXT             = 0x00000008,
    GL_TESS_CONTROL_SHADER_BIT_OES             = 0x00000008,
    GL_TESS_EVALUATION_SHADER_BIT              = 0x00000010,
    GL_TESS_EVALUATION_SHADER_BIT_EXT          = 0x00000010,
    GL_TESS_EVALUATION_SHADER_BIT_OES          = 0x00000010,
    GL_COMPUTE_SHADER_BIT                      = 0x00000020,
    GL_ALL_SHADER_BITS                         = 0xFFFFFFFF,
    GL_ALL_SHADER_BITS_EXT                     = 0xFFFFFFFF,
};



// import bitfields to namespace

GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<AttribMask, BufferAccessMask, BufferBitQCOM, BufferStorageMask, ClearBufferMask, ContextFlagMask, FoveationConfigBitQCOM, MapBufferUsageMask, MemoryBarrierMask, PathFontStyle, PathMetricMask, PathRenderingMaskNV, PerformanceQueryCapsMaskINTEL, SyncObjectMask, UnusedMask, UseProgramStageMask> GL_NONE_BIT = AttribMask::GL_NONE_BIT;
GLESBINDING_CONSTEXPR static const PerformanceQueryCapsMaskINTEL GL_PERFQUERY_SINGLE_CONTEXT_INTEL = PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_SINGLE_CONTEXT_INTEL;
GLESBINDING_CONSTEXPR static const UnusedMask GL_UNUSED_BIT = UnusedMask::GL_UNUSED_BIT;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_COLOR_BUFFER_BIT0_QCOM = BufferBitQCOM::GL_COLOR_BUFFER_BIT0_QCOM;
GLESBINDING_CONSTEXPR static const FoveationConfigBitQCOM GL_FOVEATION_ENABLE_BIT_QCOM = FoveationConfigBitQCOM::GL_FOVEATION_ENABLE_BIT_QCOM;
GLESBINDING_CONSTEXPR static const PerformanceQueryCapsMaskINTEL GL_PERFQUERY_GLOBAL_CONTEXT_INTEL = PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_GLOBAL_CONTEXT_INTEL;
GLESBINDING_CONSTEXPR static const SyncObjectMask GL_SYNC_FLUSH_COMMANDS_BIT = SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT;
GLESBINDING_CONSTEXPR static const SyncObjectMask GL_SYNC_FLUSH_COMMANDS_BIT_APPLE = SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT_APPLE;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT = MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_VERTEX_SHADER_BIT = UseProgramStageMask::GL_VERTEX_SHADER_BIT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_VERTEX_SHADER_BIT_EXT = UseProgramStageMask::GL_VERTEX_SHADER_BIT_EXT;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_COLOR_BUFFER_BIT1_QCOM = BufferBitQCOM::GL_COLOR_BUFFER_BIT1_QCOM;
GLESBINDING_CONSTEXPR static const ContextFlagMask GL_CONTEXT_FLAG_DEBUG_BIT = ContextFlagMask::GL_CONTEXT_FLAG_DEBUG_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_ELEMENT_ARRAY_BARRIER_BIT = MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_ELEMENT_ARRAY_BARRIER_BIT_EXT = MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT_EXT;
GLESBINDING_CONSTEXPR static const FoveationConfigBitQCOM GL_FOVEATION_SCALED_BIN_METHOD_BIT_QCOM = FoveationConfigBitQCOM::GL_FOVEATION_SCALED_BIN_METHOD_BIT_QCOM;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_FRAGMENT_SHADER_BIT = UseProgramStageMask::GL_FRAGMENT_SHADER_BIT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_FRAGMENT_SHADER_BIT_EXT = UseProgramStageMask::GL_FRAGMENT_SHADER_BIT_EXT;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_COLOR_BUFFER_BIT2_QCOM = BufferBitQCOM::GL_COLOR_BUFFER_BIT2_QCOM;
GLESBINDING_CONSTEXPR static const ContextFlagMask GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT = ContextFlagMask::GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_GEOMETRY_SHADER_BIT = UseProgramStageMask::GL_GEOMETRY_SHADER_BIT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_GEOMETRY_SHADER_BIT_EXT = UseProgramStageMask::GL_GEOMETRY_SHADER_BIT_EXT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_GEOMETRY_SHADER_BIT_OES = UseProgramStageMask::GL_GEOMETRY_SHADER_BIT_OES;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_UNIFORM_BARRIER_BIT = MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_UNIFORM_BARRIER_BIT_EXT = MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT_EXT;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_COLOR_BUFFER_BIT3_QCOM = BufferBitQCOM::GL_COLOR_BUFFER_BIT3_QCOM;
GLESBINDING_CONSTEXPR static const ContextFlagMask GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR = ContextFlagMask::GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_TESS_CONTROL_SHADER_BIT = UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_TESS_CONTROL_SHADER_BIT_EXT = UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT_EXT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_TESS_CONTROL_SHADER_BIT_OES = UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT_OES;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_TEXTURE_FETCH_BARRIER_BIT = MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_TEXTURE_FETCH_BARRIER_BIT_EXT = MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT_EXT;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_COLOR_BUFFER_BIT4_QCOM = BufferBitQCOM::GL_COLOR_BUFFER_BIT4_QCOM;
GLESBINDING_CONSTEXPR static const ContextFlagMask GL_CONTEXT_FLAG_PROTECTED_CONTENT_BIT_EXT = ContextFlagMask::GL_CONTEXT_FLAG_PROTECTED_CONTENT_BIT_EXT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV = MemoryBarrierMask::GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_TESS_EVALUATION_SHADER_BIT = UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_TESS_EVALUATION_SHADER_BIT_EXT = UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT_EXT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_TESS_EVALUATION_SHADER_BIT_OES = UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT_OES;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_COLOR_BUFFER_BIT5_QCOM = BufferBitQCOM::GL_COLOR_BUFFER_BIT5_QCOM;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_COMPUTE_SHADER_BIT = UseProgramStageMask::GL_COMPUTE_SHADER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT = MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_COLOR_BUFFER_BIT6_QCOM = BufferBitQCOM::GL_COLOR_BUFFER_BIT6_QCOM;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_COMMAND_BARRIER_BIT = MemoryBarrierMask::GL_COMMAND_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_COMMAND_BARRIER_BIT_EXT = MemoryBarrierMask::GL_COMMAND_BARRIER_BIT_EXT;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_COLOR_BUFFER_BIT7_QCOM = BufferBitQCOM::GL_COLOR_BUFFER_BIT7_QCOM;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_PIXEL_BUFFER_BARRIER_BIT = MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_PIXEL_BUFFER_BARRIER_BIT_EXT = MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT_EXT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<AttribMask, ClearBufferMask> GL_DEPTH_BUFFER_BIT = AttribMask::GL_DEPTH_BUFFER_BIT;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_DEPTH_BUFFER_BIT0_QCOM = BufferBitQCOM::GL_DEPTH_BUFFER_BIT0_QCOM;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_TEXTURE_UPDATE_BARRIER_BIT = MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_TEXTURE_UPDATE_BARRIER_BIT_EXT = MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT_EXT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_BUFFER_UPDATE_BARRIER_BIT = MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_BUFFER_UPDATE_BARRIER_BIT_EXT = MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT_EXT;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_DEPTH_BUFFER_BIT1_QCOM = BufferBitQCOM::GL_DEPTH_BUFFER_BIT1_QCOM;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_DEPTH_BUFFER_BIT2_QCOM = BufferBitQCOM::GL_DEPTH_BUFFER_BIT2_QCOM;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_FRAMEBUFFER_BARRIER_BIT = MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_FRAMEBUFFER_BARRIER_BIT_EXT = MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT_EXT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<AttribMask, ClearBufferMask> GL_STENCIL_BUFFER_BIT = AttribMask::GL_STENCIL_BUFFER_BIT;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_DEPTH_BUFFER_BIT3_QCOM = BufferBitQCOM::GL_DEPTH_BUFFER_BIT3_QCOM;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_TRANSFORM_FEEDBACK_BARRIER_BIT = MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT = MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_ATOMIC_COUNTER_BARRIER_BIT = MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_ATOMIC_COUNTER_BARRIER_BIT_EXT = MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT_EXT;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_DEPTH_BUFFER_BIT4_QCOM = BufferBitQCOM::GL_DEPTH_BUFFER_BIT4_QCOM;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_DEPTH_BUFFER_BIT5_QCOM = BufferBitQCOM::GL_DEPTH_BUFFER_BIT5_QCOM;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_SHADER_STORAGE_BARRIER_BIT = MemoryBarrierMask::GL_SHADER_STORAGE_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT = MemoryBarrierMask::GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT = MemoryBarrierMask::GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<AttribMask, ClearBufferMask> GL_COLOR_BUFFER_BIT = AttribMask::GL_COLOR_BUFFER_BIT;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_DEPTH_BUFFER_BIT6_QCOM = BufferBitQCOM::GL_DEPTH_BUFFER_BIT6_QCOM;
GLESBINDING_CONSTEXPR static const ClearBufferMask GL_COVERAGE_BUFFER_BIT_NV = ClearBufferMask::GL_COVERAGE_BUFFER_BIT_NV;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_DEPTH_BUFFER_BIT7_QCOM = BufferBitQCOM::GL_DEPTH_BUFFER_BIT7_QCOM;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_QUERY_BUFFER_BARRIER_BIT = MemoryBarrierMask::GL_QUERY_BUFFER_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferAccessMask, BufferStorageMask, MapBufferUsageMask> GL_MAP_READ_BIT = BufferAccessMask::GL_MAP_READ_BIT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferAccessMask, MapBufferUsageMask> GL_MAP_READ_BIT_EXT = BufferAccessMask::GL_MAP_READ_BIT_EXT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_FONT_X_MIN_BOUNDS_BIT_NV = PathMetricMask::GL_FONT_X_MIN_BOUNDS_BIT_NV;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_STENCIL_BUFFER_BIT0_QCOM = BufferBitQCOM::GL_STENCIL_BUFFER_BIT0_QCOM;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferAccessMask, BufferStorageMask, MapBufferUsageMask> GL_MAP_WRITE_BIT = BufferAccessMask::GL_MAP_WRITE_BIT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferAccessMask, MapBufferUsageMask> GL_MAP_WRITE_BIT_EXT = BufferAccessMask::GL_MAP_WRITE_BIT_EXT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_FONT_Y_MIN_BOUNDS_BIT_NV = PathMetricMask::GL_FONT_Y_MIN_BOUNDS_BIT_NV;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_STENCIL_BUFFER_BIT1_QCOM = BufferBitQCOM::GL_STENCIL_BUFFER_BIT1_QCOM;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferAccessMask, MapBufferUsageMask> GL_MAP_INVALIDATE_RANGE_BIT = BufferAccessMask::GL_MAP_INVALIDATE_RANGE_BIT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferAccessMask, MapBufferUsageMask> GL_MAP_INVALIDATE_RANGE_BIT_EXT = BufferAccessMask::GL_MAP_INVALIDATE_RANGE_BIT_EXT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_FONT_X_MAX_BOUNDS_BIT_NV = PathMetricMask::GL_FONT_X_MAX_BOUNDS_BIT_NV;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_STENCIL_BUFFER_BIT2_QCOM = BufferBitQCOM::GL_STENCIL_BUFFER_BIT2_QCOM;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferAccessMask, MapBufferUsageMask> GL_MAP_INVALIDATE_BUFFER_BIT = BufferAccessMask::GL_MAP_INVALIDATE_BUFFER_BIT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferAccessMask, MapBufferUsageMask> GL_MAP_INVALIDATE_BUFFER_BIT_EXT = BufferAccessMask::GL_MAP_INVALIDATE_BUFFER_BIT_EXT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_FONT_Y_MAX_BOUNDS_BIT_NV = PathMetricMask::GL_FONT_Y_MAX_BOUNDS_BIT_NV;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_STENCIL_BUFFER_BIT3_QCOM = BufferBitQCOM::GL_STENCIL_BUFFER_BIT3_QCOM;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferAccessMask, MapBufferUsageMask> GL_MAP_FLUSH_EXPLICIT_BIT = BufferAccessMask::GL_MAP_FLUSH_EXPLICIT_BIT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferAccessMask, MapBufferUsageMask> GL_MAP_FLUSH_EXPLICIT_BIT_EXT = BufferAccessMask::GL_MAP_FLUSH_EXPLICIT_BIT_EXT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_FONT_UNITS_PER_EM_BIT_NV = PathMetricMask::GL_FONT_UNITS_PER_EM_BIT_NV;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_STENCIL_BUFFER_BIT4_QCOM = BufferBitQCOM::GL_STENCIL_BUFFER_BIT4_QCOM;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferAccessMask, MapBufferUsageMask> GL_MAP_UNSYNCHRONIZED_BIT = BufferAccessMask::GL_MAP_UNSYNCHRONIZED_BIT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferAccessMask, MapBufferUsageMask> GL_MAP_UNSYNCHRONIZED_BIT_EXT = BufferAccessMask::GL_MAP_UNSYNCHRONIZED_BIT_EXT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_FONT_ASCENDER_BIT_NV = PathMetricMask::GL_FONT_ASCENDER_BIT_NV;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_STENCIL_BUFFER_BIT5_QCOM = BufferBitQCOM::GL_STENCIL_BUFFER_BIT5_QCOM;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferAccessMask, BufferStorageMask, MapBufferUsageMask> GL_MAP_PERSISTENT_BIT = BufferAccessMask::GL_MAP_PERSISTENT_BIT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferAccessMask, MapBufferUsageMask> GL_MAP_PERSISTENT_BIT_EXT = BufferAccessMask::GL_MAP_PERSISTENT_BIT_EXT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_FONT_DESCENDER_BIT_NV = PathMetricMask::GL_FONT_DESCENDER_BIT_NV;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_STENCIL_BUFFER_BIT6_QCOM = BufferBitQCOM::GL_STENCIL_BUFFER_BIT6_QCOM;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferAccessMask, BufferStorageMask, MapBufferUsageMask> GL_MAP_COHERENT_BIT = BufferAccessMask::GL_MAP_COHERENT_BIT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferAccessMask, MapBufferUsageMask> GL_MAP_COHERENT_BIT_EXT = BufferAccessMask::GL_MAP_COHERENT_BIT_EXT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_FONT_HEIGHT_BIT_NV = PathMetricMask::GL_FONT_HEIGHT_BIT_NV;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_STENCIL_BUFFER_BIT7_QCOM = BufferBitQCOM::GL_STENCIL_BUFFER_BIT7_QCOM;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathFontStyle, PathRenderingMaskNV> GL_BOLD_BIT_NV = PathFontStyle::GL_BOLD_BIT_NV;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_GLYPH_WIDTH_BIT_NV = PathMetricMask::GL_GLYPH_WIDTH_BIT_NV;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferStorageMask, MapBufferUsageMask> GL_DYNAMIC_STORAGE_BIT = BufferStorageMask::GL_DYNAMIC_STORAGE_BIT;
GLESBINDING_CONSTEXPR static const MapBufferUsageMask GL_DYNAMIC_STORAGE_BIT_EXT = MapBufferUsageMask::GL_DYNAMIC_STORAGE_BIT_EXT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV = PathMetricMask::GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_MULTISAMPLE_BUFFER_BIT0_QCOM = BufferBitQCOM::GL_MULTISAMPLE_BUFFER_BIT0_QCOM;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_GLYPH_HEIGHT_BIT_NV = PathMetricMask::GL_GLYPH_HEIGHT_BIT_NV;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathFontStyle, PathRenderingMaskNV> GL_ITALIC_BIT_NV = PathFontStyle::GL_ITALIC_BIT_NV;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferStorageMask, MapBufferUsageMask> GL_CLIENT_STORAGE_BIT = BufferStorageMask::GL_CLIENT_STORAGE_BIT;
GLESBINDING_CONSTEXPR static const MapBufferUsageMask GL_CLIENT_STORAGE_BIT_EXT = MapBufferUsageMask::GL_CLIENT_STORAGE_BIT_EXT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV = PathMetricMask::GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_MULTISAMPLE_BUFFER_BIT1_QCOM = BufferBitQCOM::GL_MULTISAMPLE_BUFFER_BIT1_QCOM;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV = PathMetricMask::GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV;
GLESBINDING_CONSTEXPR static const MapBufferUsageMask GL_SPARSE_STORAGE_BIT_ARB = MapBufferUsageMask::GL_SPARSE_STORAGE_BIT_ARB;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_FONT_UNDERLINE_POSITION_BIT_NV = PathMetricMask::GL_FONT_UNDERLINE_POSITION_BIT_NV;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_MULTISAMPLE_BUFFER_BIT2_QCOM = BufferBitQCOM::GL_MULTISAMPLE_BUFFER_BIT2_QCOM;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV = PathMetricMask::GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV;
GLESBINDING_CONSTEXPR static const MapBufferUsageMask GL_LGPU_SEPARATE_STORAGE_BIT_NVX = MapBufferUsageMask::GL_LGPU_SEPARATE_STORAGE_BIT_NVX;
GLESBINDING_CONSTEXPR static const MapBufferUsageMask GL_PER_GPU_STORAGE_BIT_NV = MapBufferUsageMask::GL_PER_GPU_STORAGE_BIT_NV;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_FONT_UNDERLINE_THICKNESS_BIT_NV = PathMetricMask::GL_FONT_UNDERLINE_THICKNESS_BIT_NV;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_MULTISAMPLE_BUFFER_BIT3_QCOM = BufferBitQCOM::GL_MULTISAMPLE_BUFFER_BIT3_QCOM;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV = PathMetricMask::GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_GLYPH_HAS_KERNING_BIT_NV = PathMetricMask::GL_GLYPH_HAS_KERNING_BIT_NV;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_FONT_HAS_KERNING_BIT_NV = PathMetricMask::GL_FONT_HAS_KERNING_BIT_NV;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_MULTISAMPLE_BUFFER_BIT4_QCOM = BufferBitQCOM::GL_MULTISAMPLE_BUFFER_BIT4_QCOM;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_GLYPH_VERTICAL_BEARING_X_BIT_NV = PathMetricMask::GL_GLYPH_VERTICAL_BEARING_X_BIT_NV;
GLESBINDING_CONSTEXPR static const MapBufferUsageMask GL_EXTERNAL_STORAGE_BIT_NVX = MapBufferUsageMask::GL_EXTERNAL_STORAGE_BIT_NVX;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_FONT_NUM_GLYPH_INDICES_BIT_NV = PathMetricMask::GL_FONT_NUM_GLYPH_INDICES_BIT_NV;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_MULTISAMPLE_BUFFER_BIT5_QCOM = BufferBitQCOM::GL_MULTISAMPLE_BUFFER_BIT5_QCOM;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV = PathMetricMask::GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_MULTISAMPLE_BUFFER_BIT6_QCOM = BufferBitQCOM::GL_MULTISAMPLE_BUFFER_BIT6_QCOM;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<PathMetricMask, PathRenderingMaskNV> GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV = PathMetricMask::GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV;
GLESBINDING_CONSTEXPR static const BufferBitQCOM GL_MULTISAMPLE_BUFFER_BIT7_QCOM = BufferBitQCOM::GL_MULTISAMPLE_BUFFER_BIT7_QCOM;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_ALL_BARRIER_BITS = MemoryBarrierMask::GL_ALL_BARRIER_BITS;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_ALL_BARRIER_BITS_EXT = MemoryBarrierMask::GL_ALL_BARRIER_BITS_EXT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_ALL_SHADER_BITS = UseProgramStageMask::GL_ALL_SHADER_BITS;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_ALL_SHADER_BITS_EXT = UseProgramStageMask::GL_ALL_SHADER_BITS_EXT;


} // namespace gles
