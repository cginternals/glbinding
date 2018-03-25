
#include "Meta_Maps.h"

#include <{{api}}binding/Version.h>


namespace {{api}}binding { namespace aux
{


// all functions directly required by features, not indirectly via extensions

const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion =
{
{{#features.items}}    { { {{item.major}}, {{item.minor}} }, { {{#item.reqCommandStrings.items}}"{{item.identifier}}"{{^last}}, {{/last}}{{/item.reqCommandStrings.items}} } }{{^last}},{{/last}}
{{/features.items}}
};


} } // namespace {{api}}binding::aux
