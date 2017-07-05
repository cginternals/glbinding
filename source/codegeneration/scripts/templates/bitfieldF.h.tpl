
#pragma once


#include <glbinding/no{{api}}.h>

#include <glbinding/{{api}}/bitfield.h>


namespace {{api}}{{memberSet}}
{


// import bitfields to namespace
{{#bitfields.multipleItems}}{{#bitfields.items}}using {{api}}::{{item.identifier}};
{{/bitfields.items}}{{/bitfields.multipleItems}}{{! test for multiple items to avoid using GL_NONE_BIT alone}}


} // namespace {{api}}{{memberSet}}
