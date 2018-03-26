
#pragma once


#include <string>
#include <set>
#include <utility>

#include <glbinding/glbinding_api.h>
#include <glbinding/glbinding_features.h>

#include <glbinding/AbstractVersion.h>


namespace glbinding
{


/**
*  @brief
*    The Version class represents an OpenGL feature, consisting of majow version and minor version, excluding the profile information.
*
*    This instance can represent both any officially released OpenGL feature and other combinations of major and minar version and provides methods for validity checking and comparison
*
*  Example code:
*  \code{.cpp}
*  const glbinding::Version currentVersion = glbinding::aux::ContextInfo::version();
*
*  if (currentVersion >= glbinding::Version(3, 2))
*  {
*      // do something
*  }
*  \endcode
*/
class Version : public AbstractVersion
{
public:
    /**
    *  @brief
    *    Constructors inherited from base class.
    */
    using AbstractVersion::AbstractVersion;

    /**
    *  @brief
    *    Copy constructor
    *
    *  @param[in] version
    *    The Version the data is used from
    */
    GLBINDING_CONSTEXPR inline Version(const Version & version);

    /**
    *  @brief
    *    Move constructor
    *
    *  @param[in] version
    *    The Version the data is moved from
    */
    inline Version(Version && version);

    /**
    *  @brief
    *    The assignment operator of another Version
    *
    *  @param[in] version
    *    The version the data is used from
    *
    *  @return
    *    The reference to this Version
    */
    inline Version & operator=(const Version & version);

    /**
    *  @brief
    *    The assignment operator of another Version that is moved from
    *
    *  @param[in] version
    *    The version the data is moved from
    *
    *  @return
    *    The reference to this Version
    */
    inline Version & operator=(Version && version);

    /**
    *  @brief
    *    Operator for lesser comparison to another Version
    *
    *  @param[in] version
    *    The Version to compare to
    *
    *  @return
    *    'true' if this Version is lesser than the other Version, else 'false'
    */
    GLBINDING_CONSTEXPR inline bool operator<(const Version & version) const;

    /**
    *  @brief
    *    Operator for greater comparison to another Version
    *
    *  @param[in] version
    *    The Version to compare to
    *
    *  @return
    *    'true' if this Version is greater than the other Version, else 'false'
    */
    GLBINDING_CONSTEXPR inline bool operator>(const Version & version) const;

    /**
    *  @brief
    *    Operator for equal comparison to another Version
    *
    *  @param[in] version
    *    The Version to compare to
    *
    *  @return
    *    'true' if this Version is equal to the other Version, else 'false'
    */
    GLBINDING_CONSTEXPR inline bool operator==(const Version & version) const;

    /**
    *  @brief
    *    Operator for unequal comparison to another Version
    *
    *  @param[in] version
    *    The Version to compare to
    *
    *  @return
    *    'true' if this Version is not equal to the other Version, else 'false'
    */
    GLBINDING_CONSTEXPR inline bool operator!=(const Version & version) const;

    /**
    *  @brief
    *    Operator for greater equal comparison to another Version
    *
    *  @param[in] version
    *    The Version to compare to
    *
    *  @return
    *    'true' if this Version is greater or equal than the other Version, else 'false'
    */
    GLBINDING_CONSTEXPR inline bool operator>=(const Version & version) const;

    /**
    *  @brief
    *    Operator for lesser equal comparison to another Version
    *
    *  @param[in] version
    *    The Version to compare to
    *
    *  @return
    *    'true' if this Version is lesser or equal than the other Version, else 'false'
    */
    GLBINDING_CONSTEXPR inline bool operator<=(const Version & version) const;
};


} // namespace glbinding


#include <glbinding/Version.inl>
