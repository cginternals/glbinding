
#include <glesbinding-aux/ValidVersions.h>


namespace glesbinding { namespace aux
{


bool ValidVersions::isValid(const Version & version)
{
    return s_validVersions.find(version) != s_validVersions.end();
}

const Version & ValidVersions::nearest(const Version & version)
{
    auto iterator = s_validVersions.lower_bound(version);

    if (iterator == s_validVersions.end())
    {
        return *(--iterator);
    }

    return *iterator;
}

const Version & ValidVersions::latest()
{
    return s_latest;
}

const std::set<Version> & ValidVersions::versions()
{
    return s_validVersions;
}

std::set<Version> ValidVersions::preceeding(const Version & version)
{
    auto preceedingVersions = std::set<Version>{};
    for (auto & v : s_validVersions)
    {
        if (v < version)
            preceedingVersions.insert(v);
    }

    return preceedingVersions;
}

std::set<Version> ValidVersions::succeeding(const Version & version)
{
    auto succeedingVersions = std::set<Version>{};
    for (auto & v : s_validVersions)
    {
        if (v > version)
            succeedingVersions.insert(v);
    }

    return succeedingVersions;
}


} } // namespace glesbinding::aux
