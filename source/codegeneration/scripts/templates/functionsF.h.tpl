
#pragma once


#include <glbinding/no{{api}}.h>
#include <glbinding/{{api}}/functions.h>


namespace {{api}}{{memberSet}}
{


{{#functions.items}}
using {{api}}::{{item.identifier}};
{{/functions.items}}


} // namespace {{api}}{{memberSet}}
