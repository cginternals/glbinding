
#include "Binding_pch.h"


using namespace gl; // ToDo: multiple APIs?

namespace glbinding
{

const Binding::array_t Binding::s_functions =
{{=| |=}}{{|={{ }}=|
{{#functions}}
    &{{identifierNoGl}}{{^last}},{{/last}}
{{/functions}}
{{=| |=}}}}|={{ }}=|;

} // namespace glbinding
