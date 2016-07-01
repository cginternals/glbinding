
#include "Meta_Maps.h"

#include <glbinding/gl/boolean.h>


using namespace gl;

namespace glbinding
{


const std::unordered_map<std::string, GLboolean> Meta_BooleansByString =
{
    { "GL_FALSE", gl::GL_FALSE },
    { "GL_TRUE", gl::GL_TRUE }
};


} // namespace glbinding
