
#pragma once


#include <string>
#include <set>


namespace khrbinding
{


template <typename Subclass>
KHRBINDING_CONSTEXPR Version<Subclass>::Version()
: m_major(0)
, m_minor(0)
{
}

template <typename Subclass>
KHRBINDING_CONSTEXPR Version<Subclass>::Version(unsigned char majorVersion, unsigned char minorVersion)
: m_major(majorVersion)
, m_minor(minorVersion)
{
}

template <typename Subclass>
KHRBINDING_CONSTEXPR Version<Subclass>::Version(const Subclass & version)
: m_major(version.m_major)
, m_minor(version.m_minor)
{
}

template <typename Subclass>
Version<Subclass>::Version(Subclass && version)
: m_major(std::move(version.m_major))
, m_minor(std::move(version.m_minor))
{
}

template <typename Subclass>
Subclass & Version<Subclass>::operator=(const Subclass & version)
{
    m_major = version.m_major;
    m_minor = version.m_minor;

    return *this;
}

template <typename Subclass>
Subclass & Version<Subclass>::operator=(Subclass && version)
{
    m_major = std::move(version.m_major);
    m_minor = std::move(version.m_minor);

    return *this;
}

template <typename Subclass>
KHRBINDING_CONSTEXPR bool Version<Subclass>::operator<(const Subclass & version) const
{
    return m_major < version.m_major
        || (m_major == version.m_major && m_minor < version.m_minor);
}

template <typename Subclass>
KHRBINDING_CONSTEXPR bool Version<Subclass>::operator>(const Subclass & version) const
{
    return m_major > version.m_major
        || (m_major == version.m_major && m_minor > version.m_minor);
}

template <typename Subclass>
KHRBINDING_CONSTEXPR bool Version<Subclass>::operator==(const Subclass & version) const
{
    return m_major == version.m_major
        && m_minor == version.m_minor;
}

template <typename Subclass>
KHRBINDING_CONSTEXPR bool Version<Subclass>::operator!=(const Subclass & version) const
{
    return m_major != version.m_major
        || m_minor != version.m_minor;
}

template <typename Subclass>
KHRBINDING_CONSTEXPR bool Version<Subclass>::operator>=(const Subclass & version) const
{
    return *this > version || *this == version;
}

template <typename Subclass>
KHRBINDING_CONSTEXPR bool Version<Subclass>::operator<=(const Subclass & version) const
{
    return *this < version || *this == version;
}

template <typename Subclass>
KHRBINDING_CONSTEXPR unsigned char Version<Subclass>::majorVersion() const
{
    return m_major;
}

template <typename Subclass>
KHRBINDING_CONSTEXPR unsigned char Version<Subclass>::minorVersion() const
{
    return m_minor;
}

template <typename Subclass>
Version<Subclass>::operator std::pair<unsigned char, unsigned char>() const
{
    return std::pair<unsigned char, unsigned char>(m_major, m_minor);
}

template <typename Subclass>
Version<Subclass>::operator std::pair<unsigned short, unsigned short>() const
{
    return std::pair<unsigned short, unsigned short>(m_major, m_minor);
}

template <typename Subclass>
Version<Subclass>::operator std::pair<unsigned int, unsigned int>() const
{
    return std::pair<unsigned int, unsigned int>(m_major, m_minor);
}

template <typename Subclass>
std::string Version<Subclass>::toString() const
{
    if (isNull()) {
        return "-.-";
    }

    return std::to_string(static_cast<int>(m_major)) + '.'  + std::to_string(static_cast<int>(m_minor));
}

template <typename Subclass>
KHRBINDING_CONSTEXPR bool Version<Subclass>::isNull() const
{
    return m_major == 0;
}


} // namespace khrbinding
