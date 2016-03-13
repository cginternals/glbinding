
#pragma once

#include <iosfwd>
#include <string>
#include <set>
#include <utility>

#include <glbinding/glbinding_api.h>


namespace glbinding
{

/**
 * @brief The Version class represents a OpenGL version, consisting of majow version and minor version, excluding the profile information.
 *
 * This instance can represent any officially released OpenGL version and provides methods for validity checking and comparison.
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
     * @brief Default constructor, resulting in an invalid Version object.
     */
    Version();

    /**
     * @brief Constructor for a Version object with the given major and minor version.
     * @param[in] majorVersion the major version
     * @param[in] minorVersion the minor version
     */
    Version(unsigned char majorVersion, unsigned char minorVersion);

    /**
     * @brief Operator for lesser comparison to another Version
     * @param version the Version to compare to
     * @return true iff this Version is lesser than the other Version
     */
    bool operator< (const Version & version) const;

    /**
     * @brief Operator for greater comparison to another Version
     * @param version the Version to compare to
     * @return true iff this Version is greater than the other Version
     */
    bool operator> (const Version & version) const;

    /**
     * @brief Operator for equal comparison to another Version
     * @param version the Version to compare to
     * @return true iff this Version is equal to the other Version
     */
    bool operator==(const Version & version) const;

    /**
     * @brief Operator for unequal comparison to another Version
     * @param version the Version to compare to
     * @return true iff this Version is not equal to the other Version
     */
    bool operator!=(const Version & version) const;

    /**
     * @brief Operator for greater equal comparison to another Version
     * @param version the Version to compare to
     * @return true iff this Version is greater or equal than the other Version
     */
    bool operator>=(const Version & version) const;

    /**
     * @brief Operator for lesser equal comparison to another Version
     * @param version the Version to compare to
     * @return true iff this Version is lesser or equal than the other Version
     */
    bool operator<=(const Version & version) const;

    /**
     * @brief Operator for a std::pair cast of type unsigned char.
     */
    operator std::pair<unsigned char, unsigned char>() const;

    /**
     * @brief Operator for a std::pair cast of type unsigned short.
     */
    operator std::pair<unsigned short, unsigned short>() const;

    /**
     * @brief Operator for a std::pair cast of type unsigned int.
     */
    operator std::pair<unsigned int, unsigned int>() const;

    /**
     * @brief Create a string representing the Version using the scheme "<majorVersion>.<minorVersion>".
     * @return The version as string, "-.-" iff the string is invalid.
     */
    std::string toString() const;

    /**
     * @return  true iff the version is valid (i.e., if this version is present in the set of valid versions).
     */
    bool isValid() const;

    /**
     * @return true iff the major version is 0.
     *
     * This method can be used to check if this Version was constructed using the default constructor or is otherwise malformed.
     */
    bool isNull() const;

    /**
     * @brief Returns the nearest valid Version that is either equal or lower than this Version.
     * @return the nearest valid Version
     */
    const Version & nearest() const;

    /**
     * @return the set of all valid Versions.
     */
    static const std::set<Version> & versions();

    /**
     * @return the most current Version from the set of all valid versions.
     */
    static const Version & latest();

public:
    unsigned char m_major; /// The major version
    unsigned char m_minor; /// The minor version

protected:
    static const std::set<Version> s_validVersions; /// The set of all valid versions
    static const Version s_latest; /// The most current version
};


} // namespace glbinding

/**
 * The operator to allow Versions to be printed onto a std::ostream.
 */
GLBINDING_API std::ostream & operator<<(std::ostream & stream, const glbinding::Version & version);
