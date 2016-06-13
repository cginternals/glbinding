
#pragma once

#include <iosfwd>
#include <string>
#include <set>
#include <utility>

#include <glbinding/glbinding_api.h>


namespace glbinding
{

/**
 * @brief The Version class represents an OpenGL feature, consisting of majow version and minor version, excluding the profile information.
 *
 * This instance can represent both any officially released OpenGL feature and other combinations of major and minar version and provides methods for validity checking and comparison.
 *
 * Example code:
 * \code{.cpp}
 * const glbinding::Version currentVersion = glbinding::ContextInfo::version();
 *
 * if (currentVersion >= glbinding::Version(3, 2))
 * {
 *     // do something
 * }
 * \endcode
 */
class GLBINDING_API Version
{
public:
    /**
     * @brief
     *   Default constructor, resulting in an invalid Version object.
     */
    Version();

    /**
     * @brief
     *   Constructor for a Version object with the given major and minor version.
     *
     * @param[in] majorVersion
     *   The major version
     * @param[in] minorVersion
     *   The minor version
     */
    Version(unsigned char majorVersion, unsigned char minorVersion);

    /**
     * @brief
     *   Copy constructor
     *
     * @param[in] version
     *   The Version the data is used from
     */
    Version(const Version & version);

    /**
     * @brief
     *   Move constructor
     *
     * @param[in] version
     *   The Version the data is moved from
     */
    Version(Version && version);

    /**
     * @brief
     *   The assignment operator of another Version
     *
     * @param[in] version
     *   The version the data is used from
     *
     * @return
     *   The reference to this Version
     */
    Version & operator=(const Version & version);

    /**
     * @brief
     *   The assignment operator of another Version that is moved from
     *
     * @param[in] version
     *   The version the data is moved from
     *
     * @return
     *   The reference to this Version
     */
    Version & operator=(Version && version);

    /**
     * @brief
     *   Operator for lesser comparison to another Version
     *
     * @param[in] version
     *   The Version to compare to
     *
     * @return
     *   true iff this Version is lesser than the other Version
     */
    bool operator< (const Version & version) const;

    /**
     * @brief
     *   Operator for greater comparison to another Version
     *
     * @param[in] version
     *   The Version to compare to
     *
     * @return
     *   true iff this Version is greater than the other Version
     */
    bool operator> (const Version & version) const;

    /**
     * @brief
     *   Operator for equal comparison to another Version
     *
     * @param[in] version
     *   The Version to compare to
     *
     * @return
     *   true iff this Version is equal to the other Version
     */
    bool operator==(const Version & version) const;

    /**
     * @brief
     *   Operator for unequal comparison to another Version
     *
     * @param[in] version
     *   The Version to compare to
     *
     * @return
     *   true iff this Version is not equal to the other Version
     */
    bool operator!=(const Version & version) const;

    /**
     * @brief
     *   Operator for greater equal comparison to another Version
     *
     * @param[in] version
     *   The Version to compare to
     *
     * @return
     *   true iff this Version is greater or equal than the other Version
     */
    bool operator>=(const Version & version) const;

    /**
     * @brief
     *   Operator for lesser equal comparison to another Version
     *
     * @param[in] version
     *   The Version to compare to
     *
     * @return
     *   true iff this Version is lesser or equal than the other Version
     */
    bool operator<=(const Version & version) const;

    /**
     * @brief
     *   Accessor for the major version.
     *
     * @return
     *   the major version
     */
    unsigned char majorVersion() const;

    /**
     * @brief
     *   Accessor for the minor version.
     *
     * @return
     *   the minor version
     */
    unsigned char minorVersion() const;

    /**
     * @brief
     *   Cast operator for a std::pair cast of type unsigned char.
     */
    operator std::pair<unsigned char, unsigned char>() const;

    /**
     * @brief
     *   Cast operator for a std::pair cast of type unsigned short.
     */
    operator std::pair<unsigned short, unsigned short>() const;

    /**
     * @brief
     *   Cast operator for a std::pair cast of type unsigned int.
     */
    operator std::pair<unsigned int, unsigned int>() const;

    /**
     * @brief
     *   Create a string representing the Version using the scheme "<majorVersion>.<minorVersion>".
     *
     * @return
     *   The version as string, "-.-" iff the string is invalid.
     */
    std::string toString() const;

    /**
     * @brief
     *   Check for validity of this Version, based on the list of all valid OpenGL feautures.
     *
     * @return
     *   true iff the version is valid (i.e., if this version is present in the set of valid versions).
     */
    bool isValid() const;

    /**
     * @brief
     *   Check if the Version was constructed using the default constructor.
     *
     * @return
     *   true iff the major version is 0.
     *
     * This method can be used to check if this Version was constructed using the default constructor or is otherwise malformed.
     */
    bool isNull() const;

    /**
     * @brief
     *   Returns the nearest valid Version to this Version.
     *
     * @return
     *   the nearest valid Version that is either equal or lower than this Version.
     */
    const Version & nearest() const;

    /**
     * @brief
     *   Accessor for the list of all valid Versions (OpenGL features).
     *
     * @return
     *   the set of all valid Versions (= released OpenGL Features).
     */
    static const std::set<Version> & versions();

    /**
    * @brief
    *   Returns the list of all valid, previous Versions (Features) known by the gl.xml.
    *
    * @return
    *   The list of all valid Versions (Features) with a version number below the provided one.
    */
    static const std::set<Version> preceeding(const Version & version);

    /**
    * @brief
    *   Returns the list of all valid, subsequent Versions (Features) known by the gl.xml.
    *
    * @return
    *   The list of all valid Versions (Features) with a version number above the provided one.
    */
    static const std::set<Version> succeeding(const Version & version);

    /**
     * @brief
     *   Return the most current valid Version.
     *
     * @return
     *   the most current Version from the set of all valid versions.
     */
    static const Version & latest();

protected:
    unsigned char m_major; ///< The major version
    unsigned char m_minor; ///< The minor version

protected:
    static const std::set<Version> s_validVersions; ///< The set of all valid versions
    static const Version s_latest; ///< The most current version
};


} // namespace glbinding


/**
 * @brief
 *   The operator to allow Versions to be printed onto a std::ostream.
 */
GLBINDING_API std::ostream & operator<<(std::ostream & stream, const glbinding::Version & version);
