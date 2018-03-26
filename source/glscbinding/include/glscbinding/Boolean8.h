
#pragma once


#include <functional>

#include <glscbinding/glscbinding_api.h>
#include <glscbinding/glscbinding_features.h>


namespace glscbinding
{


class GLSCBINDING_API Boolean8
{
public:
    using underlying_type = unsigned char;

public:
    GLSCBINDING_CONSTEXPR inline Boolean8();
    GLSCBINDING_CONSTEXPR inline Boolean8(bool on);
    GLSCBINDING_CONSTEXPR inline Boolean8(char on);
    GLSCBINDING_CONSTEXPR inline Boolean8(unsigned char on);
    GLSCBINDING_CONSTEXPR inline Boolean8(int on);
    GLSCBINDING_CONSTEXPR inline Boolean8(unsigned int on);

    GLSCBINDING_CONSTEXPR inline explicit operator bool() const;
    GLSCBINDING_CONSTEXPR inline explicit operator char() const;
    GLSCBINDING_CONSTEXPR inline explicit operator unsigned char() const;
    GLSCBINDING_CONSTEXPR inline explicit operator int() const;
    GLSCBINDING_CONSTEXPR inline explicit operator unsigned int() const;

    inline Boolean8 & operator=(const Boolean8 & other);
    GLSCBINDING_CONSTEXPR inline bool operator<(const Boolean8 & other) const;
    GLSCBINDING_CONSTEXPR inline bool operator>(const Boolean8 & other) const;
    GLSCBINDING_CONSTEXPR inline bool operator<=(const Boolean8 & other) const;
    GLSCBINDING_CONSTEXPR inline bool operator>=(const Boolean8 & other) const;

    GLSCBINDING_CONSTEXPR inline bool operator==(const Boolean8 & other) const;
    GLSCBINDING_CONSTEXPR inline bool operator!=(const Boolean8 & other) const;

public:
    underlying_type m_value;
};


} // namespace gl


#include <glscbinding/Boolean8.inl>



namespace std
{


template<>
struct hash<glscbinding::Boolean8>
{
    hash<char>::result_type operator()(const glscbinding::Boolean8 & boolean) const
    {
        return hash<glscbinding::Boolean8::underlying_type>()(static_cast<glscbinding::Boolean8::underlying_type>(boolean));
    }
};


} // namespace std
