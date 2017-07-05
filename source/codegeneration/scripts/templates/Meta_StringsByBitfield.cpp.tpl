
#include "Meta_Maps.h"

#include <glbinding/gl/bitfield.h>


using namespace gl;


namespace glbinding
{


{{#bitfieldsByGroup.groups}}
const std::unordered_map<{{name}}, std::string> Meta_StringsBy{{name}} =
{
{{#items}}
    { {{name}}::{{item.identifier}}, "{{item.name}}" }{{^last}},{{/last}}
{{/items}}
};


{{/bitfieldsByGroup.groups}}


} // namespace glbinding
