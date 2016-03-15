#pragma once

#include <glbinding/no{{api}}.h>
#include <glbinding/{{api}}/values.h>


namespace {{api}}{{memberSet}}
{

{{#valuesByType.groups}}
{{#items}}
using {{api}}::{{item.identifier}};
{{/items}}
{{^last}}

{{/last}}
{{/valuesByType.groups}}

} // namespace {{api}}{{memberSet}}
