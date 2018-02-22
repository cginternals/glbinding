
#include "Binding_pch.h"


using namespace gl;


namespace glbinding
{


{{#currentFunctionGroup.items}}{{#item}}Function<{{>partials/general_type}}{{^params.empty}}, {{>partials/general_paramSignature}}{{/params.empty}}> Binding::{{identifierNoGl}}("{{identifier}}");
{{/item}}{{/currentFunctionGroup.items}}


} // namespace glbinding
