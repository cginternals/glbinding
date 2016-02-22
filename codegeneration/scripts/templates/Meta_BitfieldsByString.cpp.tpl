#ifdef EXTENSIVE_META

#include "Meta_Maps.h"

#include <glbinding/gl/bitfield.h>


using namespace gl; // ToDo: multiple APIs?

namespace glbinding
{

{{#keys}}
{{#empty}}
const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_{{key}};
{{/empty}}
{{^empty}}
const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_{{key}} =
{
{{#enums}}
    { "{{bfName}}", static_cast<GLbitfield>({{gIdentifier}}::{{bfIdentifier}}) }{{^last}},{{/last}}
{{/enums}}
};
{{/empty}}

{{/keys}}
const std::array<std::unordered_map<std::string, gl::GLbitfield>, 27> Meta_BitfieldsByStringMaps =
{ {
{{#keys}}
    Meta_BitfieldsByString_{{key}}{{^last}},{{/last}}
{{/keys}}
} };

} // namespace glbinding

#endif // EXTENSIVE_META
