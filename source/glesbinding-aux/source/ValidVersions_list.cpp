
#include <glesbinding-aux/ValidVersions.h>

#include <glesbinding/Version.h>


template <>
const std::set<glesbinding::Version> glesbinding::aux::ValidVersions<glesbinding::Version>::s_validVersions =
{
    { 2, 0 },
    { 3, 0 },
    { 3, 1 },
    { 3, 2 }
};

template <>
const glesbinding::Version glesbinding::aux::ValidVersions<glesbinding::Version>::s_latest { 3, 2 };
