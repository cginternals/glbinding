#pragma once

#include <iosfwd>
#include <string>
#include <set>
#include <utility>


namespace khrapi
{

class AbstractVersion
{
public:
    AbstractVersion();
    AbstractVersion(int majorVersion, int minorVersion);

    AbstractVersion(const AbstractVersion & version);
    AbstractVersion(AbstractVersion && version);

    operator std::pair<unsigned char,  unsigned char> () const;
    operator std::pair<unsigned short, unsigned short>() const;
    operator std::pair<unsigned int,   unsigned int>  () const;

    std::string toString() const;

    bool isNull() const;
public:
    int m_major;
    int m_minor;
};

std::ostream & operator<<(std::ostream & stream, const AbstractVersion & version);

template <typename Api>
class Version : public AbstractVersion
{
public:
    Version();
    Version(int majorVersion, int minorVersion);

    Version(const Version & version);
    Version(Version && version);

    Version & operator=(const Version & version);
    Version & operator=(Version && version);

    inline bool operator< (const Version & version) const;
    inline bool operator> (const Version & version) const;
    inline bool operator==(const Version & version) const;
    inline bool operator!=(const Version & version) const;
    inline bool operator>=(const Version & version) const;
    inline bool operator<=(const Version & version) const;
};

} // namespace khrapi

#include <khrapi/Version.hpp>
