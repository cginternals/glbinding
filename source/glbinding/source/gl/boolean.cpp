
#include <glbinding/gl/boolean.h>


namespace gl
{


GLboolean::GLboolean()
: GLboolean(false)
{
}

GLboolean::GLboolean(bool value)
: m_value(static_cast<underlying_type>(value))
{
}

GLboolean::GLboolean(char value)
: m_value(value)
{
}

GLboolean::GLboolean(unsigned char value)
: m_value(static_cast<underlying_type>(value))
{
}

GLboolean::GLboolean(int value)
: m_value(static_cast<underlying_type>(value))
{
}

GLboolean::GLboolean(unsigned int value)
: m_value(static_cast<underlying_type>(value))
{
}

GLboolean::operator bool() const
{
    return m_value != 0;
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
