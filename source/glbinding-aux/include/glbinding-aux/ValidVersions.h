
#pragma once


#include <set>
#include <utility>

#include <glbinding/Version.h>

#include <glbinding-aux/glbinding-aux_api.h>
#include <glbinding-aux/glbinding-aux_features.h>


namespace glbinding { namespace aux
{


template <typename VersionClass>
class GLBINDING_AUX_TEMPLATE_API ValidVersions
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
GLBINDING_AUX_API const std::set<glbinding::Version> glbinding::aux::ValidVersions<glbinding::Version>::s_validVersions;

template <>
GLBINDING_AUX_API const glbinding::Version glbinding::aux::ValidVersions<glbinding::Version>::s_latest;


} } // namespace glbinding::aux


#include <glbinding-aux/ValidVersions.inl>
