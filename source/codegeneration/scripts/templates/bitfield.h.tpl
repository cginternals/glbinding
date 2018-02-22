
#pragma once


#include <glbinding/no{{api}}.h>

#include <glbinding/glbinding_features.h>

#include <glbinding/SharedBitfield.h>


namespace {{api}}
{


{{#bitfieldsByGroup.groups}}
enum class {{name}} : unsigned int
{
{{#items}}
    {{item.identifier}}{{item.spaces}} = {{item.value}},{{#item.generic}} // Generic {{item.identifier}}{{/item.generic}}{{^item.generic}}{{#isSecondary}} // reuse from {{item.primaryGroup}}{{/isSecondary}}{{/item.generic}}
{{/items}}
};


{{/bitfieldsByGroup.groups}}

// import bitfields to namespace

{{#bitfields.items}}
{{#item.groups.multipleItems}}
GLBINDING_CONSTEXPR static const glbinding::SharedBitfield<{{#item.groups.items}}{{item}}{{^last}}, {{/last}}{{/item.groups.items}}> {{item.identifier}} = {{item.primaryGroup}}::{{item.identifier}};
{{/item.groups.multipleItems}}
{{^item.groups.multipleItems}}
GLBINDING_CONSTEXPR static const {{item.primaryGroup}} {{item.identifier}} = {{item.primaryGroup}}::{{item.identifier}};
{{/item.groups.multipleItems}}
{{/bitfields.items}}


} // namespace {{api}}
