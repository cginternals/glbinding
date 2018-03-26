
#pragma once


#include <string>
#include <set>


namespace {{binding}}
{


{{ucbinding}}_CONSTEXPR Version::Version(const Version & version)
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

{{ucbinding}}_CONSTEXPR bool Version::operator<(const Version & version) const
{
    return m_major < version.m_major
        || (m_major == version.m_major && m_minor < version.m_minor);
}

{{ucbinding}}_CONSTEXPR bool Version::operator>(const Version & version) const
{
    return m_major > version.m_major
        || (m_major == version.m_major && m_minor > version.m_minor);
}

{{ucbinding}}_CONSTEXPR bool Version::operator==(const Version & version) const
{
    return m_major == version.m_major
        && m_minor == version.m_minor;
}

{{ucbinding}}_CONSTEXPR bool Version::operator!=(const Version & version) const
{
    return m_major != version.m_major
        || m_minor != version.m_minor;
}

{{ucbinding}}_CONSTEXPR bool Version::operator>=(const Version & version) const
{
    return *this > version || *this == version;
}

{{ucbinding}}_CONSTEXPR bool Version::operator<=(const Version & version) const
{
    return *this < version || *this == version;
}


} // namespace {{binding}}
