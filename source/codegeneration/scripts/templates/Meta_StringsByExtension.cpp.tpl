
#include "Meta_Maps.h"

#include <glbinding/gl/extension.h>


using namespace gl;


namespace glbinding
{


const std::unordered_map<GLextension, std::string> Meta_StringsByExtension =
{
{{#extensions.items}}
    { GLextension::{{item.identifier}}, "{{item.name}}" }{{^last}},{{/last}}
{{/extensions.items}}
};


} // namespace glbinding
