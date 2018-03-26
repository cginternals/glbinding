
#include <glscbinding-aux/ValidVersions.h>

#include <glscbinding/Version.h>


template <>
const std::set<glscbinding::Version> glscbinding::aux::ValidVersions<glscbinding::Version>::s_validVersions =
{
    { 2, 0 }
};

template <>
const glscbinding::Version glscbinding::aux::ValidVersions<glscbinding::Version>::s_latest { 2, 0 };
