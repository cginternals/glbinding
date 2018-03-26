
#pragma once


#include <functional>

#include <{{binding}}/{{binding}}_api.h>
#include <{{binding}}/{{binding}}_features.h>


namespace {{binding}}
{


class KHRBINDING_API Boolean8
{
public:
    using underlying_type = unsigned char;

public:
    KHRBINDING_CONSTEXPR inline Boolean8();
    KHRBINDING_CONSTEXPR inline Boolean8(bool on);
    KHRBINDING_CONSTEXPR inline Boolean8(char on);
    KHRBINDING_CONSTEXPR inline Boolean8(unsigned char on);
    KHRBINDING_CONSTEXPR inline Boolean8(int on);
    KHRBINDING_CONSTEXPR inline Boolean8(unsigned int on);

    KHRBINDING_CONSTEXPR inline explicit operator bool() const;
    KHRBINDING_CONSTEXPR inline explicit operator char() const;
    KHRBINDING_CONSTEXPR inline explicit operator unsigned char() const;
    KHRBINDING_CONSTEXPR inline explicit operator int() const;
    KHRBINDING_CONSTEXPR inline explicit operator unsigned int() const;

    inline Boolean8 & operator=(const Boolean8 & other);
    KHRBINDING_CONSTEXPR inline bool operator<(const Boolean8 & other) const;
    KHRBINDING_CONSTEXPR inline bool operator>(const Boolean8 & other) const;
    KHRBINDING_CONSTEXPR inline bool operator<=(const Boolean8 & other) const;
    KHRBINDING_CONSTEXPR inline bool operator>=(const Boolean8 & other) const;

    KHRBINDING_CONSTEXPR inline bool operator==(const Boolean8 & other) const;
    KHRBINDING_CONSTEXPR inline bool operator!=(const Boolean8 & other) const;

public:
    underlying_type m_value;
};


} // namespace gl


#include <{{binding}}/Boolean8.inl>



namespace std
{


template<>
struct hash<{{binding}}::Boolean8>
{
    hash<char>::result_type operator()(const {{binding}}::Boolean8 & boolean) const
    {
        return hash<{{binding}}::Boolean8::underlying_type>()(static_cast<{{binding}}::Boolean8::underlying_type>(boolean));
    }
};


} // namespace std
