
#include "Meta_Maps.h"

#include <glbinding/gl/extension.h>


using namespace gl; // ToDo: multiple APIs?

namespace glbinding
{


const std::unordered_map<GLextension, std::set<std::string>> Meta_FunctionStringsByExtension =
{
{{#extensions.items}}{{^item.reqCommands.empty}}    { GLextension::{{item.identifier}}, { {{#item.reqCommands.items}}"{{item.name}}"{{^last}}, {{/last}}{{/item.reqCommands.items}} } }{{^last}},{{/last}}
{{/item.reqCommands.empty}}{{/extensions.items}}
};

} // namespace glbinding
