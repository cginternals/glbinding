#ifdef EXTENSIVE_META

#include "Meta_Maps.h"

#include <glbinding/gl/boolean.h>


using namespace gl; // ToDo: multiple APIs?

namespace glbinding
{

const std::unordered_map<GLboolean, std::string> Meta_StringsByBoolean =
{
{{#enums}}
    { GLboolean::{{identifier}}, "{{name}}" }{{^last}},{{/last}}
{{/enums}}
};

} // namespace glbinding

#endif // EXTENSIVE_META
