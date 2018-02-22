
#pragma once


#include <glbinding/no{{api}}.h>

#include <glbinding/{{api}}/boolean.h>


namespace {{api}}{{memberSet}}
{


// import booleans to namespace

{{#booleans.items}}
using {{api}}::{{item.identifier}};
{{/booleans.items}}


} // namespace {{api}}{{memberSet}}
