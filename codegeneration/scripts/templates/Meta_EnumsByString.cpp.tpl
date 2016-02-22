#ifdef EXTENSIVE_META

#include "Meta_Maps.h"

#include <glbinding/gl/enum.h>


using namespace gl; // ToDo: multiple APIs?

namespace glbinding
{

{{#keys}}
{{^empty}}
const std::unordered_map<std::string, GLenum> Meta_EnumsByString_{{key}} =
{
{{#enums}}
    { "{{name}}", GLenum::{{identifier}} }{{^last}},{{/last}}
{{/enums}}
};
{{/empty}}
{{#empty}}
const std::unordered_map<std::string, GLenum> Meta_EnumsByString_{{key}};
{{/empty}}

{{/keys}}
const std::array<std::unordered_map<std::string, gl::GLenum>, 27> Meta_EnumsByStringMaps =
{ {
{{#keys}}
    Meta_EnumsByString_{{key}}{{^last}},{{/last}}
{{/keys}}
} };

} // namespace glbinding

#endif // EXTENSIVE_META
