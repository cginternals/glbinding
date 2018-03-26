
#pragma once


#include <string>
#include <set>


namespace glesbinding
{


GLESBINDING_CONSTEXPR Version::Version(const Version & version)
: AbstractVersion(version.m_major, version.m_minor)
{
}

Version::Version(Version && version)
: AbstractVersion(std::move(version.m_major), std::move(version.m_minor))
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

GLESBINDING_CONSTEXPR bool Version::operator<(const Version & version) const
{
    return m_major < version.m_major
        || (m_major == version.m_major && m_minor < version.m_minor);
}

GLESBINDING_CONSTEXPR bool Version::operator>(const Version & version) const
{
    return m_major > version.m_major
        || (m_major == version.m_major && m_minor > version.m_minor);
}

GLESBINDING_CONSTEXPR bool Version::operator==(const Version & version) const
{
    return m_major == version.m_major
        && m_minor == version.m_minor;
}

GLESBINDING_CONSTEXPR bool Version::operator!=(const Version & version) const
{
    return m_major != version.m_major
        || m_minor != version.m_minor;
}

GLESBINDING_CONSTEXPR bool Version::operator>=(const Version & version) const
{
    return *this > version || *this == version;
}

GLESBINDING_CONSTEXPR bool Version::operator<=(const Version & version) const
{
    return *this < version || *this == version;
}


} // namespace glesbinding
