
#include "Meta_Maps.h"

#include <glbinding/bitfield.h>


namespace gl
{

// ToDo: this is currently insufficient, since lots of bitfields use 
// the same values. It might help to apply the concept of groups here.

// The same issue applies for enums in general, but there overlapping
// values mostly occur within the same application context.

const std::unordered_map<GLbitfield, std::string> Meta_StringsByBitfield =
{
#ifdef STRINGS_BY_GL
/*
    { GLbitfield::GL_ACCUM_BUFFER_BIT, "GL_ACCUM_BUFFER_BIT" },
    { GLbitfield::GL_ALL_ATTRIB_BITS, "GL_ALL_ATTRIB_BITS" },
    { GLbitfield::GL_ATOMIC_COUNTER_BARRIER_BIT, "GL_ATOMIC_COUNTER_BARRIER_BIT" },
    { GLbitfield::GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT, "GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT" },
    { GLbitfield::GL_CLIENT_PIXEL_STORE_BIT, "GL_CLIENT_PIXEL_STORE_BIT" },
    { GLbitfield::GL_CLIENT_VERTEX_ARRAY_BIT, "GL_CLIENT_VERTEX_ARRAY_BIT" },
    { GLbitfield::GL_COMMAND_BARRIER_BIT, "GL_COMMAND_BARRIER_BIT" },
    { GLbitfield::GL_COMPUTE_SHADER_BIT, "GL_COMPUTE_SHADER_BIT" },
    { GLbitfield::GL_DEPTH_BUFFER_BIT, "GL_DEPTH_BUFFER_BIT" },
    { GLbitfield::GL_ENABLE_BIT, "GL_ENABLE_BIT" },
    { GLbitfield::GL_EVAL_BIT, "GL_EVAL_BIT" },
    { GLbitfield::GL_FOG_BIT, "GL_FOG_BIT" },
    { GLbitfield::GL_FONT_ASCENDER_BIT_NV, "GL_FONT_ASCENDER_BIT_NV" },
    { GLbitfield::GL_FONT_DESCENDER_BIT_NV, "GL_FONT_DESCENDER_BIT_NV" },
    { GLbitfield::GL_FONT_HAS_KERNING_BIT_NV, "GL_FONT_HAS_KERNING_BIT_NV" },
    { GLbitfield::GL_FONT_HEIGHT_BIT_NV, "GL_FONT_HEIGHT_BIT_NV" },
    { GLbitfield::GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV, "GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV" },
    { GLbitfield::GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV, "GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV" },
    { GLbitfield::GL_FONT_UNDERLINE_POSITION_BIT_NV, "GL_FONT_UNDERLINE_POSITION_BIT_NV" },
    { GLbitfield::GL_FONT_UNDERLINE_THICKNESS_BIT_NV, "GL_FONT_UNDERLINE_THICKNESS_BIT_NV" },
    { GLbitfield::GL_FONT_UNITS_PER_EM_BIT_NV, "GL_FONT_UNITS_PER_EM_BIT_NV" },
    { GLbitfield::GL_FRAMEBUFFER_BARRIER_BIT, "GL_FRAMEBUFFER_BARRIER_BIT" },
    { GLbitfield::GL_GEOMETRY_SHADER_BIT, "GL_GEOMETRY_SHADER_BIT" },
    { GLbitfield::GL_HINT_BIT, "GL_HINT_BIT" },
    { GLbitfield::GL_LIST_BIT, "GL_LIST_BIT" },
    { GLbitfield::GL_MAP_FLUSH_EXPLICIT_BIT, "GL_MAP_FLUSH_EXPLICIT_BIT" },
    { GLbitfield::GL_MAP_INVALIDATE_BUFFER_BIT, "GL_MAP_INVALIDATE_BUFFER_BIT" },
    { GLbitfield::GL_MULTISAMPLE_BIT, "GL_MULTISAMPLE_BIT" },
    { GLbitfield::GL_PERFQUERY_SINGLE_CONTEXT_INTEL, "GL_PERFQUERY_SINGLE_CONTEXT_INTEL" },
    { GLbitfield::GL_SCISSOR_BIT, "GL_SCISSOR_BIT" },
    { GLbitfield::GL_TEXCOORD3_BIT_PGI, "GL_TEXCOORD3_BIT_PGI" },
    { GLbitfield::GL_TEXCOORD4_BIT_PGI, "GL_TEXCOORD4_BIT_PGI" },
    { GLbitfield::GL_TEXTURE_BIT, "GL_TEXTURE_BIT" },
    { GLbitfield::GL_TRACE_ALL_BITS_MESA, "GL_TRACE_ALL_BITS_MESA" },
    { GLbitfield::GL_TRANSFORM_FEEDBACK_BARRIER_BIT, "GL_TRANSFORM_FEEDBACK_BARRIER_BIT" }
*/
#endif
};

} // namespace gl
