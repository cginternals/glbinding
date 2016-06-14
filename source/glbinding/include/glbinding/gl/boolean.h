#pragma once

#include <functional>

#include <glbinding/glbinding_api.h>
#include <glbinding/nogl.h>


namespace gl
{


class GLBINDING_API GLboolean
{
public:
    static const GLboolean GL_FALSE;
    static const GLboolean GL_TRUE;

public:
    GLboolean();
    GLboolean(bool on);

    explicit operator bool() const;
    explicit operator char() const;
    explicit operator unsigned char() const;
    explicit operator int() const;
    explicit operator unsigned int() const;

    GLboolean & operator=(const GLboolean & other);
    bool operator<(const GLboolean & other) const;
    bool operator>(const GLboolean & other) const;
    bool operator<=(const GLboolean & other) const;
    bool operator>=(const GLboolean & other) const;

    bool operator==(const GLboolean & other) const;
    bool operator!=(const GLboolean & other) const;

protected:
    bool m_value;
};


// import booleans to namespace

static const GLboolean GL_FALSE = GLboolean::GL_FALSE;
static const GLboolean GL_TRUE = GLboolean::GL_TRUE;


} // namespace gl


namespace std
{


template<>
struct hash<gl::GLboolean>
{
    hash<char>::result_type operator()(const gl::GLboolean & boolean) const
    {
        return hash<char>()(static_cast<char>(boolean));
    }
};


} // namespace std
