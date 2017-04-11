#pragma once

#include <functional>

#include <glbinding/glbinding_api.h>
#include <glbinding/glbinding_features.h>
#include <glbinding/nogl.h>


namespace gl
{


class GLboolean
{
public:
    using underlying_type = unsigned char;

public:
    GLBINDING_CONSTEXPR inline GLboolean();
    GLBINDING_CONSTEXPR inline GLboolean(bool on);
    GLBINDING_CONSTEXPR inline GLboolean(char on);
    GLBINDING_CONSTEXPR inline GLboolean(unsigned char on);
    GLBINDING_CONSTEXPR inline GLboolean(int on);
    GLBINDING_CONSTEXPR inline GLboolean(unsigned int on);

    GLBINDING_CONSTEXPR inline explicit operator bool() const;
    GLBINDING_CONSTEXPR inline explicit operator char() const;
    GLBINDING_CONSTEXPR inline explicit operator unsigned char() const;
    GLBINDING_CONSTEXPR inline explicit operator int() const;
    GLBINDING_CONSTEXPR inline explicit operator unsigned int() const;

    inline GLboolean & operator=(const GLboolean & other);
    GLBINDING_CONSTEXPR inline bool operator<(const GLboolean & other) const;
    GLBINDING_CONSTEXPR inline bool operator>(const GLboolean & other) const;
    GLBINDING_CONSTEXPR inline bool operator<=(const GLboolean & other) const;
    GLBINDING_CONSTEXPR inline bool operator>=(const GLboolean & other) const;

    GLBINDING_CONSTEXPR inline bool operator==(const GLboolean & other) const;
    GLBINDING_CONSTEXPR inline bool operator!=(const GLboolean & other) const;

public:
    underlying_type m_value;
};


} // namespace gl


#include <glbinding/gl/boolean.inl>


namespace gl
{

// import booleans to namespace

GLBINDING_CONSTEXPR static const GLboolean GL_FALSE = GLboolean(0);
GLBINDING_CONSTEXPR static const GLboolean GL_TRUE = GLboolean(1);


} // namespace gl


namespace std
{


template<>
struct hash<gl::GLboolean>
{
    hash<char>::result_type operator()(const gl::GLboolean & boolean) const
    {
        return hash<gl::GLboolean::underlying_type>()(static_cast<gl::GLboolean::underlying_type>(boolean));
    }
};


} // namespace std
