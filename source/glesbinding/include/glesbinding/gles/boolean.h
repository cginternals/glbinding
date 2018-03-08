#pragma once

#include <functional>

#include <glesbinding/glesbinding_api.h>
#include <glesbinding/glesbinding_features.h>
#include <glesbinding/nogl.h>


namespace gles
{


class GLboolean
{
public:
    using underlying_type = unsigned char;

public:
    GLESBINDING_CONSTEXPR inline GLboolean();
    GLESBINDING_CONSTEXPR inline GLboolean(bool on);
    GLESBINDING_CONSTEXPR inline GLboolean(char on);
    GLESBINDING_CONSTEXPR inline GLboolean(unsigned char on);
    GLESBINDING_CONSTEXPR inline GLboolean(int on);
    GLESBINDING_CONSTEXPR inline GLboolean(unsigned int on);

    GLESBINDING_CONSTEXPR inline explicit operator bool() const;
    GLESBINDING_CONSTEXPR inline explicit operator char() const;
    GLESBINDING_CONSTEXPR inline explicit operator unsigned char() const;
    GLESBINDING_CONSTEXPR inline explicit operator int() const;
    GLESBINDING_CONSTEXPR inline explicit operator unsigned int() const;

    inline GLboolean & operator=(const GLboolean & other);
    GLESBINDING_CONSTEXPR inline bool operator<(const GLboolean & other) const;
    GLESBINDING_CONSTEXPR inline bool operator>(const GLboolean & other) const;
    GLESBINDING_CONSTEXPR inline bool operator<=(const GLboolean & other) const;
    GLESBINDING_CONSTEXPR inline bool operator>=(const GLboolean & other) const;

    GLESBINDING_CONSTEXPR inline bool operator==(const GLboolean & other) const;
    GLESBINDING_CONSTEXPR inline bool operator!=(const GLboolean & other) const;

public:
    underlying_type m_value;
};


} // namespace gles


#include <glesbinding/gles/boolean.inl>


namespace gles
{

// import booleans to namespace

GLESBINDING_CONSTEXPR static const GLboolean GL_FALSE = GLboolean(0);
GLESBINDING_CONSTEXPR static const GLboolean GL_TRUE = GLboolean(1);


} // namespace gles


namespace std
{


template<>
struct hash<gles::GLboolean>
{
    hash<char>::result_type operator()(const gles::GLboolean & boolean) const
    {
        return hash<gles::GLboolean::underlying_type>()(static_cast<gles::GLboolean::underlying_type>(boolean));
    }
};


} // namespace std
