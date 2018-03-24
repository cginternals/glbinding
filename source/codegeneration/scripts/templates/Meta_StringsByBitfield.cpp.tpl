
#include "Meta_Maps.h"

#include <{{api}}binding/{{api}}/bitfield.h>


using namespace {{api}};


namespace {{api}}binding { namespace aux
{


{{#bitfieldsByGroup.groups}}
const std::unordered_map<{{name}}, std::string> Meta_StringsBy{{name}} =
{
{{#items}}
    { {{name}}::{{item.identifier}}, "{{item.name}}" }{{^last}},{{/last}}
{{/items}}
};


{{/bitfieldsByGroup.groups}}


} } // namespace {{api}}binding::aux
