#ifdef EXTENSIVE_META

#include "Meta_Maps.h"

#include <glbinding/gl/extension.h>


using namespace gl; // ToDo: multiple APIs?

namespace glbinding
{

{{#keys}}
{{#empty}}
const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_{{key}};
{{/empty}}
{{^empty}}
const std::unordered_map<std::string, std::set<GLextension>> Meta_ExtensionsByFunctionString_{{key}} =
{
{{#commands}}
    { "{{name}}", { {{#extensions}}GLextension::{{identifier}}{{^last}}, {{/last}}{{/extensions}} } }{{^last}},{{/last}}
{{/commands}}
};
{{/empty}}

{{/keys}}
const std::array<std::unordered_map<std::string, std::set<gl::GLextension>>, {{keyCount}}> Meta_ExtensionsByFunctionStringMaps =
{ {
{{#keys}}
    Meta_ExtensionsByFunctionString_{{key}}{{^last}},{{/last}}
{{/keys}}
} };

} // namespace glbinding

#endif // EXTENSIVE_META
