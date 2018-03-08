
#include <glscbinding/Version.h>


namespace glscbinding
{


const std::set<Version> Version::s_validVersions =
{
    { 2, 0 }
};

const Version Version::s_latest { 2, 0 };


} // namespace glscbinding
