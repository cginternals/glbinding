
#include "Meta_Maps.h"

#include <{{api}}binding/{{api}}/extension.h>
#include <{{api}}binding/Version.h>


using namespace {{api}};


namespace {{api}}binding
{


const std::unordered_map<GLextension, Version> Meta_ReqVersionsByExtension =
{
{{#extensionsIncore.items}}{{#item.incore}}    { GLextension::{{item.identifier}}, { {{item.incoreMajor}}, {{item.incoreMinor}} } }{{^last}},{{/last}}
{{/item.incore}}{{/extensionsIncore.items}}};


} // namespace {{api}}binding
