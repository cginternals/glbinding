
#pragma once


#include <{{api}}binding/{{api}}binding_features.h>

#include <{{api}}binding/no{{api}}.h>
#include <{{api}}binding/{{api}}/types.h>


namespace {{api}}
{


{{#valuesByType.groups}}
{{#items}}
{{ucapi}}BINDING_CONSTEXPR static const {{item.type}} {{item.identifier}} = {{item.value}};
{{/items}}
{{^last}}

{{/last}}
{{/valuesByType.groups}}


} // namespace {{api}}
