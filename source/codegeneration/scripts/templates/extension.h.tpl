
#pragma once


#include <{{api}}binding/no{{api}}.h>


namespace {{api}}
{


enum class {{extensionType}} : int // {{extensionType}} is not a type introduced by {{ucapi}} API so far
{
    UNKNOWN = -1,
{{#extensions.items}}
    {{item.identifier}}{{^last}},{{/last}}
{{/extensions.items}}
};


} // namespace {{api}}
