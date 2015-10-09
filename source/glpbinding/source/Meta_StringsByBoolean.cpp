
#include "Meta_Maps.h"

#include <glpbinding/glp/typeintegrations.h>
#include <glpbinding/glp/boolean.h>


using namespace glp;

namespace glpbinding
{

const std::unordered_map<GLboolean, std::string> Meta_StringsByBoolean
{
#ifdef STRINGS_BY_SYMBOLS
    { GLboolean::GL_FALSE, "GL_FALSE" },
    { GLboolean::GL_TRUE, "GL_TRUE" }
#endif
};

} // namespace glpbinding
