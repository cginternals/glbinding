#pragma once

#include <glbinding/no{{api}}.h>
{{#defineTypes}}
#include <glbinding/glbinding_api.h>

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
{{/defineTypes}}
{{#importTypes}}
#include <glbinding/{{api}}/types.h>
{{/importTypes}}


namespace {{api}}{{feature}}
{

{{#defineTypes}}
{{#types}}
{{definition}}
{{/types}}
{{/defineTypes}}
{{#importTypes}}
{{#types}}
using {{api}}::{{identifier}};
{{/types}}
{{/importTypes}}

} // namespace {{api}}{{feature}}
{{#defineTypes}}


// Type Integrations

{{#types}}
{{#integrations.hashable}}
{{>partials/types_hashable.h}}

{{/integrations.hashable}}
{{#integrations.streamable}}
{{>partials/types_streamable.h}}

{{/integrations.streamable}}
{{#integrations.addable}}
{{>partials/types_addable.h}}

{{/integrations.addable}}
{{#integrations.bitfieldStreamable}}
{{>partials/types_bitfieldStreamable.h}}

{{/integrations.bitfieldStreamable}}
{{#integrations.bitOperatable}}
{{>partials/types_bitOperatable.h}}

{{/integrations.bitOperatable}}
{{#integrations.comparable}}
{{>partials/types_comparable.h}}

{{/integrations.comparable}}
{{/types}}
{{/defineTypes}}
