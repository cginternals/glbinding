
#pragma once


#include <string>
#include <set>


namespace glbinding
{


template <typename Subclass>
KHRBINDING_CONSTEXPR Version<Subclass>::Version(const Subclass & version)
: AbstractVersion(version.m_major, version.m_minor)
{
}

template <typename Subclass>
Version<Subclass>::Version(Subclass && version)
: AbstractVersion(std::move(version.m_major), std::move(version.m_minor))
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


} // namespace glbinding
