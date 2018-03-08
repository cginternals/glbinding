
#include "Meta_Maps.h"

#include <{{api}}binding/{{api}}/extension.h>


using namespace {{api}};


namespace {{api}}binding
{


{{#extensionsByInitial.groups}}
{{#empty}}
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_{{name}}{};
{{/empty}}
{{^empty}}
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_{{name}} =
{
{{#items}}
    { "{{item.name}}", GLextension::{{item.identifier}} }{{^last}},{{/last}}
{{/items}}
};
{{/empty}}

{{/extensionsByInitial.groups}}
const std::array<std::unordered_map<std::string, {{api}}::GLextension>, {{extensionsByInitial.count}}> Meta_ExtensionsByStringMaps =
{ {
{{#extensionsByInitial.groups}}
    Meta_ExtensionsByString_{{name}}{{^last}},{{/last}}
{{/extensionsByInitial.groups}}
} };


} // namespace {{api}}binding
