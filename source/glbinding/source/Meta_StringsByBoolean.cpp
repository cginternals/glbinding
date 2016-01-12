
#ifdef EXTENSIVE_META

#include "Meta_Maps.h"

#include <glbinding/gl/boolean.h>

using namespace gl; // ToDo: multiple APIs?


namespace glbinding
{


const std::unordered_map<GLboolean, std::string> Meta_StringsByBoolean =
{
    { GLboolean::GL_FALSE, "GL_FALSE" },
    { GLboolean::GL_TRUE, "GL_TRUE" }
};


} // namespace glbinding


#endif // EXTENSIVE_META
