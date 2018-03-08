
#pragma once


#include <{{api}}binding/nogl.h>

#include <{{api}}binding/{{api}}binding_features.h>


namespace {{api}}
{


enum class GLenum : unsigned int
{
{{#enumsByGroup.groups}}
    // {{name}}

{{#items}}
{{#isPrimary}}
    {{item.identifier}}{{item.spaces}} = {{#item.cast}}static_cast<unsigned int>({{/item.cast}}{{item.value}}{{#item.cast}}){{/item.cast}},{{#item.decimalValue}} // decimal value: {{item.decimalValue}}{{/item.decimalValue}}
{{/isPrimary}}
{{#isSecondary}}
//  {{item.identifier}}{{item.spaces}} = {{#item.cast}}static_cast<unsigned int>({{/item.cast}}{{item.value}}{{#item.cast}}){{/item.cast}}, // reuse {{item.primaryGroup}}{{#item.decimalValue}}, decimal value: {{item.decimalValue}}{{/item.decimalValue}}
{{/isSecondary}}
{{/items}}

{{/enumsByGroup.groups}}
};


// import enums to namespace

{{#enumsByGroup.groups}}
// {{name}}

{{#items}}
{{#isPrimary}}
{{ucapi}}BINDING_CONSTEXPR static const GLenum {{item.identifier}} = GLenum::{{item.identifier}};
{{/isPrimary}}
{{#isSecondary}}
// {{ucapi}}BINDING_CONSTEXPR static const GLenum {{item.identifier}} = GLenum::{{item.identifier}}; // reuse {{item.primaryGroup}}
{{/isSecondary}}
{{/items}}

{{/enumsByGroup.groups}}


} // namespace {{api}}
