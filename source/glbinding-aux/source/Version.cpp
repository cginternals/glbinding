
#include <glbinding/Version.h>

#include <sstream>
#include <string>
#include <set>


namespace glbinding
{


std::string Version::toString() const
{
    std::stringstream stream;

    if (!isValid())
    {
        stream << "-.-";
    }
    else
    {
        stream << static_cast<int>(m_major) << "." << static_cast<int>(m_minor);
    }

    return stream.str();
}

bool Version::isValid() const
{
    return s_validVersions.find(*this) != s_validVersions.end();
}

const Version & Version::nearest() const
{
    auto iterator = s_validVersions.lower_bound(*this);

    if (iterator == s_validVersions.end())
    {
        return *(--iterator);
    }

    return *iterator;
}

const Version & Version::latest()
{
    return s_latest;
}

const std::set<Version> & Version::versions()
{
    return s_validVersions;
}

const std::set<Version> Version::preceeding(const Version & version)
{
    auto preceedingVersions = std::set<Version>{};
    for (auto & v : s_validVersions)
    {
        if (v < version)
            preceedingVersions.insert(v);
    }

    return preceedingVersions;
}

const std::set<Version> Version::succeeding(const Version & version)
{
    auto succeedingVersions = std::set<Version>{};
    for (auto & v : s_validVersions)
    {
        if (v > version)
            succeedingVersions.insert(v);
    }

    return succeedingVersions;
}


} // namespace glbinding


std::ostream & operator<<(std::ostream & stream, const glbinding::Version & version)
{
    stream << version.toString();

    return stream;
}
