
#include <khrapi/Version.h>

#include <ostream>
#include <sstream>

namespace khrapi
{

AbstractVersion::AbstractVersion()
: m_major{0}
, m_minor{0}
{
}

AbstractVersion::AbstractVersion(const int majorVersion, const int minorVersion)
: m_major{majorVersion}
, m_minor{minorVersion}
{
}

AbstractVersion::AbstractVersion(const AbstractVersion & version)
: m_major{version.m_major}
, m_minor{version.m_minor}
{
}

AbstractVersion::AbstractVersion(AbstractVersion && version)
: m_major{std::move(version.m_major)}
, m_minor{std::move(version.m_minor)}
{
}

AbstractVersion::operator std::pair<unsigned char, unsigned char>() const
{
    return std::make_pair(m_major, m_minor);
}

AbstractVersion::operator std::pair<unsigned short, unsigned short>() const
{
    return std::make_pair(m_major, m_minor);
}

AbstractVersion::operator std::pair<unsigned int, unsigned int>() const
{
    return std::make_pair(m_major, m_minor);
}

std::string AbstractVersion::toString() const
{
    std::stringstream stream;
    if (0 == m_major)
    {
        stream << "-.-";
    }
    else
    {
        stream << static_cast<int>(m_major) << "." << static_cast<int>(m_minor);
    }

    return stream.str();
}

bool AbstractVersion::isNull() const
{
    return m_major == 0 && m_minor == 0;
}

std::ostream & operator<<(std::ostream & stream, const khrapi::AbstractVersion & version)
{
    stream << version.toString();
    return stream;
}

} // namespace khrapi
