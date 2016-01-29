#pragma once

#include <glbinding/no{{api}}.h>
{{#define}}
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
{{/define}}
{{#import}}
#include <glbinding/{{api}}/types.h>
{{/import}}


namespace {{api}}{{feature}}
{

{{#define}}
{{#types}}
{{definition}}
{{/types}}
{{/define}}
{{#import}}
{{#types}}
using {{api}}::{{identifier}};
{{/types}}
{{/import}}

} // namespace {{api}}{{feature}}
{{#define}}


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
{{/define}}
