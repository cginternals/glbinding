
#include "Meta_Maps.h"

#include <glbinding/gl/extension.h>


using namespace gl;


namespace glbinding
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
const std::array<std::unordered_map<std::string, std::set<gl::GLextension>>, {{extensionsByCommandsByInitial.count}}> Meta_ExtensionsByFunctionStringMaps =
{ {
{{#extensionsByCommandsByInitial.groups}}
    Meta_ExtensionsByFunctionString_{{name}}{{^last}},{{/last}}
{{/extensionsByCommandsByInitial.groups}}
} };


} // namespace glbinding
