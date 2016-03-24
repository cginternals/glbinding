
#include "Meta_Maps.h"

#include <glbinding/gl/boolean.h>

using namespace gl; // ToDo: multiple APIs?


namespace glbinding
{


const std::unordered_map<GLboolean, std::string> Meta_StringsByBoolean =
{
{{#booleans.items}}
    { GLboolean::{{item.identifier}}, "{{item.name}}" }{{^last}},{{/last}}
{{/booleans.items}}
};


} // namespace glbinding
