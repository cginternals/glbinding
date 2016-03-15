
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

{{#bitfieldGroups.items}}
#ifdef EXTENSIVE_META

const std::string & Meta::getString(const {{item}} glbitfield)
{
    const auto i = Meta_StringsBy{{item}}.find(glbitfield);
    if (i != Meta_StringsBy{{item}}.end())
    {
        return i->second;
    }
    return none;
}

#else

const std::string & Meta::getString(const {{item}})
{
    return none;
}

#endif // EXTENSIVE_META

{{/bitfieldGroups.items}}
} // namespace glbinding
