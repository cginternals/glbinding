
#include <glbinding/Meta.h>

#include <glbinding/gl/bitfield.h>

#include "Meta_Maps.h"


using namespace gl;


namespace
{
    const auto none = std::string{};
}


namespace glbinding
{


{{#bitfieldGroups.items}}

const std::string & Meta::getString(const {{item}} glbitfield)
{
    const auto i = Meta_StringsBy{{item}}.find(glbitfield);
    if (i != Meta_StringsBy{{item}}.end())
    {
        return i->second;
    }
    return none;
}

{{/bitfieldGroups.items}}


} // namespace glbinding
