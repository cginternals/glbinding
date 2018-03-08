
#include "Meta_Maps.h"

#include <glscbinding/glsc/boolean.h>


using namespace glsc;


namespace glscbinding
{


const std::unordered_map<std::string, GLboolean> Meta_BooleansByString =
{
    { "GL_FALSE", glsc::GL_FALSE },
    { "GL_TRUE", glsc::GL_TRUE }
};


} // namespace glscbinding
