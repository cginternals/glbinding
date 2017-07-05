
#include "Meta_Maps.h"

#include <glbinding/gl/boolean.h>


using namespace gl;


namespace glbinding
{


const std::unordered_map<GLboolean, std::string> Meta_StringsByBoolean =
{
{{#booleans.items}}
    { gl::{{item.identifier}}, "{{item.name}}" }{{^last}},{{/last}}
{{/booleans.items}}
};


} // namespace glbinding
