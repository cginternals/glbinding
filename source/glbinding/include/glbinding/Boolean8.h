
#pragma once


#include <functional>

#include <glbinding/glbinding_api.h>
#include <glbinding/glbinding_features.h>


namespace glbinding
{


/**
*  @brief
*    Boolean type based on an 8-bit integer
*/
class GLBINDING_API Boolean8
{
public:
    using underlying_type = unsigned char; ///< Type used for storing the value

public:
    /**
    *  @brief
    *    Constructor
    *
    *  @remark
    *    The value is set to `false`
    */
    GLBINDING_CONSTEXPR inline Boolean8() GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] on
    *    Initial value
    */
    GLBINDING_CONSTEXPR inline Boolean8(bool on) GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] on
    *    Initial value
    */
    GLBINDING_CONSTEXPR inline Boolean8(char on) GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] on
    *    Initial value
    */
    GLBINDING_CONSTEXPR inline Boolean8(unsigned char on) GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] on
    *    Initial value
    */
    GLBINDING_CONSTEXPR inline Boolean8(int on) GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] on
    *    Initial value
    */
    GLBINDING_CONSTEXPR inline Boolean8(unsigned int on) GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Type cast operator
    *
    *  @return
    *    %Value as `bool`
    */
    GLBINDING_CONSTEXPR inline explicit operator bool() const GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Type cast operator
    *
    *  @return
    *    %Value as `char`
    */
    GLBINDING_CONSTEXPR inline explicit operator char() const GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Type cast operator
    *
    *  @return
    *    %Value as `unsigned char`
    */
    GLBINDING_CONSTEXPR inline explicit operator unsigned char() const GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Type cast operator
    *
    *  @return
    *    %Value as `int`
    */
    GLBINDING_CONSTEXPR inline explicit operator int() const GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Type cast operator
    *
    *  @return
    *    %Value as `unsigned int`
    */
    GLBINDING_CONSTEXPR inline explicit operator unsigned int() const GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Comparison operator
    *
    *  @param[in] other
    *    Other value
    *
    *  @return
    *    Result of comparing internal values
    *
    *  @remark
    *    Comparison uses numeric comparison of #underlying_type
    */
    GLBINDING_CONSTEXPR inline bool operator<(const Boolean8 & other) const GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Comparison operator
    *
    *  @param[in] other
    *    Other value
    *
    *  @return
    *    Result of comparing internal values
    *
    *  @remark
    *    Comparison uses numeric comparison of #underlying_type
    */
    GLBINDING_CONSTEXPR inline bool operator>(const Boolean8 & other) const GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Comparison operator
    *
    *  @param[in] other
    *    Other value
    *
    *  @return
    *    Result of comparing internal values
    *
    *  @remark
    *    Comparison uses numeric comparison of #underlying_type
    */
    GLBINDING_CONSTEXPR inline bool operator<=(const Boolean8 & other) const GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Comparison operator
    *
    *  @param[in] other
    *    Other value
    *
    *  @return
    *    Result of comparing internal values
    *
    *  @remark
    *    Comparison uses numeric comparison of #underlying_type
    */
    GLBINDING_CONSTEXPR inline bool operator>=(const Boolean8 & other) const GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Comparison operator
    *
    *  @param[in] other
    *    Other value
    *
    *  @return
    *    Result of comparing internal values
    *
    *  @remark
    *    Comparison uses numeric comparison of #underlying_type
    */
    GLBINDING_CONSTEXPR inline bool operator==(const Boolean8 & other) const GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Comparison operator
    *
    *  @param[in] other
    *    Other value
    *
    *  @return
    *    Result of comparing internal values
    *
    *  @remark
    *    Comparison uses numeric comparison of #underlying_type
    */
    GLBINDING_CONSTEXPR inline bool operator!=(const Boolean8 & other) const GLBINDING_NOEXCEPT;

public:
    underlying_type m_value; ///< %Value
};


} // namespace gl


#include <glbinding/Boolean8.inl>