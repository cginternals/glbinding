#ifdef EXTENSIVE_META

#include "Meta_Maps.h"

#include <glbinding/gl/boolean.h>


using namespace gl; // ToDo: multiple APIs?

namespace glbinding
{

const std::unordered_map<std::string, GLboolean> Meta_BooleansByString =
{
{{#enums}}
    { "{{name}}", GLboolean::{{identifier}} }{{^last}},{{/last}}
{{/enums}}
};

} // namespace glbinding

#endif // EXTENSIVE_META
