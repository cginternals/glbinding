
#include <glbinding/Meta.h>

#include <glbinding/gl/bitfield.h>

#include "Meta_Maps.h"


using namespace gl; // ToDo: multiple APIs?

namespace
{
    static const auto none = std::string{};
}

namespace glbinding
{

{{#bitfGroups}}
#ifdef EXTENSIVE_META

const std::string & Meta::getString(const {{identifier}} glbitfield)
{
    const auto i = Meta_StringsBy{{identifier}}.find(glbitfield);
    if (i != Meta_StringsBy{{identifier}}.end())
    {
        return i->second;
    }
    return none;
}

#else

const std::string & Meta::getString(const {{identifier}})
{
    return none;
}

#endif // EXTENSIVE_META

{{/bitfGroups}}
} // namespace glbinding
