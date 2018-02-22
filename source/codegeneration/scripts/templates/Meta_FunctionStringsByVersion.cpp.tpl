
#include "Meta_Maps.h"

#include <glbinding/Version.h>


using namespace gl;


namespace glbinding
{


// all functions directly required by features, not indirectly via extensions

const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion =
{
{{#features.items}}    { { {{item.major}}, {{item.minor}} }, { {{#item.reqCommandStrings.items}}"{{item.identifier}}"{{^last}}, {{/last}}{{/item.reqCommandStrings.items}} } }{{^last}},{{/last}}
{{/features.items}}
};


} // namespace glbinding
