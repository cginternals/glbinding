
#include "Meta_Maps.h"

#include <{{api}}binding/{{api}}/boolean.h>


using namespace {{api}};


namespace {{api}}binding { namespace aux
{


const std::unordered_map<GLboolean, std::string> Meta_StringsByBoolean =
{
{{#booleans.items}}
    { {{api}}::{{item.identifier}}, "{{item.name}}" }{{^last}},{{/last}}
{{/booleans.items}}
};


} } // namespace {{api}}binding::aux
