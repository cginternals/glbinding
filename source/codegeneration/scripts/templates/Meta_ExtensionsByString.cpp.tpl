
#include "Meta_Maps.h"

#include <glbinding/gl/extension.h>


using namespace gl;


namespace glbinding
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
const std::array<std::unordered_map<std::string, gl::GLextension>, {{extensionsByInitial.count}}> Meta_ExtensionsByStringMaps =
{ {
{{#extensionsByInitial.groups}}
    Meta_ExtensionsByString_{{name}}{{^last}},{{/last}}
{{/extensionsByInitial.groups}}
} };


} // namespace glbinding
