
#include "Meta_Maps.h"

#include <glxbinding/glx/bitfield.h>


using namespace glx;


namespace glxbinding
{


const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_-1 =
{
    { "GLX_ACCUM_BUFFER_BIT", static_cast<GLbitfield>(None::GLX_ACCUM_BUFFER_BIT) },
    { "GLX_ACCUM_BUFFER_BIT_SGIX", static_cast<GLbitfield>(None::GLX_ACCUM_BUFFER_BIT_SGIX) },
    { "GLX_AUX_BUFFERS_BIT", static_cast<GLbitfield>(None::GLX_AUX_BUFFERS_BIT) },
    { "GLX_AUX_BUFFERS_BIT_SGIX", static_cast<GLbitfield>(None::GLX_AUX_BUFFERS_BIT_SGIX) },
    { "GLX_BACK_LEFT_BUFFER_BIT", static_cast<GLbitfield>(None::GLX_BACK_LEFT_BUFFER_BIT) },
    { "GLX_BACK_LEFT_BUFFER_BIT_SGIX", static_cast<GLbitfield>(None::GLX_BACK_LEFT_BUFFER_BIT_SGIX) },
    { "GLX_BACK_RIGHT_BUFFER_BIT", static_cast<GLbitfield>(None::GLX_BACK_RIGHT_BUFFER_BIT) },
    { "GLX_BACK_RIGHT_BUFFER_BIT_SGIX", static_cast<GLbitfield>(None::GLX_BACK_RIGHT_BUFFER_BIT_SGIX) },
    { "GLX_BUFFER_CLOBBER_MASK_SGIX", static_cast<GLbitfield>(None::GLX_BUFFER_CLOBBER_MASK_SGIX) },
    { "GLX_BUFFER_SWAP_COMPLETE_INTEL_MASK", static_cast<GLbitfield>(None::GLX_BUFFER_SWAP_COMPLETE_INTEL_MASK) },
    { "GLX_COLOR_INDEX_BIT", static_cast<GLbitfield>(None::GLX_COLOR_INDEX_BIT) },
    { "GLX_COLOR_INDEX_BIT_SGIX", static_cast<GLbitfield>(None::GLX_COLOR_INDEX_BIT_SGIX) },
    { "GLX_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB", static_cast<GLbitfield>(None::GLX_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB) },
    { "GLX_CONTEXT_CORE_PROFILE_BIT_ARB", static_cast<GLbitfield>(None::GLX_CONTEXT_CORE_PROFILE_BIT_ARB) },
    { "GLX_CONTEXT_DEBUG_BIT_ARB", static_cast<GLbitfield>(None::GLX_CONTEXT_DEBUG_BIT_ARB) },
    { "GLX_CONTEXT_ES2_PROFILE_BIT_EXT", static_cast<GLbitfield>(None::GLX_CONTEXT_ES2_PROFILE_BIT_EXT) },
    { "GLX_CONTEXT_ES_PROFILE_BIT_EXT", static_cast<GLbitfield>(None::GLX_CONTEXT_ES_PROFILE_BIT_EXT) },
    { "GLX_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB", static_cast<GLbitfield>(None::GLX_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB) },
    { "GLX_CONTEXT_RESET_ISOLATION_BIT_ARB", static_cast<GLbitfield>(None::GLX_CONTEXT_RESET_ISOLATION_BIT_ARB) },
    { "GLX_CONTEXT_ROBUST_ACCESS_BIT_ARB", static_cast<GLbitfield>(None::GLX_CONTEXT_ROBUST_ACCESS_BIT_ARB) },
    { "GLX_DEPTH_BUFFER_BIT", static_cast<GLbitfield>(None::GLX_DEPTH_BUFFER_BIT) },
    { "GLX_DEPTH_BUFFER_BIT_SGIX", static_cast<GLbitfield>(None::GLX_DEPTH_BUFFER_BIT_SGIX) },
    { "GLX_FRONT_LEFT_BUFFER_BIT", static_cast<GLbitfield>(None::GLX_FRONT_LEFT_BUFFER_BIT) },
    { "GLX_FRONT_LEFT_BUFFER_BIT_SGIX", static_cast<GLbitfield>(None::GLX_FRONT_LEFT_BUFFER_BIT_SGIX) },
    { "GLX_FRONT_RIGHT_BUFFER_BIT", static_cast<GLbitfield>(None::GLX_FRONT_RIGHT_BUFFER_BIT) },
    { "GLX_FRONT_RIGHT_BUFFER_BIT_SGIX", static_cast<GLbitfield>(None::GLX_FRONT_RIGHT_BUFFER_BIT_SGIX) },
    { "GLX_HYPERPIPE_DISPLAY_PIPE_SGIX", static_cast<GLbitfield>(None::GLX_HYPERPIPE_DISPLAY_PIPE_SGIX) },
    { "GLX_HYPERPIPE_PIXEL_AVERAGE_SGIX", static_cast<GLbitfield>(None::GLX_HYPERPIPE_PIXEL_AVERAGE_SGIX) },
    { "GLX_HYPERPIPE_RENDER_PIPE_SGIX", static_cast<GLbitfield>(None::GLX_HYPERPIPE_RENDER_PIPE_SGIX) },
    { "GLX_HYPERPIPE_STEREO_SGIX", static_cast<GLbitfield>(None::GLX_HYPERPIPE_STEREO_SGIX) },
    { "GLX_PBUFFER_BIT", static_cast<GLbitfield>(None::GLX_PBUFFER_BIT) },
    { "GLX_PBUFFER_BIT_SGIX", static_cast<GLbitfield>(None::GLX_PBUFFER_BIT_SGIX) },
    { "GLX_PBUFFER_CLOBBER_MASK", static_cast<GLbitfield>(None::GLX_PBUFFER_CLOBBER_MASK) },
    { "GLX_PIPE_RECT_LIMITS_SGIX", static_cast<GLbitfield>(None::GLX_PIPE_RECT_LIMITS_SGIX) },
    { "GLX_PIPE_RECT_SGIX", static_cast<GLbitfield>(None::GLX_PIPE_RECT_SGIX) },
    { "GLX_PIXMAP_BIT", static_cast<GLbitfield>(None::GLX_PIXMAP_BIT) },
    { "GLX_PIXMAP_BIT_SGIX", static_cast<GLbitfield>(None::GLX_PIXMAP_BIT_SGIX) },
    { "GLX_RGBA_BIT", static_cast<GLbitfield>(None::GLX_RGBA_BIT) },
    { "GLX_RGBA_BIT_SGIX", static_cast<GLbitfield>(None::GLX_RGBA_BIT_SGIX) },
    { "GLX_RGBA_FLOAT_BIT_ARB", static_cast<GLbitfield>(None::GLX_RGBA_FLOAT_BIT_ARB) },
    { "GLX_RGBA_UNSIGNED_FLOAT_BIT_EXT", static_cast<GLbitfield>(None::GLX_RGBA_UNSIGNED_FLOAT_BIT_EXT) },
    { "GLX_SAMPLE_BUFFERS_BIT_SGIX", static_cast<GLbitfield>(None::GLX_SAMPLE_BUFFERS_BIT_SGIX) },
    { "GLX_STENCIL_BUFFER_BIT", static_cast<GLbitfield>(None::GLX_STENCIL_BUFFER_BIT) },
    { "GLX_STENCIL_BUFFER_BIT_SGIX", static_cast<GLbitfield>(None::GLX_STENCIL_BUFFER_BIT_SGIX) },
    { "GLX_STEREO_NOTIFY_MASK_EXT", static_cast<GLbitfield>(None::GLX_STEREO_NOTIFY_MASK_EXT) },
    { "GLX_SYNC_FRAME_SGIX", static_cast<GLbitfield>(None::GLX_SYNC_FRAME_SGIX) },
    { "GLX_SYNC_SWAP_SGIX", static_cast<GLbitfield>(None::GLX_SYNC_SWAP_SGIX) },
    { "GLX_TEXTURE_1D_BIT_EXT", static_cast<GLbitfield>(None::GLX_TEXTURE_1D_BIT_EXT) },
    { "GLX_TEXTURE_2D_BIT_EXT", static_cast<GLbitfield>(None::GLX_TEXTURE_2D_BIT_EXT) },
    { "GLX_TEXTURE_RECTANGLE_BIT_EXT", static_cast<GLbitfield>(None::GLX_TEXTURE_RECTANGLE_BIT_EXT) },
    { "GLX_WINDOW_BIT", static_cast<GLbitfield>(None::GLX_WINDOW_BIT) },
    { "GLX_WINDOW_BIT_SGIX", static_cast<GLbitfield>(None::GLX_WINDOW_BIT_SGIX) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_0{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_A{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_B{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_C{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_D{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_E{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_F{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_G{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_H{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_I{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_J{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_K{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_L{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_M{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_N =
{
    { "GL_NONE_BIT", static_cast<GLbitfield>(None::GL_NONE_BIT) }
};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_O{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_P{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_Q{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_R{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_S{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_T{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_U{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_V{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_W{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_X{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_Y{};

const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_Z{};

const std::array<std::unordered_map<std::string, glx::GLbitfield>, 28> Meta_BitfieldsByStringMaps =
{ {
    Meta_BitfieldsByString_-1,
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


} // namespace glxbinding
