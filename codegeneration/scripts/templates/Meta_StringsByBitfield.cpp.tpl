#ifdef EXTENSIVE_META

#include "Meta_Maps.h"

#include <glbinding/gl/bitfield.h>


using namespace gl; // ToDo: multiple APIs?

namespace glbinding
{

{{#bfGroups}}
const std::unordered_map<{{gIdentifier}}, std::string> Meta_StringsBy{{gIdentifier}} =
{
{{#bitfields}}
    { {{gIdentifier}}::{{bfIdentifier}}, "{{bfName}}" }{{^last}},{{/last}}
{{/bitfields}}
};

{{/bfGroups}}
} // namespace glbinding

#endif // EXTENSIVE_META
