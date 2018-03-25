
#include "Meta_Maps.h"

#include <{{api}}binding/{{api}}/extension.h>


using namespace {{api}};


namespace {{api}}binding { namespace aux
{


const std::unordered_map<{{extensionType}}, std::string> Meta_StringsByExtension =
{
{{#extensions.items}}
    { {{extensionType}}::{{item.identifier}}, "{{item.name}}" }{{^last}},{{/last}}
{{/extensions.items}}
};


} } // namespace {{api}}binding::aux
