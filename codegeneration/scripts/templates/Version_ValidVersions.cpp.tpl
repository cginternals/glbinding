
#include <glbinding/Version.h>


namespace glbinding
{


const std::set<Version> Version::s_validVersions =
{
{{#features.items}}
    { {{item.major}}, {{item.minor}} }{{^last}},{{/last}}
{{/features.items}}
};

const Version Version::s_latest { {{latestFeature.major}}, {{latestFeature.minor}} };


} // namespace glbinding
