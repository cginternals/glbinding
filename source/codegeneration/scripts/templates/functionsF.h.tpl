
#pragma once


#include <{{api}}binding/nogl.h>
#include <{{api}}binding/{{api}}/functions.h>


namespace {{api}}{{memberSet}}
{


{{#functions.items}}
using {{api}}::{{item.identifier}};
{{/functions.items}}


} // namespace {{api}}{{memberSet}}
