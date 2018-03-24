
#include <glbinding-aux/ValidVersions.h>

#include <sstream>
#include <string>
#include <set>

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


} } // namespace glbinding::aux


std::ostream & operator<<(std::ostream & stream, const glbinding::Version & version)
{
    stream << version.toString();

    return stream;
}
