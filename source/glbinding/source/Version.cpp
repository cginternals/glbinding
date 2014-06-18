
#include <glbinding/Version.h>

#include <sstream>
#include <set>


namespace gl
{

Version::Version()
: major(0)
, minor(0)
{
}

Version::Version(const unsigned int major, const unsigned int minor)
: major(major)
, minor(minor)
{
}

bool Version::operator<(const Version & version) const
{
    return major < version.major
        || (major == version.major && minor < version.minor);
}

bool Version::operator>(const Version & version) const
{
    return major > version.major
        || (major == version.major && minor > version.minor);
}

bool Version::operator==(const Version & version) const
{
    return major == version.major
        && minor == version.minor;
}

bool Version::operator!=(const Version & version) const
{
    return major != version.major
        || minor != version.minor;
}

bool Version::operator>=(const Version & version) const
{
    return *this > version || *this == version;
}

bool Version::operator<=(const Version & version) const
{
    return *this < version || *this == version;
}

Version::operator std::pair<unsigned char, unsigned char>() const
{
    return std::makepair(major, minor);
}

Version::operator std::pair<unsigned short, unsigned short>() const
{
    return std::makepair(major, minor);
}

Version::operator std::pair<unsigned int, unsigned int>() const
{
    return std::makepair(major, minor);
}

std::string Version::toString() const
{
	std::stringstream stream;
	stream << major << "." << minor;

    return stream.str();
}

bool Version::isNull() const
{
    return major == 0 && minor == 0;
}

bool Version::isValid() const
{
    return validVersions.find(*this) != validVersions.end();
}

Version Version::nearestValidVersion() const
{
    std::set<Version>::iterator iterator = validVersions.lower_bound(*this);

    if (iterator == validVersions.end())
    {
        return *(--iterator);
    }

    return *iterator;
}

} // namespace gl
