
#include <glbinding-aux/ValidVersions.h>

#include <glbinding/Version.h>


namespace glbinding { namespace aux
{


const std::set<Version> ValidVersions::s_validVersions =
{
    { 1, 0 },
    { 1, 1 },
    { 1, 2 },
    { 1, 3 },
    { 1, 4 },
    { 1, 5 },
    { 2, 0 },
    { 2, 1 },
    { 3, 0 },
    { 3, 1 },
    { 3, 2 },
    { 3, 3 },
    { 4, 0 },
    { 4, 1 },
    { 4, 2 },
    { 4, 3 },
    { 4, 4 },
    { 4, 5 },
    { 4, 6 }
};

const Version ValidVersions::s_latest { 4, 6 };


} } // namespace glbinding::aux
