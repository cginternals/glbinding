
#include <glbinding-aux/ValidVersions.h>

#include <glbinding/Version.h>


template <>
const std::set<glbinding::Version> glbinding::aux::ValidVersions<glbinding::Version>::s_validVersions =
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

template <>
const glbinding::Version glbinding::aux::ValidVersions<glbinding::Version>::s_latest { 4, 6 };
