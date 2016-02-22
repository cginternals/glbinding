
// NOTE: this is intended to work regardless of a EXTENSIVE_META definition.

#include "Meta_Maps.h"

#include <glbinding/gl/extension.h>


using namespace gl; // ToDo: multiple APIs?

namespace glbinding
{

{{#keys}}
{{#empty}}
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_{{key}};
{{/empty}}
{{^empty}}
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_{{key}} =
{
{{#extensions}}
    { "{{name}}", GLextension::{{identifier}} }{{^last}},{{/last}}
{{/extensions}}
};
{{/empty}}

{{/keys}}
const std::array<std::unordered_map<std::string, gl::GLextension>, {{keyCount}}> Meta_ExtensionsByStringMaps =
{ {
{{#keys}}
    Meta_ExtensionsByString_{{key}}{{^last}},{{/last}}
{{/keys}}
} };

} // namespace glbinding
