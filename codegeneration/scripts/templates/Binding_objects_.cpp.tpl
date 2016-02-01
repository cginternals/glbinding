
#include "Binding_pch.h"


using namespace gl; // ToDo: multiple APIs?

namespace glbinding
{

{{#functions}}
Function<{{>partials/general_type}}{{#hasParams}}, {{/hasParams}}{{>partials/general_paramSignature}}> Binding::{{identifierNoGl}}("{{identifier}}");
{{/functions}}

} // namespace glbinding
