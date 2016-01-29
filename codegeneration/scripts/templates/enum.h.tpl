#pragma once

#include <glbinding/no{{api}}.h>
{{#import}}

#include <glbinding/{{api}}/enum.h>
{{/import}}


namespace {{api}}{{feature}}
{

{{#define}}
enum class GLenum : unsigned int
{
{{#groups}}
    // {{group}}

{{#enums}}
{{^reuse}}
    {{identifier}}{{spaces}} = {{#cast}}static_cast<unsigned int>({{/cast}}{{value}}{{#cast}}){{/cast}},
{{/reuse}}
{{#reuse}}
//  {{identifier}}{{spaces}} = {{value}}, // reuse {{from}}
{{/reuse}}
{{/enums}}

{{/groups}}
};

{{/define}}
// import enums to namespace


{{#define}}
{{#groups}}
// {{group}}

{{#enums}}
{{^reuse}}
static const GLenum {{identifier}} = GLenum::{{identifier}};
{{/reuse}}
{{#reuse}}
// static const GLenum {{identifier}} = GLenum::{{identifier}}; // reuse {{from}}
{{/reuse}}
{{/enums}}

{{/groups}}
{{/define}}
{{#import}}
{{#groups}}
// {{group}}

{{#enums}}
{{^reuse}}
using {{api}}::{{identifier}};
{{/reuse}}
{{#reuse}}
// using {{api}}::{{identifier}}; // reuse {{from}}
{{/reuse}}
{{/enums}}

{{/groups}}
{{/import}}
} // namespace {{api}}{{feature}}
