
#pragma once


#include <glbinding/no{{api}}.h>


namespace {{api}}
{


enum class GLextension : int // GLextension is not a type introduced by OpenGL API so far
{
    UNKNOWN = -1,
{{#extensions.items}}
    {{item.identifier}}{{^last}},{{/last}}
{{/extensions.items}}
};


} // namespace {{api}}
