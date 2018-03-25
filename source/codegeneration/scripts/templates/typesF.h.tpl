
#pragma once


#include <{{api}}binding/no{{api}}.h>
#include <{{api}}binding/{{api}}/types.h>


namespace {{api}}{{memberSet}}
{


{{#types.items}}
using {{api}}::{{item.identifier}};
{{/types.items}}


} // namespace {{api}}{{memberSet}}
