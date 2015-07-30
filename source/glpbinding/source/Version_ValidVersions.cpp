
#include <glpbinding/Version.h>


namespace glpbinding
{

const std::set<Version> Version::s_validVersions = 
{
    { 2, 0 },
    { 3, 0 },
    { 3, 1 }
};

const Version Version::s_latest { 3, 1 };

} // namespace glpbinding
