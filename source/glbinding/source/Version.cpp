
#include <glbinding/Version.h>

#include <sstream>
#include <string>
#include <set>


namespace glbinding
{


Version::Version()
: m_major(0)
, m_minor(0)
{
}

Version::Version(unsigned char majorVersion, unsigned char minorVersion)
: m_major(majorVersion)
, m_minor(minorVersion)
{
}

Version::Version(const Version & version)
: m_major(version.m_major)
, m_minor(version.m_minor)
{
}

Version::Version(Version && version)
: m_major(std::move(version.m_major))
, m_minor(std::move(version.m_minor))
{
}

Version & Version::operator=(const Version & version)
{
    m_major = version.m_major;
    m_minor = version.m_minor;

    return *this;
}

Version & Version::operator=(Version && version)
{
    m_major = std::move(version.m_major);
    m_minor = std::move(version.m_minor);

    return *this;
}

bool Version::operator<(const Version & version) const
{
    return m_major < version.m_major
        || (m_major == version.m_major && m_minor < version.m_minor);
}

bool Version::operator>(const Version & version) const
{
    return m_major > version.m_major
        || (m_major == version.m_major && m_minor > version.m_minor);
}

bool Version::operator==(const Version & version) const
{
    return m_major == version.m_major
        && m_minor == version.m_minor;
}

bool Version::operator!=(const Version & version) const
{
    return m_major != version.m_major
        || m_minor != version.m_minor;
}

bool Version::operator>=(const Version & version) const
{
    return *this > version || *this == version;
}

bool Version::operator<=(const Version & version) const
{
    return *this < version || *this == version;
}

unsigned char Version::majorVersion() const
{
    return m_major;
}

unsigned char Version::minorVersion() const
{
    return m_minor;
}

Version::operator std::pair<unsigned char, unsigned char>() const
{
    return std::pair<unsigned char, unsigned char>(m_major, m_minor);
}

Version::operator std::pair<unsigned short, unsigned short>() const
{
    return std::pair<unsigned short, unsigned short>(m_major, m_minor);
}

Version::operator std::pair<unsigned int, unsigned int>() const
{
    return std::pair<unsigned int, unsigned int>(m_major, m_minor);
}

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

bool Version::isNull() const
{
    return m_major == 0;
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
