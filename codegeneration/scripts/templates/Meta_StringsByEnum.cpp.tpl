#ifdef EXTENSIVE_META

#include "Meta_Maps.h"

#include <glbinding/gl/enum.h>


using namespace gl; // ToDo: multiple APIs?

namespace glbinding
{

const std::unordered_map<GLenum, std::string> Meta_StringsByEnum =
{
{{#enums.items}}
    { GLenum::{{item.identifier}}, "{{item.name}}" }{{^last}},{{/last}}
{{/enums.items}}
};

} // namespace glbinding

#endif // EXTENSIVE_META
