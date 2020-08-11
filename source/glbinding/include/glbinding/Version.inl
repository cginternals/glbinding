
#pragma once


namespace glbinding
{


GLBINDING_CONSTEXPR Version::Version() GLBINDING_NOEXCEPT
: m_major(0)
, m_minor(0)
{
}

GLBINDING_CONSTEXPR Version::Version(unsigned char majorVersion, unsigned char minorVersion) GLBINDING_NOEXCEPT
: m_major(majorVersion)
, m_minor(minorVersion)
{
}

GLBINDING_CONSTEXPR Version::Version(const Version & version) GLBINDING_NOEXCEPT
: Version(version.m_major, version.m_minor)
{
}

Version::Version(Version && version) GLBINDING_NOEXCEPT
: Version(std::move(version.m_major), std::move(version.m_minor))
{
}


GLBINDING_CONSTEXPR unsigned char Version::majorVersion() const GLBINDING_NOEXCEPT
{
    return m_major;
}

GLBINDING_CONSTEXPR unsigned char Version::minorVersion() const GLBINDING_NOEXCEPT
{
    return m_minor;
}

Version::operator std::pair<unsigned char, unsigned char>() const GLBINDING_NOEXCEPT
{
    return std::pair<unsigned char, unsigned char>(m_major, m_minor);
}

Version::operator std::pair<unsigned short, unsigned short>() const GLBINDING_NOEXCEPT
{
    return std::pair<unsigned short, unsigned short>(m_major, m_minor);
}

Version::operator std::pair<unsigned int, unsigned int>() const GLBINDING_NOEXCEPT
{
    return std::pair<unsigned int, unsigned int>(m_major, m_minor);
}

std::string Version::toString() const GLBINDING_NOEXCEPT
{
    if (isNull()) {
        return "-.-";
    }

    return std::to_string(static_cast<int>(m_major)) + '.'  + std::to_string(static_cast<int>(m_minor));
}

GLBINDING_CONSTEXPR bool Version::isNull() const GLBINDING_NOEXCEPT
{
    return m_major == 0;
}

Version & Version::operator=(const Version & version) GLBINDING_NOEXCEPT
{
    m_major = version.m_major;
    m_minor = version.m_minor;

    return *this;
}

Version & Version::operator=(Version && version) GLBINDING_NOEXCEPT
{
    m_major = std::move(version.m_major);
    m_minor = std::move(version.m_minor);

    return *this;
}

GLBINDING_CONSTEXPR bool Version::operator<(const Version & version) const GLBINDING_NOEXCEPT
{
    return m_major < version.m_major
        || (m_major == version.m_major && m_minor < version.m_minor);
}

GLBINDING_CONSTEXPR bool Version::operator>(const Version & version) const GLBINDING_NOEXCEPT
{
    return m_major > version.m_major
        || (m_major == version.m_major && m_minor > version.m_minor);
}

GLBINDING_CONSTEXPR bool Version::operator==(const Version & version) const GLBINDING_NOEXCEPT
{
    return m_major == version.m_major
        && m_minor == version.m_minor;
}

GLBINDING_CONSTEXPR bool Version::operator!=(const Version & version) const GLBINDING_NOEXCEPT
{
    return m_major != version.m_major
        || m_minor != version.m_minor;
}

GLBINDING_CONSTEXPR bool Version::operator>=(const Version & version) const GLBINDING_NOEXCEPT
{
    return *this > version || *this == version;
}

GLBINDING_CONSTEXPR bool Version::operator<=(const Version & version) const GLBINDING_NOEXCEPT
{
    return *this < version || *this == version;
}


} // namespace glbinding