
#include <glbinding/Version.h>

#include <sstream>
#include <string>
#include <set>


namespace gl
{

Version::Version()
: major(0)
, minor(0)
{
}

Version::Version(const GLint major, const GLint minor)
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
    return std::make_pair(major, minor);
}

Version::operator std::pair<unsigned short, unsigned short>() const
{
    return std::make_pair(major, minor);
}

Version::operator std::pair<unsigned int, unsigned int>() const
{
    return std::make_pair(major, minor);
}

std::string Version::toString() const
{
	std::stringstream stream;
    if (0 == major && 0 == minor)
        stream << "-.-";
    else
    	stream << static_cast<int>(major) << "." << static_cast<int>(minor);

    return stream.str();
}

bool Version::isNull() const
{
    return major == 0 && minor == 0;
}

bool Version::isValid() const
{
    return s_validVersions.find(*this) != s_validVersions.end();
}

Version Version::nearest() const
{
    std::set<Version>::iterator iterator = s_validVersions.lower_bound(*this);

    if (iterator == s_validVersions.end())
        return *(--iterator);

    return *iterator;
}

const std::set<Version> & Version::versions()
{
    return s_validVersions;
}


} // namespace gl


std::ostream & operator<<(std::ostream & stream, const gl::Version & version)
{
    stream << version.toString();
    return stream;
}
