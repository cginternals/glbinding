
#include <glbinding/Version.h>


namespace glbinding
{

const std::set<Version> Version::s_validVersions =
{
{{#features}}
    { {{major}}, {{minor}} }{{^last}},{{/last}}
{{/features}}
};

const Version Version::s_latest { {{latest.major}}, {{latest.minor}} };

} // namespace glbinding
