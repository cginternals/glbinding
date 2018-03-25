
#include "Meta_Maps.h"

#include <{{api}}binding/{{api}}/extension.h>


using namespace {{api}};


namespace {{api}}binding { namespace aux
{


{{#extensionsByInitial.groups}}
{{#empty}}
const std::unordered_map<std::string, {{extensionType}}> Meta_ExtensionsByString_{{name}}{};
{{/empty}}
{{^empty}}
const std::unordered_map<std::string, {{extensionType}}> Meta_ExtensionsByString_{{name}} =
{
{{#items}}
    { "{{item.name}}", {{extensionType}}::{{item.identifier}} }{{^last}},{{/last}}
{{/items}}
};
{{/empty}}

{{/extensionsByInitial.groups}}
const std::array<std::unordered_map<std::string, {{api}}::{{extensionType}}>, {{extensionsByInitial.count}}> Meta_ExtensionsByStringMaps =
{ {
{{#extensionsByInitial.groups}}
    Meta_ExtensionsByString_{{name}}{{^last}},{{/last}}
{{/extensionsByInitial.groups}}
} };


} } // namespace {{api}}binding::aux
