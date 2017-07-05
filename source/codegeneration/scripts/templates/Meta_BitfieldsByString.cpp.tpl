
#include "Meta_Maps.h"

#include <glbinding/gl/bitfield.h>


using namespace gl;


namespace glbinding
{


{{#bitfieldsByInitial.groups}}
{{#empty}}
const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_{{name}}{};
{{/empty}}
{{^empty}}
const std::unordered_map<std::string, GLbitfield> Meta_BitfieldsByString_{{name}} =
{
{{#items}}
    { "{{item.name}}", static_cast<GLbitfield>({{item.primaryGroup}}::{{item.identifier}}) }{{^last}},{{/last}}
{{/items}}
};
{{/empty}}

{{/bitfieldsByInitial.groups}}
const std::array<std::unordered_map<std::string, gl::GLbitfield>, {{bitfieldsByInitial.count}}> Meta_BitfieldsByStringMaps =
{ {
{{#bitfieldsByInitial.groups}}
    Meta_BitfieldsByString_{{name}}{{^last}},{{/last}}
{{/bitfieldsByInitial.groups}}
} };


} // namespace glbinding
