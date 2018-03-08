
#include "Binding_pch.h"


using namespace {{api}};


namespace {{api}}binding
{


const Binding::array_t Binding::s_functions =
{{=| |=}}{{|={{ }}=|
{{#functions.items}}
    &{{item.identifierNoGl}}{{^last}},{{/last}}
{{/functions.items}}
{{=| |=}}}}|={{ }}=|;


} // namespace {{api}}binding
