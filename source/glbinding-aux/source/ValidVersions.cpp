
#include <glbinding-aux/ValidVersions.h>


namespace glbinding { namespace aux
{


bool ValidVersions::isValid(const Version & version) GLBINDING_NOEXCEPT
{
    return s_validVersions.find(version) != s_validVersions.end();
}

const Version & ValidVersions::nearest(const Version & version) GLBINDING_NOEXCEPT
{
    auto iterator = s_validVersions.lower_bound(version);

    if (iterator == s_validVersions.end())
    {
        return *(--iterator);
    }

    return *iterator;
}

const Version & ValidVersions::latest() GLBINDING_NOEXCEPT
{
    return s_latest;
}

const std::set<Version> & ValidVersions::versions() GLBINDING_NOEXCEPT
{
    return s_validVersions;
}

std::set<Version> ValidVersions::preceeding(const Version & version) GLBINDING_NOEXCEPT
{
    auto preceedingVersions = std::set<Version>{};
    for (auto & v : s_validVersions)
    {
        if (v < version)
        {
            preceedingVersions.insert(v);
        }
    }

    return preceedingVersions;
}

std::set<Version> ValidVersions::succeeding(const Version & version) GLBINDING_NOEXCEPT
{
    auto succeedingVersions = std::set<Version>{};
    for (auto & v : s_validVersions)
    {
        if (v > version)
        {
            succeedingVersions.insert(v);
        }
    }

    return succeedingVersions;
}


} } // namespace glbinding::aux