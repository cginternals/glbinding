
#include "Meta_Maps.h"

#include <glesbinding/gles/boolean.h>


using namespace gles;


namespace glesbinding { namespace aux
{


const std::unordered_map<std::string, GLboolean> Meta_BooleansByString =
{
    { "GL_FALSE", gles::GL_FALSE },
    { "GL_TRUE", gles::GL_TRUE }
};


} } // namespace glesbinding::aux
