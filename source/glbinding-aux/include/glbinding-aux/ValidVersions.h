
#pragma once


#include <khrbinding-aux/ValidVersions.h>

#include <glbinding-aux/glbinding-aux_api.h>
#include <glbinding-aux/glbinding-aux_features.h>

#include <glbinding/Version.h>


namespace glbinding { namespace aux
{


class GLBINDING_AUX_API ValidVersions : public khrbinding::aux::ValidVersions<Version>
{
};


} } // namespace glbinding::aux


template <>
GLBINDING_AUX_TEMPLATE_API const std::set<glbinding::Version> khrbinding::aux::ValidVersions<glbinding::Version>::s_validVersions;

template <>
GLBINDING_AUX_TEMPLATE_API const glbinding::Version khrbinding::aux::ValidVersions<glbinding::Version>::s_latest;


#include <khrbinding-aux/ValidVersions.inl>
