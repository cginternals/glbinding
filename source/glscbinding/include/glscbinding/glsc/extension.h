
#pragma once


#include <glscbinding/noglsc.h>


namespace glsc
{


enum class GLextension : int // GLextension is not a type introduced by GLSC API so far
{
    UNKNOWN = -1,
    GL_EXT_texture_compression_s3tc,
    GL_OES_depth24,
    GL_OES_depth32,
    GL_OES_rgb8_rgba8,
    GL_OES_standard_derivatives
};


} // namespace glsc
