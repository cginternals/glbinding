
#include <glbinding/gl/boolean.h>


namespace gl
{


const GLboolean GLboolean::GL_FALSE = GLboolean(0);
const GLboolean GLboolean::GL_TRUE = GLboolean(1);

GLboolean::GLboolean()
: GLboolean(false)
{
}

GLboolean::GLboolean(bool on)
: m_value(on)
{
}

GLboolean::GLboolean(char on)
: m_value(on)
{
}

GLboolean::GLboolean(unsigned char on)
: m_value(on)
{
}

GLboolean::GLboolean(int on)
: m_value(on)
{
}

GLboolean::GLboolean(unsigned int on)
: m_value(on)
{
}

GLboolean::operator bool() const
{
    return m_value;
}

GLboolean::operator char() const
{
    return m_value;
}

GLboolean::operator unsigned char() const
{
    return m_value;
}

GLboolean::operator int() const
{
    return m_value;
}

GLboolean::operator unsigned int() const
{
    return m_value;
}

GLboolean & GLboolean::operator=(const GLboolean & other)
{
    m_value = other.m_value;

    return *this;
}

bool GLboolean::operator<(const GLboolean & other) const
{
    return m_value < other.m_value;
}

bool GLboolean::operator>(const GLboolean & other) const
{
    return m_value > other.m_value;
}

bool GLboolean::operator<=(const GLboolean & other) const
{
    return m_value <= other.m_value;
}

bool GLboolean::operator>=(const GLboolean & other) const
{
    return m_value >= other.m_value;
}

bool GLboolean::operator==(const GLboolean & other) const
{
    return m_value == other.m_value;
}

bool GLboolean::operator!=(const GLboolean & other) const
{
    return m_value != other.m_value;
}


} // namespace gl
