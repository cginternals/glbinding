#pragma once

#include <glesbinding/glesbinding_api.h>

#include <ostream>
#include <string>
#include <set>
#include <utility>


namespace glesbinding
{

class GLESBINDING_API Version
{
public:
    Version();
    Version(int majorVersion, int minorVersion);

    bool operator< (const Version & version) const;
    bool operator> (const Version & version) const;
    bool operator==(const Version & version) const;
    bool operator!=(const Version & version) const;
    bool operator>=(const Version & version) const;
    bool operator<=(const Version & version) const;

    operator std::pair<unsigned char,  unsigned char> () const;
    operator std::pair<unsigned short, unsigned short>() const;
    operator std::pair<unsigned int,   unsigned int>  () const;

    std::string toString() const;

    bool isValid() const;
    bool isNull() const;

    const Version & nearest() const;

    static const std::set<Version> & versions();
    static const Version & latest();

public:
    int m_major;
    int m_minor;

protected:
    static const std::set<Version> s_validVersions;
    static const Version s_latest;
};

} // namespace glesbinding

GLESBINDING_API std::ostream & operator<<(std::ostream & stream, const glesbinding::Version & version);