#ifdef EXTENSIVE_META

#include "Meta_Maps.h"

#include <glbinding/gl/extension.h>


using namespace gl; // ToDo: multiple APIs?

namespace glbinding
{

const std::unordered_map<GLextension, std::string> Meta_StringsByExtension =
{
{{#extensions}}
    { GLextension::{{identifier}}, "{{name}}" }{{^last}},{{/last}}
{{/extensions}}
};

} // namespace glbinding

#endif // EXTENSIVE_META
