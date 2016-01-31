#pragma once

{{#forward}}
#include <glbinding/glbinding_api.h>

#include <glbinding/no{{api}}.h>
#include <glbinding/{{api}}/types.h>
{{/forward}}
{{#import}}
#include <glbinding/no{{api}}.h>
#include <glbinding/{{api}}/functions.h>
{{/import}}


namespace {{api}}{{feature}}
{

{{#forward}}
{{#groups}}
{{#functions}}
GLBINDING_API {{>partials/general_type}} {{identifier}}({{>partials/general_params}});
{{/functions}}

{{/groups}}
{{/forward}}
{{#import}}
{{#groups}}
{{#functions}}
using {{api}}::{{identifier}};
{{/functions}}
{{/groups}}
{{/import}}

} // namespace {{api}}{{feature}}
