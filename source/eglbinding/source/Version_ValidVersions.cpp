
#include <eglbinding/Version.h>


namespace eglbinding
{

const std::set<Version> Version::s_validVersions = 
{
    { 1, 0 },
    { 1, 1 },
    { 1, 2 },
    { 1, 3 },
    { 1, 4 },
    { 1, 5 }
};

const Version Version::s_latest { 1, 5 };

} // namespace eglbinding
