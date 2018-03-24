
#include <{{api}}binding-aux/ValidVersions.h>

#include <{{api}}binding/Version.h>


namespace {{api}}binding { namespace aux
{


const std::set<Version> ValidVersions::s_validVersions =
{
{{#features.items}}
    { {{item.major}}, {{item.minor}} }{{^last}},{{/last}}
{{/features.items}}
};

const Version ValidVersions::s_latest { {{latestFeature.major}}, {{latestFeature.minor}} };


} } // namespace {{api}}binding::aux
