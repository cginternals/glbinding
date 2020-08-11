
#pragma once


#include <set>
#include <utility>

#include <glbinding/Version.h>

#include <glbinding-aux/glbinding-aux_api.h>
#include <glbinding-aux/glbinding-aux_features.h>


namespace glbinding { namespace aux
{


class GLBINDING_AUX_API ValidVersions
{
public:
    /**
    *  @brief
    *    Check for validity of this Version, based on the list of all valid features
    *
    *  @return
    *    `true` iff the version is valid (i.e., if this version is present in the set of valid versions)
    */
    static bool isValid(const Version & version) GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Returns the nearest valid Version to this Version
    *
    *  @return
    *    The nearest valid Version that is either equal or lower than this Version
    */
    static const Version & nearest(const Version & version) GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Accessor for the list of all valid Versions (OpenGL features)
    *
    *  @return
    *    The set of all valid Versions (= released OpenGL Features)
    */
    static const std::set<Version> & versions() GLBINDING_NOEXCEPT;

    /**
    * @brief
    *   Returns the list of all valid, previous Versions (Features) known by the gl.xml
    *
    * @return
    *   The list of all valid Versions (Features) with a version number below the provided one
    */
    static std::set<Version> preceeding(const Version & version) GLBINDING_NOEXCEPT;

    /**
    * @brief
    *   Returns the list of all valid, subsequent Versions (Features) known by the gl.xml
    *
    * @return
    *   The list of all valid Versions (Features) with a version number above the provided one
    */
    static std::set<Version> succeeding(const Version & version) GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Return the most current valid Version
    *
    *  @return
    *    The most current Version from the set of all valid versions
    */
    static const Version & latest() GLBINDING_NOEXCEPT;


protected:
    static const std::set<Version> s_validVersions; ///< The set of all valid versions
    static const Version           s_latest;        ///< The most current version
};


} } // namespace glbinding::aux