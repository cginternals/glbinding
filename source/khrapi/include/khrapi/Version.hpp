
#include <khrapi/Version.h>

namespace khrapi
{

template <typename Api>
Version<Api>::Version()
{
}

template <typename Api>
Version<Api>::Version(int majorVersion, int minorVersion)
: AbstractVersion(majorVersion, minorVersion)
{
}

template <typename Api>
Version<Api>::Version(const Version & version)
: AbstractVersion(version)
{
}

template <typename Api>
Version<Api>::Version(Version && version)
: AbstractVersion(version)
{
}

template <typename Api>
Version<Api> & Version<Api>::operator=(const Version & version)
{
    m_major = version.m_major;
    m_minor = version.m_minor;

    return *this;
}

template <typename Api>
Version<Api> & Version<Api>::operator=(Version && version)
{
    m_major = std::move(version.m_major);
    m_minor = std::move(version.m_minor);

    return *this;
}

template <typename Api>
inline bool Version<Api>::operator<(const Version & version) const
{
    return m_major < version.m_major
        || (m_major == version.m_major && m_minor < version.m_minor);
}

template <typename Api>
inline bool Version<Api>::operator>(const Version & version) const
{
    return m_major > version.m_major
        || (m_major == version.m_major && m_minor > version.m_minor);
}

template <typename Api>
inline bool Version<Api>::operator==(const Version & version) const
{
    return m_major == version.m_major
        && m_minor == version.m_minor;
}

template <typename Api>
inline bool Version<Api>::operator!=(const Version & version) const
{
    return m_major != version.m_major
        || m_minor != version.m_minor;
}

template <typename Api>
inline bool Version<Api>::operator>=(const Version & version) const
{
    return *this > version || *this == version;
}

template <typename Api>
inline bool Version<Api>::operator<=(const Version & version) const
{
    return *this < version || *this == version;
}

} // namespace khrapi
