
#include "../Binding_pch.h"


#include <glbinding/{{api}}/functions.h>


using namespace glbinding;

namespace {{api}}
{

{{#functions}}
{{>partials/general_type}} {{identifier}}({{>partials/general_params}})
{
    return Binding::{{identifierNoGl}}({{#params}}{{name}}{{^last}}, {{/last}}{{/params}});
}

{{/functions}}

} // namespace {{api}}
