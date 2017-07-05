
#pragma once


#include <glbinding/no{{api}}.h>
#include <glbinding/{{api}}/values.h>


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
