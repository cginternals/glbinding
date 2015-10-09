
#include "Meta_Maps.h"

#include <glesbinding/gles/typeintegrations.h>
#include <glesbinding/gles/boolean.h>


using namespace gles;

namespace glesbinding
{

const std::unordered_map<GLboolean, std::string> Meta_StringsByBoolean
{
#ifdef STRINGS_BY_SYMBOLS
    { GLboolean::GL_FALSE, "GL_FALSE" },
    { GLboolean::GL_TRUE, "GL_TRUE" }
#endif
};

} // namespace glesbinding
