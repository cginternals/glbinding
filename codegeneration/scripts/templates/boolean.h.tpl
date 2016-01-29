#pragma once

#include <glbinding/no{{api}}.h>
{{#import}}

#include <glbinding/{{api}}/boolean.h>
{{/import}}


namespace {{api}}{{feature}}
{

{{#define}}
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
{{/define}}
{{#import}}
// import booleans to namespace

{{#booleans}}
using {{api}}::{{identifier}};
{{/booleans}}
{{/import}}

} // namespace {{api}}{{feature}}
