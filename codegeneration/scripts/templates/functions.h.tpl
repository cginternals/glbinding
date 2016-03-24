#pragma once

#include <glbinding/glbinding_api.h>

#include <glbinding/no{{api}}.h>
#include <glbinding/{{api}}/types.h>


namespace {{api}}
{

{{#functionsByInitial.groups}}
{{#items}}
GLBINDING_API {{#item}}{{>partials/general_type}} {{identifier}}({{>partials/general_params}}){{/item}};
{{/items}}

{{/functionsByInitial.groups}}


} // namespace {{api}}
