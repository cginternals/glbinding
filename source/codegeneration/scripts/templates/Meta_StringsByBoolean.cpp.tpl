
#include "Meta_Maps.h"

#include <{{api}}binding/{{api}}/boolean.h>


using namespace {{api}};


namespace {{api}}binding
{


const std::unordered_map<GLboolean, std::string> Meta_StringsByBoolean =
{
{{#booleans.items}}
    { {{api}}::{{item.identifier}}, "{{item.name}}" }{{^last}},{{/last}}
{{/booleans.items}}
};


} // namespace {{api}}binding
