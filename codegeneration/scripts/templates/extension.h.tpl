#pragma once

#include <glbinding/no{{api}}.h>


namespace {{api}}
{

enum class GLextension : int // GLextension is not a type introduced by OpenGL API so far
{
    UNKNOWN = -1,
{{#extensions}}
    {{name}}{{^last}},{{/last}}
{{/extensions}}
};

} // namespace {{api}}
