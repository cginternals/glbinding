
#include <eglbinding-aux/ValidVersions.h>

#include <eglbinding/Version.h>


template <>
const std::set<eglbinding::Version> khrbinding::aux::ValidVersions<eglbinding::Version>::s_validVersions =
{
    { 1, 0 },
    { 1, 1 },
    { 1, 2 },
    { 1, 3 },
    { 1, 4 },
    { 1, 5 }
};

template <>
const eglbinding::Version khrbinding::aux::ValidVersions<eglbinding::Version>::s_latest { 1, 5 };
