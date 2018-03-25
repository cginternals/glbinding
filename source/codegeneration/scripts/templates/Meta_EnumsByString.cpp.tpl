
#include "Meta_Maps.h"

#include <{{api}}binding/{{api}}/enum.h>


using namespace {{api}};


namespace {{api}}binding { namespace aux
{


{{#enumsByInitial.groups}}
{{^empty}}
const std::unordered_map<std::string, {{enumType}}> Meta_EnumsByString_{{name}} =
{
{{#items}}
    { "{{item.name}}", {{enumType}}::{{item.identifier}} }{{^last}},{{/last}}
{{/items}}
};
{{/empty}}
{{#empty}}
const std::unordered_map<std::string, {{enumType}}> Meta_EnumsByString_{{name}}{};
{{/empty}}

{{/enumsByInitial.groups}}
const std::array<std::unordered_map<std::string, {{api}}::{{enumType}}>, {{enumsByInitial.count}}> Meta_EnumsByStringMaps =
{ {
{{#enumsByInitial.groups}}
    Meta_EnumsByString_{{name}}{{^last}},{{/last}}
{{/enumsByInitial.groups}}
} };


} } // namespace {{api}}binding::aux
