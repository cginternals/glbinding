
#include "Meta_Maps.h"

#include <glscbinding/glsc/boolean.h>


using namespace glsc;


namespace glscbinding { namespace aux
{


const std::unordered_map<GLboolean, std::string> Meta_StringsByBoolean =
{
    { glsc::GL_FALSE, "GL_FALSE" },
    { glsc::GL_TRUE, "GL_TRUE" }
};


} } // namespace glscbinding::aux
