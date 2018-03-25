
#include "Meta_Maps.h"

#include <glesbinding/gles/boolean.h>


using namespace gles;


namespace glesbinding { namespace aux
{


const std::unordered_map<GLboolean, std::string> Meta_StringsByBoolean =
{
    { gles::GL_FALSE, "GL_FALSE" },
    { gles::GL_TRUE, "GL_TRUE" }
};


} } // namespace glesbinding::aux
