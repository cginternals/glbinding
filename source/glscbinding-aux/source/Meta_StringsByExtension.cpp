
#include "Meta_Maps.h"

#include <glscbinding/glsc/extension.h>


using namespace glsc;


namespace glscbinding { namespace aux
{


const std::unordered_map<GLextension, std::string> Meta_StringsByExtension =
{
    { GLextension::GL_EXT_texture_compression_s3tc, "GL_EXT_texture_compression_s3tc" },
    { GLextension::GL_OES_depth24, "GL_OES_depth24" },
    { GLextension::GL_OES_depth32, "GL_OES_depth32" },
    { GLextension::GL_OES_rgb8_rgba8, "GL_OES_rgb8_rgba8" },
    { GLextension::GL_OES_standard_derivatives, "GL_OES_standard_derivatives" }
};


} } // namespace glscbinding::aux
