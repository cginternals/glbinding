
#pragma once


#include <glbinding/no{{api}}.h>
#include <glbinding/glbinding_api.h>
#include <glbinding/glbinding_features.h>
#include <glbinding/gl/boolean.h>

#include <cstddef>
#include <cstdint>
#include <array>

#include <functional>
#include <ostream>
#include <string>


#ifdef _MSC_VER
#define GL_APIENTRY __stdcall
#else
#define GL_APIENTRY
#endif


namespace {{api}}
{


{{#types.items}}
{{item.definition}}
{{/types.items}}

} // namespace {{api}}


// Type Integrations

{{#types.items}}
{{#item.integrations.hashable}}
{{#item}}{{>partials/types_hashable.h}}{{/item}}

{{/item.integrations.hashable}}
{{#item.integrations.streamable}}
{{#item}}{{>partials/types_streamable.h}}{{/item}}

{{/item.integrations.streamable}}
{{#item.integrations.addable}}
{{#item}}{{>partials/types_addable.h}}{{/item}}

{{/item.integrations.addable}}
{{#item.integrations.bitfieldStreamable}}
{{#item}}{{>partials/types_bitfieldStreamable.h}}{{/item}}

{{/item.integrations.bitfieldStreamable}}
{{#item.integrations.bitOperatable}}
{{#item}}{{>partials/types_bitOperatable.h}}{{/item}}

{{/item.integrations.bitOperatable}}
{{#item.integrations.comparable}}
{{#item}}{{>partials/types_comparable.h}}{{/item}}

{{/item.integrations.comparable}}
{{/types.items}}
