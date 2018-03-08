
#pragma once


#include <{{api}}binding/{{api}}binding_api.h>

#include <{{api}}binding/nogl.h>
#include <{{api}}binding/{{api}}/types.h>


namespace {{api}}
{


{{#functionsByInitial.groups}}
{{#items}}
{{ucapi}}BINDING_API {{#item}}{{>partials/general_type}} {{identifier}}({{>partials/general_params}}){{/item}};
{{/items}}

{{/functionsByInitial.groups}}


} // namespace {{api}}


// Include function patches due to dinstinguished types GLint, GLuint, GLenum, and GLboolean
#include <{{api}}binding/{{api}}/functions-patches.h>
