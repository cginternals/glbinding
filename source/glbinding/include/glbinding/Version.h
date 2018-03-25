
#pragma once


#include <khrbinding/Version.h>


namespace glbinding
{


class Version : public khrbinding::Version<glbinding::Version>
{
    using khrbinding::Version<glbinding::Version>::Version;
};


} // namespace glbinding
