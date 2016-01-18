#pragma once

#include <glbinding/no{{api}}.h>
{{#importBooleans}}

#include <glbinding/{{api}}/boolean.h>
{{/importBooleans}}


namespace {{api}}{{feature}}
{

{{#defineBooleans}}
enum class GLboolean : unsigned char
{
{{#booleans}}
    {{identifier}} = {{value}}{{^last}},{{/last}}
{{/booleans}}
};

// import booleans to namespace

{{#booleans}}
static const GLboolean {{identifier}} = GLboolean::{{identifier}};
{{/booleans}}
{{/defineBooleans}}
{{#importBooleans}}
// import booleans to namespace

{{#booleans}}
using {{api}}::{{identifier}};
{{/booleans}}
{{/importBooleans}}

} // namespace {{api}}{{feature}}
