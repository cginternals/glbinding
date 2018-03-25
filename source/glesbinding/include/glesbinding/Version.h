
#pragma once


#include <khrbinding/Version.h>

#include <glesbinding/glesbinding_api.h>
#include <glesbinding/glesbinding_features.h>


namespace glesbinding
{


class Version : public khrbinding::Version<glesbinding::Version>
{
public:
    using khrbinding::Version<glesbinding::Version>::Version;

    GLESBINDING_CONSTEXPR inline Version(const Version &version);
    GLESBINDING_CONSTEXPR inline Version(Version && version);

    inline Version & operator=(const Version &version);
    inline Version & operator=(Version && version);
};


} // namespace glesbinding


#include <glesbinding/Version.inl>
