
#pragma once


#include <glbinding/no{{api}}.h>
#include <glbinding/{{api}}/types.h>


namespace {{api}}{{memberSet}}
{


{{#types.items}}
using {{api}}::{{item.identifier}};
{{/types.items}}


} // namespace {{api}}{{memberSet}}
