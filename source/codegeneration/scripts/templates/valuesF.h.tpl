
#pragma once


#include <{{api}}binding/no{{api}}.h>
#include <{{api}}binding/{{api}}/values.h>


namespace {{api}}{{memberSet}}
{


{{#valuesByType.groups}}
{{#items}}
using {{api}}::{{item.identifier}};
{{/items}}

{{/valuesByType.groups}}
{{#valuesByType.empty}}


{{/valuesByType.empty}}

} // namespace {{api}}{{memberSet}}
