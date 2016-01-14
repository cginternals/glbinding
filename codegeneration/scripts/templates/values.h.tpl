#pragma once

#include <glbinding/no{{api}}.h>
{{#defineValues}}
#include <glbinding/{{api}}/types.h>
{{/defineValues}}
{{#importValues}}
#include <glbinding/{{api}}/values.h>
{{/importValues}}


namespace {{api}}{{feature}}
{

{{#defineValues}}
{{#valueGroups}}
{{#values}}
static const {{type}} {{identifier}} = {{value}};
{{/values}}
{{^last}}

{{/last}}
{{/valueGroups}}
{{/defineValues}}
{{#importValues}}
{{#valueGroups}}
{{#values}}
using {{importNamespace}}::{{identifier}};
{{/values}}
{{^last}}

{{/last}}
{{/valueGroups}}
{{/importValues}}

} // namespace {{api}}{{feature}}
