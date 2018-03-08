
#pragma once


namespace gles
{


GLESBINDING_CONSTEXPR GLboolean::GLboolean()
: GLboolean(false)
{
}

GLESBINDING_CONSTEXPR GLboolean::GLboolean(bool value)
: m_value(static_cast<underlying_type>(value))
{
}

GLESBINDING_CONSTEXPR GLboolean::GLboolean(char value)
: m_value(value)
{
}

GLESBINDING_CONSTEXPR GLboolean::GLboolean(unsigned char value)
: m_value(static_cast<underlying_type>(value))
{
}

GLESBINDING_CONSTEXPR GLboolean::GLboolean(int value)
: m_value(static_cast<underlying_type>(value))
{
}

GLESBINDING_CONSTEXPR GLboolean::GLboolean(unsigned int value)
: m_value(static_cast<underlying_type>(value))
{
}

GLESBINDING_CONSTEXPR GLboolean::operator bool() const
{
    return m_value != 0;
}

GLESBINDING_CONSTEXPR GLboolean::operator char() const
{
    return m_value;
}

GLESBINDING_CONSTEXPR GLboolean::operator unsigned char() const
{
    return m_value;
}

GLESBINDING_CONSTEXPR GLboolean::operator int() const
{
    return m_value;
}

GLESBINDING_CONSTEXPR GLboolean::operator unsigned int() const
{
    return m_value;
}

GLboolean & GLboolean::operator=(const GLboolean & other)
{
    m_value = other.m_value;

    return *this;
}

GLESBINDING_CONSTEXPR bool GLboolean::operator<(const GLboolean & other) const
{
    return m_value < other.m_value;
}

GLESBINDING_CONSTEXPR bool GLboolean::operator>(const GLboolean & other) const
{
    return m_value > other.m_value;
}

GLESBINDING_CONSTEXPR bool GLboolean::operator<=(const GLboolean & other) const
{
    return m_value <= other.m_value;
}

GLESBINDING_CONSTEXPR bool GLboolean::operator>=(const GLboolean & other) const
{
    return m_value >= other.m_value;
}

GLESBINDING_CONSTEXPR bool GLboolean::operator==(const GLboolean & other) const
{
    return m_value == other.m_value;
}

GLESBINDING_CONSTEXPR bool GLboolean::operator!=(const GLboolean & other) const
{
    return m_value != other.m_value;
}


} // namespace gles
