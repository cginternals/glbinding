
#include "Meta_Maps.h"

#include <glbinding/gl/enum.h>


using namespace gl;


namespace glbinding
{


{{#enumsByInitial.groups}}
{{^empty}}
const std::unordered_map<std::string, GLenum> Meta_EnumsByString_{{name}} =
{
{{#items}}
    { "{{item.name}}", GLenum::{{item.identifier}} }{{^last}},{{/last}}
{{/items}}
};
{{/empty}}
{{#empty}}
const std::unordered_map<std::string, GLenum> Meta_EnumsByString_{{name}}{};
{{/empty}}

{{/enumsByInitial.groups}}
const std::array<std::unordered_map<std::string, gl::GLenum>, {{enumsByInitial.count}}> Meta_EnumsByStringMaps =
{ {
{{#enumsByInitial.groups}}
    Meta_EnumsByString_{{name}}{{^last}},{{/last}}
{{/enumsByInitial.groups}}
} };


} // namespace glbinding
