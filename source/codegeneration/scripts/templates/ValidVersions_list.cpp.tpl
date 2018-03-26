
#include <{{api}}binding-aux/ValidVersions.h>

#include <{{api}}binding/Version.h>


template <>
const std::set<{{binding}}::Version> {{binding}}::aux::ValidVersions<{{binding}}::Version>::s_validVersions =
{
{{#features.items}}
    { {{item.major}}, {{item.minor}} }{{^last}},{{/last}}
{{/features.items}}
};

template <>
const {{binding}}::Version {{binding}}::aux::ValidVersions<{{binding}}::Version>::s_latest { {{latestFeature.major}}, {{latestFeature.minor}} };
