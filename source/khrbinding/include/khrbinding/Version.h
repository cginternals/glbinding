
#pragma once


#include <string>
#include <set>
#include <utility>

#include <khrbinding/khrbinding_api.h>
#include <khrbinding/khrbinding_features.h>


namespace khrbinding
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
template <typename Subclass>
class Version
{
public:
    /**
    *  @brief
    *    Default constructor, resulting in an invalid Version object
    */
    KHRBINDING_CONSTEXPR inline Version();

    /**
    *  @brief
    *    Constructor for a Version object with the given major and minor version
    *
    *  @param[in] majorVersion
    *    The major version
    *  @param[in] minorVersion
    *    The minor version
    */
    KHRBINDING_CONSTEXPR inline Version(unsigned char majorVersion, unsigned char minorVersion);

    /**
    *  @brief
    *    Copy constructor
    *
    *  @param[in] version
    *    The Version the data is used from
    */
    KHRBINDING_CONSTEXPR inline Version(const Subclass & version);

    /**
    *  @brief
    *    Move constructor
    *
    *  @param[in] version
    *    The Version the data is moved from
    */
    inline Version(Subclass && version);

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
    inline Subclass & operator=(const Subclass & version);

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
    inline Subclass & operator=(Subclass && version);

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
    KHRBINDING_CONSTEXPR inline bool operator<(const Subclass & version) const;

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
    KHRBINDING_CONSTEXPR inline bool operator>(const Subclass & version) const;

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
    KHRBINDING_CONSTEXPR inline bool operator==(const Subclass & version) const;

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
    KHRBINDING_CONSTEXPR inline bool operator!=(const Subclass & version) const;

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
    KHRBINDING_CONSTEXPR inline bool operator>=(const Subclass & version) const;

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
    KHRBINDING_CONSTEXPR inline bool operator<=(const Subclass & version) const;

    /**
    *  @brief
    *    Accessor for the major version
    *
    *  @return
    *    the major version
    */
    KHRBINDING_CONSTEXPR inline unsigned char majorVersion() const;

    /**
    *  @brief
    *    Accessor for the minor version
    *
    *  @return
    *    the minor version
    */
    KHRBINDING_CONSTEXPR inline unsigned char minorVersion() const;

    /**
    *  @brief
    *    Cast operator for a std::pair cast of type unsigned char
    */
    inline operator std::pair<unsigned char, unsigned char>() const;

    /**
    *  @brief
    *    Cast operator for a std::pair cast of type unsigned short
    */
    inline operator std::pair<unsigned short, unsigned short>() const;

    /**
    *  @brief
    *    Cast operator for a std::pair cast of type unsigned int
    */
    inline operator std::pair<unsigned int, unsigned int>() const;

    /**
    *  @brief
    *    Create a string representing the Version using the scheme "<majorVersion>.<minorVersion>"
    *
    *  @return
    *    The version as string, "-.-" iff the string is invalid
    */
    KHRBINDING_API inline std::string toString() const;

    /**
    *  @brief
    *    Check if the Version was constructed using the default constructor
    *
    *  @return
    *    'true' if the major version is 0, else 'false'
    *
    *  @remarks
    *    This method can be used to check if this Version was constructed using the default constructor or is otherwise malformed
    */
    KHRBINDING_CONSTEXPR inline bool isNull() const;


protected:
    unsigned char m_major; ///< The major version
    unsigned char m_minor; ///< The minor version
};


} // namespace khrbinding


#include <khrbinding/Version.inl>
