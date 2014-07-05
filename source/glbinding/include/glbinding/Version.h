#pragma once

#include <glbinding/glbinding_api.h>

#include <string>
#include <utility>
#include <set>


namespace gl
{

class GLBINDING_API Version
{
public:
    Version();
    Version(unsigned int major, unsigned int minor);

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

    Version nearest() const;

    static const std::set<Version> & versions();

public:
    unsigned char major;
    unsigned char minor;

protected:
    static const std::set<Version> s_validVersions;
};

} // namespace gl
