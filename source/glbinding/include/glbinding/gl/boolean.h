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

    operator bool() const;
    operator char() const;
    operator unsigned char() const;
    operator int() const;
    operator unsigned int() const;

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

static const GLboolean GL_FALSE = GLboolean(false);
static const GLboolean GL_TRUE = GLboolean(true);


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
