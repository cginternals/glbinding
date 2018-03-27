
#include <eglbinding-aux/ValidVersions.h>


const std::set<eglbinding::Version> eglbinding::aux::ValidVersions::s_validVersions =
{
    { 1, 0 },
    { 1, 1 },
    { 1, 2 },
    { 1, 3 },
    { 1, 4 },
    { 1, 5 }
};

const eglbinding::Version eglbinding::aux::ValidVersions::s_latest { 1, 5 };
