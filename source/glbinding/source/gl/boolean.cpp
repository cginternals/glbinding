
#include <glbinding/gl/boolean.h>


namespace gl
{


const GLboolean GLboolean::GL_FALSE = GLboolean(false);
const GLboolean GLboolean::GL_TRUE = GLboolean(true);

GLboolean::GLboolean()
: GLboolean(false)
{
}

GLboolean::GLboolean(bool on)
: m_value(on)
{
}

GLboolean::GLboolean(const GLboolean & other)
: m_value(other.m_value)
{
}

GLboolean::GLboolean(GLboolean && other)
: m_value(std::move(other.m_value))
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

GLboolean & GLboolean::operator=(GLboolean && other)
{
    m_value = std::move(other.m_value);

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
