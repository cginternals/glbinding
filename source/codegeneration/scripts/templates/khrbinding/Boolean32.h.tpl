
#pragma once


#include <utility>

#include <{{binding}}/{{binding}}_api.h>
#include <{{binding}}/{{binding}}_features.h>


namespace {{binding}}
{


class {{ucbinding}}_API Boolean32
{
public:
    using underlying_type = unsigned int;

public:
    {{ucbinding}}_CONSTEXPR inline Boolean32();
    {{ucbinding}}_CONSTEXPR inline Boolean32(bool on);
    {{ucbinding}}_CONSTEXPR inline Boolean32(char on);
    {{ucbinding}}_CONSTEXPR inline Boolean32(unsigned char on);
    {{ucbinding}}_CONSTEXPR inline Boolean32(int on);
    {{ucbinding}}_CONSTEXPR inline Boolean32(unsigned int on);

    {{ucbinding}}_CONSTEXPR inline explicit operator bool() const;
    {{ucbinding}}_CONSTEXPR inline explicit operator char() const;
    {{ucbinding}}_CONSTEXPR inline explicit operator unsigned char() const;
    {{ucbinding}}_CONSTEXPR inline explicit operator int() const;
    {{ucbinding}}_CONSTEXPR inline explicit operator unsigned int() const;

    inline Boolean32 & operator=(const Boolean32 & other);
    {{ucbinding}}_CONSTEXPR inline bool operator<(const Boolean32 & other) const;
    {{ucbinding}}_CONSTEXPR inline bool operator>(const Boolean32 & other) const;
    {{ucbinding}}_CONSTEXPR inline bool operator<=(const Boolean32 & other) const;
    {{ucbinding}}_CONSTEXPR inline bool operator>=(const Boolean32 & other) const;

    {{ucbinding}}_CONSTEXPR inline bool operator==(const Boolean32 & other) const;
    {{ucbinding}}_CONSTEXPR inline bool operator!=(const Boolean32 & other) const;

public:
    underlying_type m_value;
};


} // namespace gl


#include <{{binding}}/Boolean32.inl>


namespace std
{


template<>
struct hash<{{binding}}::Boolean32>
{
    hash<int>::result_type operator()(const {{binding}}::Boolean32 & boolean) const
    {
        return hash<{{binding}}::Boolean32::underlying_type>()(static_cast<{{binding}}::Boolean32::underlying_type>(boolean));
    }
};


} // namespace std
