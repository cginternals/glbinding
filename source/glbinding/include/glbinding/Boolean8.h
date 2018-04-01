
#pragma once


#include <functional>

#include <glbinding/glbinding_api.h>
#include <glbinding/glbinding_features.h>


namespace glbinding
{


class GLBINDING_API Boolean8
{
public:
    using underlying_type = unsigned char;

public:
    GLBINDING_CONSTEXPR inline Boolean8();
    GLBINDING_CONSTEXPR inline Boolean8(bool on);
    GLBINDING_CONSTEXPR inline Boolean8(char on);
    GLBINDING_CONSTEXPR inline Boolean8(unsigned char on);
    GLBINDING_CONSTEXPR inline Boolean8(int on);
    GLBINDING_CONSTEXPR inline Boolean8(unsigned int on);

    GLBINDING_CONSTEXPR inline explicit operator bool() const;
    GLBINDING_CONSTEXPR inline explicit operator char() const;
    GLBINDING_CONSTEXPR inline explicit operator unsigned char() const;
    GLBINDING_CONSTEXPR inline explicit operator int() const;
    GLBINDING_CONSTEXPR inline explicit operator unsigned int() const;

    inline Boolean8 & operator=(const Boolean8 & other);
    GLBINDING_CONSTEXPR inline bool operator<(const Boolean8 & other) const;
    GLBINDING_CONSTEXPR inline bool operator>(const Boolean8 & other) const;
    GLBINDING_CONSTEXPR inline bool operator<=(const Boolean8 & other) const;
    GLBINDING_CONSTEXPR inline bool operator>=(const Boolean8 & other) const;

    GLBINDING_CONSTEXPR inline bool operator==(const Boolean8 & other) const;
    GLBINDING_CONSTEXPR inline bool operator!=(const Boolean8 & other) const;

public:
    underlying_type m_value;
};


} // namespace gl


#include <glbinding/Boolean8.inl>
