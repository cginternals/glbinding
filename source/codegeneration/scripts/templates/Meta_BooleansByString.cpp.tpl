
#include "Meta_Maps.h"

#include <{{api}}binding/{{api}}/boolean.h>


using namespace {{api}};


namespace {{api}}binding
{


const std::unordered_map<std::string, GLboolean> Meta_BooleansByString =
{
{{#booleans.items}}
    { "{{item.name}}", {{api}}::{{item.identifier}} }{{^last}},{{/last}}
{{/booleans.items}}
};


} // namespace {{api}}binding
