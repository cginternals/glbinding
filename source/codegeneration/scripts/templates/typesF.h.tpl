
#pragma once


#include <{{api}}binding/nogl.h>
#include <{{api}}binding/{{api}}/types.h>


namespace {{api}}{{memberSet}}
{


{{#types.items}}
using {{api}}::{{item.identifier}};
{{/types.items}}


} // namespace {{api}}{{memberSet}}
