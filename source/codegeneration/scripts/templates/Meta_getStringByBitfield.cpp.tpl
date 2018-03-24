
#include <{{api}}binding-aux/Meta.h>

#include <{{api}}binding/{{api}}/bitfield.h>

#include "Meta_Maps.h"


using namespace {{api}};


namespace
{


const auto none = std::string{};


} // namespace


namespace {{api}}binding { namespace aux
{


{{#bitfieldGroups.items}}

const std::string & Meta::getString(const {{item}} bitfield)
{
    const auto i = Meta_StringsBy{{item}}.find(bitfield);
    if (i != Meta_StringsBy{{item}}.end())
    {
        return i->second;
    }
    return none;
}

{{/bitfieldGroups.items}}

} } // namespace {{api}}binding::aux
