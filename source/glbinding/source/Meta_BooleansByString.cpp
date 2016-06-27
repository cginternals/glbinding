
#include "Meta_Maps.h"

#include <glbinding/gl/boolean.h>


using namespace gl;

namespace glbinding
{


const std::unordered_map<std::string, GLboolean> Meta_BooleansByString =
{
    { "GL_FALSE", GLboolean::GL_FALSE },
    { "GL_TRUE", GLboolean::GL_TRUE }
};


} // namespace glbinding
