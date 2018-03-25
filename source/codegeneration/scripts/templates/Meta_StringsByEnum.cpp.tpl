
#include "Meta_Maps.h"

#include <{{api}}binding/{{api}}/enum.h>


using namespace {{api}};


namespace {{api}}binding { namespace aux
{


const std::unordered_map<{{enumType}}, std::string> Meta_StringsByEnum =
{
{{#enumsByValue.groups}}
    { {{enumType}}::{{firstItem.identifier}}, "{{firstItem.name}}" }{{^last}},{{/last}}
{{/enumsByValue.groups}}
};


} } // namespace {{api}}binding::aux
