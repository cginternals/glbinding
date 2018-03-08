#pragma once

#include <functional>

#include <glscbinding/glscbinding_api.h>
#include <glscbinding/glscbinding_features.h>
#include <glscbinding/nogl.h>


namespace glsc
{


class GLboolean
{
public:
    using underlying_type = unsigned char;

public:
    GLSCBINDING_CONSTEXPR inline GLboolean();
    GLSCBINDING_CONSTEXPR inline GLboolean(bool on);
    GLSCBINDING_CONSTEXPR inline GLboolean(char on);
    GLSCBINDING_CONSTEXPR inline GLboolean(unsigned char on);
    GLSCBINDING_CONSTEXPR inline GLboolean(int on);
    GLSCBINDING_CONSTEXPR inline GLboolean(unsigned int on);

    GLSCBINDING_CONSTEXPR inline explicit operator bool() const;
    GLSCBINDING_CONSTEXPR inline explicit operator char() const;
    GLSCBINDING_CONSTEXPR inline explicit operator unsigned char() const;
    GLSCBINDING_CONSTEXPR inline explicit operator int() const;
    GLSCBINDING_CONSTEXPR inline explicit operator unsigned int() const;

    inline GLboolean & operator=(const GLboolean & other);
    GLSCBINDING_CONSTEXPR inline bool operator<(const GLboolean & other) const;
    GLSCBINDING_CONSTEXPR inline bool operator>(const GLboolean & other) const;
    GLSCBINDING_CONSTEXPR inline bool operator<=(const GLboolean & other) const;
    GLSCBINDING_CONSTEXPR inline bool operator>=(const GLboolean & other) const;

    GLSCBINDING_CONSTEXPR inline bool operator==(const GLboolean & other) const;
    GLSCBINDING_CONSTEXPR inline bool operator!=(const GLboolean & other) const;

public:
    underlying_type m_value;
};


} // namespace glsc


#include <glscbinding/glsc/boolean.inl>


namespace glsc
{

// import booleans to namespace

GLSCBINDING_CONSTEXPR static const GLboolean GL_FALSE = GLboolean(0);
GLSCBINDING_CONSTEXPR static const GLboolean GL_TRUE = GLboolean(1);


} // namespace glsc


namespace std
{


template<>
struct hash<glsc::GLboolean>
{
    hash<char>::result_type operator()(const glsc::GLboolean & boolean) const
    {
        return hash<glsc::GLboolean::underlying_type>()(static_cast<glsc::GLboolean::underlying_type>(boolean));
    }
};


} // namespace std
