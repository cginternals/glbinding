
#include <glesbinding-aux/ValidVersions.h>


const std::set<glesbinding::Version> glesbinding::aux::ValidVersions::s_validVersions =
{
    { 2, 0 },
    { 3, 0 },
    { 3, 1 },
    { 3, 2 }
};

const glesbinding::Version glesbinding::aux::ValidVersions::s_latest { 3, 2 };
