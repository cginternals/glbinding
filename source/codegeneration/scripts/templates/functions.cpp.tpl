
#include "../Binding_pch.h"

#include <glbinding/{{api}}/functions.h>


using namespace glbinding;


namespace {{api}}
{


{{#currentFunctionGroup.items}}{{#item}}{{>partials/general_type}} {{identifier}}({{>partials/general_params}})
{
    return Binding::{{identifierNoGl}}({{#params.items}}{{item.name}}{{^last}}, {{/last}}{{/params.items}});
}

{{/item}}{{/currentFunctionGroup.items}}


} // namespace {{api}}
