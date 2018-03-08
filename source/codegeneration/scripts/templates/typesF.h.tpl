
#pragma once


#include <{{api}}glbinding/nogl.h>
#include <{{api}}glbinding/{{api}}/types.h>


namespace {{api}}{{memberSet}}
{


{{#types.items}}
using {{api}}::{{item.identifier}};
{{/types.items}}


} // namespace {{api}}{{memberSet}}
