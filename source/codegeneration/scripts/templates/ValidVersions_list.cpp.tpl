
#include <{{api}}binding-aux/ValidVersions.h>

#include <{{api}}binding/Version.h>


template <>
const std::set<{{api}}binding::Version> khrbinding::aux::ValidVersions<{{api}}binding::Version>::s_validVersions =
{
{{#features.items}}
    { {{item.major}}, {{item.minor}} }{{^last}},{{/last}}
{{/features.items}}
};

template <>
const {{api}}binding::Version khrbinding::aux::ValidVersions<{{api}}binding::Version>::s_latest { {{latestFeature.major}}, {{latestFeature.minor}} };
