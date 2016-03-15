#pragma once

#include <glbinding/no{{api}}.h>

#include <glbinding/{{api}}/bitfield.h>

namespace {{api}}{{memberSet}}
{

// import bitfields to namespace
{{#bitfields.multipleItems}}{{! TODO-LW find out why GL_NONE_BIT may not occur alone}}{{#bitfields.items}}
using {{api}}::{{item.identifier}};
{{/bitfields.items}}{{/bitfields.multipleItems}}

} // namespace {{api}}{{memberSet}}
