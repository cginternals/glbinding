
#pragma once


#include <khrbinding-aux/ValidVersions.h>

#include <eglbinding-aux/eglbinding-aux_api.h>
#include <eglbinding-aux/eglbinding-aux_features.h>

#include <eglbinding/Version.h>


namespace eglbinding { namespace aux
{


class EGLBINDING_AUX_API ValidVersions : public khrbinding::aux::ValidVersions<Version>
{
};


} } // namespace eglbinding::aux


template <>
EGLBINDING_AUX_TEMPLATE_API const std::set<eglbinding::Version> khrbinding::aux::ValidVersions<eglbinding::Version>::s_validVersions;

template <>
EGLBINDING_AUX_TEMPLATE_API const eglbinding::Version khrbinding::aux::ValidVersions<eglbinding::Version>::s_latest;


#include <khrbinding-aux/ValidVersions.inl>
