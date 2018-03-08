
#pragma once


#include <{{api}}binding/nogl.h>

#include <{{api}}binding/{{api}}/enum.h>


namespace {{api}}{{memberSet}}
{


// import enums to namespace


{{#enumsByGroup.groups}}
// {{name}}

{{#items}}
{{#isPrimary}}
using {{api}}::{{item.identifier}};
{{/isPrimary}}
{{#isSecondary}}
// using {{api}}::{{item.identifier}}; // reuse {{item.primaryGroup}}
{{/isSecondary}}
{{/items}}

{{/enumsByGroup.groups}}


} // namespace {{api}}{{memberSet}}
