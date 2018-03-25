
#include <glscbinding-aux/ValidVersions.h>

#include <glscbinding/Version.h>


template <>
const std::set<glscbinding::Version> khrbinding::aux::ValidVersions<glscbinding::Version>::s_validVersions =
{
    { 2, 0 }
};

template <>
const glscbinding::Version khrbinding::aux::ValidVersions<glscbinding::Version>::s_latest { 2, 0 };
