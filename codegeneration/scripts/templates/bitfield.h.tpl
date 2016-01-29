#pragma once

#include <glbinding/no{{api}}.h>

{{#defineBitfields}}
#include <glbinding/SharedBitfield.h>
{{/defineBitfields}}
{{#importBitfields}}
#include <glbinding/{{api}}/bitfield.h>
{{/importBitfields}}

namespace {{api}}{{feature}}
{

{{#defineBitfields}}
{{#groupedBitfields}}
enum class {{group}} : unsigned int
{
{{#bitfields}}
    {{identifier}}{{spaces}} = {{value}},{{#reused}} // reuse from {{from}}{{/reused}}{{#generic}} // Generic {{identifier}}{{/generic}}
{{/bitfields}}
};


{{/groupedBitfields}}

// import bitfields to namespace

{{#linearBitfields}}
{{#shared}}
static const glbinding::SharedBitfield<{{#groups}}{{name}}{{^last}}, {{/last}}{{/groups}}> {{identifier}} = {{firstGroup}}::{{identifier}};
{{/shared}}
{{^shared}}
static const {{firstGroup}} {{identifier}} = {{firstGroup}}::{{identifier}};
{{/shared}}
{{/linearBitfields}}
{{/defineBitfields}}
{{#importBitfields}}
// import bitfields to namespace
{{#linearBitfields}}
using {{api}}::{{identifier}};
{{/linearBitfields}}
{{/importBitfields}}

} // namespace {{api}}{{feature}}
