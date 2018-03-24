
#include "Meta_Maps.h"

#include <{{api}}binding/{{api}}/extension.h>


using namespace {{api}};


namespace {{api}}binding { namespace aux
{


const std::unordered_map<GLextension, std::string> Meta_StringsByExtension =
{
{{#extensions.items}}
    { GLextension::{{item.identifier}}, "{{item.name}}" }{{^last}},{{/last}}
{{/extensions.items}}
};


} } // namespace {{api}}binding::aux
