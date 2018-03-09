
#include <wglbinding/Version.h>


namespace wglbinding
{


const std::set<Version> Version::s_validVersions =
{
    { 1, 0 }
};

const Version Version::s_latest { 1, 0 };


} // namespace wglbinding
