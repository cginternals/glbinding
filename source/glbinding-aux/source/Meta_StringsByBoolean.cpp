
#include "Meta_Maps.h"

#include <glbinding/gl/boolean.h>


using namespace gl;


namespace glbinding
{


const std::unordered_map<GLboolean, std::string> Meta_StringsByBoolean =
{
    { gl::GL_FALSE, "GL_FALSE" },
    { gl::GL_TRUE, "GL_TRUE" }
};


} // namespace glbinding
