
#include "Meta_Maps.h"

#include <{{api}}binding/{{api}}/extension.h>
#include <{{api}}binding/Version.h>


using namespace {{api}};


namespace {{api}}binding { namespace aux
{


const std::unordered_map<{{extensionType}}, Version> Meta_ReqVersionsByExtension =
{
{{#extensionsIncore.items}}{{#item.incore}}    { {{extensionType}}::{{item.identifier}}, { {{item.incoreMajor}}, {{item.incoreMinor}} } }{{^last}},{{/last}}
{{/item.incore}}{{/extensionsIncore.items}}};


} } // namespace {{api}}binding::aux
