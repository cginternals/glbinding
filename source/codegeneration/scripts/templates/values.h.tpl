
#pragma once


#include <glbinding/glbinding_features.h>

#include <glbinding/no{{api}}.h>
#include <glbinding/{{api}}/types.h>


namespace {{api}}
{


{{#valuesByType.groups}}
{{#items}}
GLBINDING_CONSTEXPR static const {{item.type}} {{item.identifier}} = {{item.value}};
{{/items}}
{{^last}}

{{/last}}
{{/valuesByType.groups}}


} // namespace {{api}}
