
#include "Meta_Maps.h"

#include <glpbinding/glp/typeintegrations.h>
#include <glpbinding/glp/boolean.h>


using namespace glp;

namespace glpbinding
{

const std::unordered_map<std::string, GLboolean> Meta_BooleansByString
{
#ifdef SYMBOLS_BY_STRINGS
    { "GL_FALSE", GLboolean::GL_FALSE },
    { "GL_TRUE", GLboolean::GL_TRUE }
#endif
};

} // namespace glpbinding
