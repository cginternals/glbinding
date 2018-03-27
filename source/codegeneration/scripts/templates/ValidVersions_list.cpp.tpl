
#include <{{api}}binding-aux/ValidVersions.h>


const std::set<{{binding}}::Version> {{binding}}::aux::ValidVersions::s_validVersions =
{
{{#features.items}}
    { {{item.major}}, {{item.minor}} }{{^last}},{{/last}}
{{/features.items}}
};

const {{binding}}::Version {{binding}}::aux::ValidVersions::s_latest { {{latestFeature.major}}, {{latestFeature.minor}} };
