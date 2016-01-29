#pragma once

#include <glbinding/no{{api}}.h>
{{#define}}
#include <glbinding/{{api}}/types.h>
{{/define}}
{{#import}}
#include <glbinding/{{api}}/values.h>
{{/import}}


namespace {{api}}{{feature}}
{

{{#define}}
{{#groups}}
{{#values}}
static const {{type}} {{identifier}} = {{value}};
{{/values}}
{{^last}}

{{/last}}
{{/groups}}
{{/define}}
{{#import}}
{{#groups}}
{{#values}}
using {{api}}::{{identifier}};
{{/values}}
{{^last}}

{{/last}}
{{/groups}}
{{/import}}

} // namespace {{api}}{{feature}}
