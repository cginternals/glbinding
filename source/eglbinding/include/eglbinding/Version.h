
#pragma once


#include <khrbinding/Version.h>

#include <eglbinding/eglbinding_api.h>
#include <eglbinding/eglbinding_features.h>


namespace eglbinding
{


class Version : public khrbinding::Version<eglbinding::Version>
{
public:
    using khrbinding::Version<eglbinding::Version>::Version;

    EGLBINDING_CONSTEXPR inline Version(const Version &version);
    EGLBINDING_CONSTEXPR inline Version(Version && version);

    inline Version & operator=(const Version &version);
    inline Version & operator=(Version && version);
};


} // namespace eglbinding


#include <eglbinding/Version.inl>
