
#include "Binding_pch.h"

using namespace gl; // ToDo: multiple APIs?


namespace glbinding
{


{{#currentFunctionGroup.items}}{{#item}}Function<{{>partials/general_type}}{{^params.empty}}, {{>partials/general_paramSignature}}{{/params.empty}}> Binding::{{identifierNoGl}}("{{identifier}}");
{{/item}}{{/currentFunctionGroup.items}}

} // namespace glbinding
