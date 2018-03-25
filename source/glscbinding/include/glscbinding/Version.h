
#pragma once


#include <khrbinding/Version.h>

#include <glscbinding/glscbinding_api.h>
#include <glscbinding/glscbinding_features.h>


namespace glscbinding
{


class Version : public khrbinding::Version<glscbinding::Version>
{
public:
    using khrbinding::Version<glscbinding::Version>::Version;

    GLSCBINDING_CONSTEXPR inline Version(const Version &version);
    GLSCBINDING_CONSTEXPR inline Version(Version && version);

    inline Version & operator=(const Version &version);
    inline Version & operator=(Version && version);
};


} // namespace glscbinding


#include <glscbinding/Version.inl>
