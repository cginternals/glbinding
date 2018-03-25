
#pragma once


#include <khrbinding/Version.h>

#include <glbinding/glbinding_api.h>
#include <glbinding/glbinding_features.h>


namespace glbinding
{


class Version : public khrbinding::Version<glbinding::Version>
{
public:
    using khrbinding::Version<glbinding::Version>::Version;

    GLBINDING_CONSTEXPR inline Version(const Version &version);
    GLBINDING_CONSTEXPR inline Version(Version && version);

    inline Version & operator=(const Version &version);
    inline Version & operator=(Version && version);
};


} // namespace glbinding


#include <glbinding/Version.inl>
