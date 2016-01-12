
#ifdef EXTENSIVE_META

#include "Meta_Maps.h"

#include <glbinding/gl/boolean.h>

using namespace gl; // ToDo: multiple APIs?


namespace glbinding
{


const std::unordered_map<std::string, GLboolean> Meta_BooleansByString =
{
    { "GL_FALSE", GLboolean::GL_FALSE },
    { "GL_TRUE", GLboolean::GL_TRUE }
};



} // namespace glbinding


#endif // EXTENSIVE_META
