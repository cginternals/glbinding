
#include "Binding_pch.h"


using namespace gl;


namespace glbinding
{


const Binding::array_t Binding::s_functions =
{{=| |=}}{{|={{ }}=|
{{#functions.items}}
    &{{item.identifierNoGl}}{{^last}},{{/last}}
{{/functions.items}}
{{=| |=}}}}|={{ }}=|;


} // namespace glbinding
