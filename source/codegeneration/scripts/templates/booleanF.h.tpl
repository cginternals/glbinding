
#pragma once


#include <{{api}}binding/no{{api}}.h>

#include <{{api}}binding/{{api}}/boolean.h>


namespace {{api}}{{memberSet}}
{


// import booleans to namespace

{{#booleans.items}}
using {{api}}::{{item.identifier}};
{{/booleans.items}}


} // namespace {{api}}{{memberSet}}
