
#pragma once


#include <khrbinding-aux/ValidVersions.h>

#include <glscbinding-aux/glscbinding-aux_api.h>
#include <glscbinding-aux/glscbinding-aux_features.h>

#include <glscbinding/Version.h>


namespace glscbinding { namespace aux
{


class GLSCBINDING_AUX_API ValidVersions : public khrbinding::aux::ValidVersions<Version>
{
};


} } // namespace glscbinding::aux


template <>
GLSCBINDING_AUX_TEMPLATE_API const std::set<glscbinding::Version> khrbinding::aux::ValidVersions<glscbinding::Version>::s_validVersions;

template <>
GLSCBINDING_AUX_TEMPLATE_API const glscbinding::Version khrbinding::aux::ValidVersions<glscbinding::Version>::s_latest;


#include <khrbinding-aux/ValidVersions.inl>
