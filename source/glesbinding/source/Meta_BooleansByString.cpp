
#include "Meta_Maps.h"

#include <glesbinding/gles/typeintegrations.h>
#include <glesbinding/gles/boolean.h>


using namespace gles;

namespace glesbinding
{

const std::unordered_map<std::string, GLboolean> Meta_BooleansByString
{
#ifdef SYMBOLS_BY_STRINGS
    { "GL_FALSE", GLboolean::GL_FALSE },
    { "GL_TRUE", GLboolean::GL_TRUE }
#endif
};

} // namespace glesbinding
