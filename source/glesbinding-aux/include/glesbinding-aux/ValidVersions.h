
#pragma once


#include <khrbinding-aux/ValidVersions.h>

#include <glesbinding-aux/glesbinding-aux_api.h>
#include <glesbinding-aux/glesbinding-aux_features.h>

#include <glesbinding/Version.h>


namespace glesbinding { namespace aux
{


class GLESBINDING_AUX_API ValidVersions : public khrbinding::aux::ValidVersions<Version>
{
};


} } // namespace glesbinding::aux


template <>
GLESBINDING_AUX_TEMPLATE_API const std::set<glesbinding::Version> khrbinding::aux::ValidVersions<glesbinding::Version>::s_validVersions;

template <>
GLESBINDING_AUX_TEMPLATE_API const glesbinding::Version khrbinding::aux::ValidVersions<glesbinding::Version>::s_latest;


#include <khrbinding-aux/ValidVersions.inl>
