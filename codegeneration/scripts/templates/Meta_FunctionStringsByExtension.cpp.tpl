#ifdef EXTENSIVE_META

#include "Meta_Maps.h"

#include <glbinding/gl/extension.h>


using namespace gl; // ToDo: multiple APIs?

namespace glbinding
{

const std::unordered_map<GLextension, std::set<std::string>> Meta_FunctionStringsByExtension =
{
{{#extensions}}
    { GLextension::{{identifier}}, { {{#reqCommands}}"{{name}}"{{^last}}, {{/last}}{{/reqCommands}} } }{{^last}},{{/last}}
{{/extensions}}
};

} // namespace glbinding

#endif // EXTENSIVE_META
