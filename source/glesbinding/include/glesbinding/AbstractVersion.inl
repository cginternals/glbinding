
#pragma once


#include <string>
#include <set>


namespace glesbinding
{


GLESBINDING_CONSTEXPR AbstractVersion::AbstractVersion()
: m_major(0)
, m_minor(0)
{
}

GLESBINDING_CONSTEXPR AbstractVersion::AbstractVersion(unsigned char majorVersion, unsigned char minorVersion)
: m_major(majorVersion)
, m_minor(minorVersion)
{
}

GLESBINDING_CONSTEXPR unsigned char AbstractVersion::majorVersion() const
{
    return m_major;
}

GLESBINDING_CONSTEXPR unsigned char AbstractVersion::minorVersion() const
{
    return m_minor;
}

AbstractVersion::operator std::pair<unsigned char, unsigned char>() const
{
    return std::pair<unsigned char, unsigned char>(m_major, m_minor);
}

AbstractVersion::operator std::pair<unsigned short, unsigned short>() const
{
    return std::pair<unsigned short, unsigned short>(m_major, m_minor);
}

AbstractVersion::operator std::pair<unsigned int, unsigned int>() const
{
    return std::pair<unsigned int, unsigned int>(m_major, m_minor);
}

std::string AbstractVersion::toString() const
{
    if (isNull()) {
        return "-.-";
    }

    return std::to_string(static_cast<int>(m_major)) + '.'  + std::to_string(static_cast<int>(m_minor));
}

GLESBINDING_CONSTEXPR bool AbstractVersion::isNull() const
{
    return m_major == 0;
}


} // namespace glesbinding
