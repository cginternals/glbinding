#pragma once

#include <glbinding/no{{api}}.h>
#include <glbinding/{{api}}/types.h>


namespace {{api}}
{


{{#valuesByType.groups}}
{{#items}}
static const {{item.type}} {{item.identifier}} = {{item.value}};
{{/items}}
{{^last}}

{{/last}}
{{/valuesByType.groups}}


} // namespace {{api}}
