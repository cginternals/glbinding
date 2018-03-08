
#pragma once


#include <{{api}}binding/nogl.h>

#include <{{api}}binding/{{api}}/bitfield.h>


namespace {{api}}{{memberSet}}
{


// import bitfields to namespace
{{#bitfields.multipleItems}}{{#bitfields.items}}using {{api}}::{{item.identifier}};
{{/bitfields.items}}{{/bitfields.multipleItems}}{{! test for multiple items to avoid using GL_NONE_BIT alone}}


} // namespace {{api}}{{memberSet}}
