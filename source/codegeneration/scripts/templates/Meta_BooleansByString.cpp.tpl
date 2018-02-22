
#include "Meta_Maps.h"

#include <glbinding/gl/boolean.h>


using namespace gl;


namespace glbinding
{


const std::unordered_map<std::string, GLboolean> Meta_BooleansByString =
{
{{#booleans.items}}
    { "{{item.name}}", gl::{{item.identifier}} }{{^last}},{{/last}}
{{/booleans.items}}
};


} // namespace glbinding
