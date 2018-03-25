
#pragma once


#include <{{api}}binding/no{{api}}.h>

#include <{{api}}binding/{{api}}binding_features.h>


namespace {{api}}
{


enum class GLboolean : unsigned char
{
{{#booleans.items}}
    {{item.identifier}} = {{item.value}}{{^last}},{{/last}}
{{/booleans.items}}
};

// import booleans to namespace

{{#booleans.items}}
{{ucapi}}BINDING_CONSTEXPR static const GLboolean {{item.identifier}} = GLboolean::{{item.identifier}};
{{/booleans.items}}


} // namespace {{api}}
