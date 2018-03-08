
#include "Meta_Maps.h"

#include <{{api}}binding/{{api}}/extension.h>


using namespace {{api}};


namespace {{api}}binding
{


{{#extensionsByCommandsByInitial.groups}}
{{#empty}}
const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_{{name}}{};
{{/empty}}
{{^empty}}
const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_{{name}} =
{
{{#items}}
    { "{{item.command}}", { {{#item.extensions.items}}GLextension::{{item.identifier}}{{^last}}, {{/last}}{{/item.extensions.items}} } }{{^last}},{{/last}}
{{/items}}
};
{{/empty}}

{{/extensionsByCommandsByInitial.groups}}
const std::array<std::unordered_map<std::string, std::set<{{api}}::GLextension>>, {{extensionsByCommandsByInitial.count}}> Meta_ExtensionsByFunctionStringMaps =
{ {
{{#extensionsByCommandsByInitial.groups}}
    Meta_ExtensionsByFunctionString_{{name}}{{^last}},{{/last}}
{{/extensionsByCommandsByInitial.groups}}
} };


} // namespace {{api}}binding
