
#include "Meta_Maps.h"

#include <glbinding/boolean.h>


namespace gl
{

const std::unordered_map<GLboolean, std::string> Meta_StringsByBoolean =
{
#ifdef STRINGS_BY_GL
    { GLboolean::GL_FALSE, "GL_FALSE" },
    { GLboolean::GL_TRUE, "GL_TRUE" }
#endif
};

} // namespace gl
