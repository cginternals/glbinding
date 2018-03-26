
#pragma once


namespace glscbinding
{


GLSCBINDING_CONSTEXPR Boolean8::Boolean8()
: Boolean8(false)
{
}

GLSCBINDING_CONSTEXPR Boolean8::Boolean8(bool value)
: m_value(static_cast<underlying_type>(value))
{
}

GLSCBINDING_CONSTEXPR Boolean8::Boolean8(char value)
: m_value(value)
{
}

GLSCBINDING_CONSTEXPR Boolean8::Boolean8(unsigned char value)
: m_value(static_cast<underlying_type>(value))
{
}

GLSCBINDING_CONSTEXPR Boolean8::Boolean8(int value)
: m_value(static_cast<underlying_type>(value))
{
}

GLSCBINDING_CONSTEXPR Boolean8::Boolean8(unsigned int value)
: m_value(static_cast<underlying_type>(value))
{
}

GLSCBINDING_CONSTEXPR Boolean8::operator bool() const
{
    return m_value != 0;
}

GLSCBINDING_CONSTEXPR Boolean8::operator char() const
{
    return m_value;
}

GLSCBINDING_CONSTEXPR Boolean8::operator unsigned char() const
{
    return m_value;
}

GLSCBINDING_CONSTEXPR Boolean8::operator int() const
{
    return m_value;
}

GLSCBINDING_CONSTEXPR Boolean8::operator unsigned int() const
{
    return m_value;
}

Boolean8 & Boolean8::operator=(const Boolean8 & other)
{
    m_value = other.m_value;

    return *this;
}

GLSCBINDING_CONSTEXPR bool Boolean8::operator<(const Boolean8 & other) const
{
    return m_value < other.m_value;
}

GLSCBINDING_CONSTEXPR bool Boolean8::operator>(const Boolean8 & other) const
{
    return m_value > other.m_value;
}

GLSCBINDING_CONSTEXPR bool Boolean8::operator<=(const Boolean8 & other) const
{
    return m_value <= other.m_value;
}

GLSCBINDING_CONSTEXPR bool Boolean8::operator>=(const Boolean8 & other) const
{
    return m_value >= other.m_value;
}

GLSCBINDING_CONSTEXPR bool Boolean8::operator==(const Boolean8 & other) const
{
    return m_value == other.m_value;
}

GLSCBINDING_CONSTEXPR bool Boolean8::operator!=(const Boolean8 & other) const
{
    return m_value != other.m_value;
}


} // namespace glscbinding
