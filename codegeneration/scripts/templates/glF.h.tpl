#pragma once

#include <glbinding/no{{api}}.h>

#include <glbinding/{{api}}/extension.h>
{{#includeMemberSets}}
#include <glbinding/{{api}}{{memberSet}}/types.h>
{{/includeMemberSets}}
{{#includeMemberSets}}
#include <glbinding/{{api}}{{memberSet}}/boolean.h>
{{/includeMemberSets}}
{{#includeMemberSets}}
#include <glbinding/{{api}}{{memberSet}}/values.h>
{{/includeMemberSets}}
{{#includeMemberSets}}
#include <glbinding/{{api}}{{memberSet}}/bitfield.h>
{{/includeMemberSets}}
{{#includeMemberSets}}
#include <glbinding/{{api}}{{memberSet}}/enum.h>
{{/includeMemberSets}}
{{#includeMemberSets}}
#include <glbinding/{{api}}{{memberSet}}/functions.h>
{{/includeMemberSets}}
