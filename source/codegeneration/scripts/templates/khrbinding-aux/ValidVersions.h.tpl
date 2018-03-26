
#pragma once


#include <set>
#include <utility>

#include <{{binding}}/Version.h>

#include <{{binding}}-aux/{{binding}}-aux_api.h>
#include <{{binding}}-aux/{{binding}}-aux_features.h>


namespace {{binding}} { namespace aux
{


template <typename VersionClass>
class {{ucbinding}}_AUX_TEMPLATE_API ValidVersions
{
public:
    /**
    *  @brief
    *    Check for validity of this Version, based on the list of all valid OpenGL feautures
    *
    *  @return
    *    true iff the version is valid (i.e., if this version is present in the set of valid versions)
    */
    static bool isValid(const VersionClass& version);

    /**
    *  @brief
    *    Returns the nearest valid Version to this Version
    *
    *  @return
    *    The nearest valid Version that is either equal or lower than this Version
    */
    static const VersionClass & nearest(const VersionClass& version);

    /**
    *  @brief
    *    Accessor for the list of all valid Versions (OpenGL features)
    *
    *  @return
    *    The set of all valid Versions (= released OpenGL Features)
    */
    static const std::set<VersionClass> & versions();

    /**
    * @brief
    *   Returns the list of all valid, previous Versions (Features) known by the gl.xml
    *
    * @return
    *   The list of all valid Versions (Features) with a version number below the provided one
    */
    static std::set<VersionClass> preceeding(const VersionClass & version);

    /**
    * @brief
    *   Returns the list of all valid, subsequent Versions (Features) known by the gl.xml
    *
    * @return
    *   The list of all valid Versions (Features) with a version number above the provided one
    */
    static std::set<VersionClass> succeeding(const VersionClass & version);

    /**
    *  @brief
    *    Return the most current valid Version
    *
    *  @return
    *    The most current Version from the set of all valid versions
    */
    static const VersionClass & latest();


protected:
    static const std::set<VersionClass> s_validVersions; ///< The set of all valid versions
    static const VersionClass           s_latest;        ///< The most current version
};


template <>
{{ucbinding}}_AUX_API const std::set<{{binding}}::Version> {{binding}}::aux::ValidVersions<{{binding}}::Version>::s_validVersions;

template <>
{{ucbinding}}_AUX_API const {{binding}}::Version {{binding}}::aux::ValidVersions<{{binding}}::Version>::s_latest;


} } // namespace {{binding}}::aux


#include <{{binding}}-aux/ValidVersions.inl>
