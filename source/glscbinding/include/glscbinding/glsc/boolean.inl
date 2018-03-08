
#pragma once


namespace glsc
{


GLSCBINDING_CONSTEXPR GLboolean::GLboolean()
: GLboolean(false)
{
}

GLSCBINDING_CONSTEXPR GLboolean::GLboolean(bool value)
: m_value(static_cast<underlying_type>(value))
{
}

GLSCBINDING_CONSTEXPR GLboolean::GLboolean(char value)
: m_value(value)
{
}

GLSCBINDING_CONSTEXPR GLboolean::GLboolean(unsigned char value)
: m_value(static_cast<underlying_type>(value))
{
}

GLSCBINDING_CONSTEXPR GLboolean::GLboolean(int value)
: m_value(static_cast<underlying_type>(value))
{
}

GLSCBINDING_CONSTEXPR GLboolean::GLboolean(unsigned int value)
: m_value(static_cast<underlying_type>(value))
{
}

GLSCBINDING_CONSTEXPR GLboolean::operator bool() const
{
    return m_value != 0;
}

GLSCBINDING_CONSTEXPR GLboolean::operator char() const
{
    return m_value;
}

GLSCBINDING_CONSTEXPR GLboolean::operator unsigned char() const
{
    return m_value;
}

GLSCBINDING_CONSTEXPR GLboolean::operator int() const
{
    return m_value;
}

GLSCBINDING_CONSTEXPR GLboolean::operator unsigned int() const
{
    return m_value;
}

GLboolean & GLboolean::operator=(const GLboolean & other)
{
    m_value = other.m_value;

    return *this;
}

GLSCBINDING_CONSTEXPR bool GLboolean::operator<(const GLboolean & other) const
{
    return m_value < other.m_value;
}

GLSCBINDING_CONSTEXPR bool GLboolean::operator>(const GLboolean & other) const
{
    return m_value > other.m_value;
}

GLSCBINDING_CONSTEXPR bool GLboolean::operator<=(const GLboolean & other) const
{
    return m_value <= other.m_value;
}

GLSCBINDING_CONSTEXPR bool GLboolean::operator>=(const GLboolean & other) const
{
    return m_value >= other.m_value;
}

GLSCBINDING_CONSTEXPR bool GLboolean::operator==(const GLboolean & other) const
{
    return m_value == other.m_value;
}

GLSCBINDING_CONSTEXPR bool GLboolean::operator!=(const GLboolean & other) const
{
    return m_value != other.m_value;
}


} // namespace glsc
