
#include "Meta_Maps.h"

#include <glbinding/gl/enum.h>


using namespace gl;


namespace glbinding
{


const std::unordered_map<GLenum, std::string> Meta_StringsByEnum =
{
{{#enumsByValue.groups}}
    { GLenum::{{firstItem.identifier}}, "{{firstItem.name}}" }{{^last}},{{/last}}
{{/enumsByValue.groups}}
};


} // namespace glbinding
