
#include <glxbinding/Version.h>


namespace glxbinding
{


const std::set<Version> Version::s_validVersions =
{
    { 1, 0 },
    { 1, 1 },
    { 1, 2 },
    { 1, 3 },
    { 1, 4 }
};

const Version Version::s_latest { 1, 4 };


} // namespace glxbinding
