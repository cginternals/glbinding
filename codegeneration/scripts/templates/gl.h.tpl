#pragma once

#include <glbinding/no{{api}}.h>

#include <glbinding/{{api}}/extension.h>
{{#features}}
#include <glbinding/{{api}}{{feature}}/types.h>
{{/features}}
{{#features}}
#include <glbinding/{{api}}{{feature}}/boolean.h>
{{/features}}
{{#features}}
#include <glbinding/{{api}}{{feature}}/values.h>
{{/features}}
{{#features}}
#include <glbinding/{{api}}{{feature}}/bitfield.h>
{{/features}}
{{#features}}
#include <glbinding/{{api}}{{feature}}/enum.h>
{{/features}}
{{#features}}
#include <glbinding/{{api}}{{feature}}/functions.h>
{{/features}}
