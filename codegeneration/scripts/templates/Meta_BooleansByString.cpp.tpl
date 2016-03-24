
#include "Meta_Maps.h"

#include <glbinding/gl/boolean.h>


using namespace gl; // ToDo: multiple APIs?

namespace glbinding
{


const std::unordered_map<std::string, GLboolean> Meta_BooleansByString =
{
{{#booleans.items}}
    { "{{item.name}}", GLboolean::{{item.identifier}} }{{^last}},{{/last}}
{{/booleans.items}}
};


} // namespace glbinding
