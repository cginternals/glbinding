
#include "Meta_Maps.h"

#include <{{api}}binding/{{api}}/extension.h>


using namespace {{api}};


namespace {{api}}binding { namespace aux
{


const std::unordered_map<{{extensionType}}, std::set<std::string>> Meta_FunctionStringsByExtension =
{
{{#extensions.items}}{{^item.reqCommands.empty}}    { {{extensionType}}::{{item.identifier}}, { {{#item.reqCommands.items}}"{{item.name}}"{{^last}}, {{/last}}{{/item.reqCommands.items}} } }{{^last}},{{/last}}
{{/item.reqCommands.empty}}{{/extensions.items}}
};


} } // namespace {{api}}binding::aux
