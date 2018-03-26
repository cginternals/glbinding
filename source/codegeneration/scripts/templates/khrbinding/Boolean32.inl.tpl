
#pragma once


namespace {{binding}}
{


{{ucbinding}}_CONSTEXPR Boolean32::Boolean32()
: Boolean32(false)
{
}

{{ucbinding}}_CONSTEXPR Boolean32::Boolean32(bool value)
: m_value(static_cast<underlying_type>(value))
{
}

{{ucbinding}}_CONSTEXPR Boolean32::Boolean32(char value)
: m_value(value)
{
}

{{ucbinding}}_CONSTEXPR Boolean32::Boolean32(unsigned char value)
: m_value(static_cast<underlying_type>(value))
{
}

{{ucbinding}}_CONSTEXPR Boolean32::Boolean32(int value)
: m_value(static_cast<underlying_type>(value))
{
}

{{ucbinding}}_CONSTEXPR Boolean32::Boolean32(unsigned int value)
: m_value(static_cast<underlying_type>(value))
{
}

{{ucbinding}}_CONSTEXPR Boolean32::operator bool() const
{
    return m_value != 0;
}

{{ucbinding}}_CONSTEXPR Boolean32::operator char() const
{
    return m_value;
}

{{ucbinding}}_CONSTEXPR Boolean32::operator unsigned char() const
{
    return m_value;
}

{{ucbinding}}_CONSTEXPR Boolean32::operator int() const
{
    return m_value;
}

{{ucbinding}}_CONSTEXPR Boolean32::operator unsigned int() const
{
    return m_value;
}

Boolean32 & Boolean32::operator=(const Boolean32 & other)
{
    m_value = other.m_value;

    return *this;
}

{{ucbinding}}_CONSTEXPR bool Boolean32::operator<(const Boolean32 & other) const
{
    return m_value < other.m_value;
}

{{ucbinding}}_CONSTEXPR bool Boolean32::operator>(const Boolean32 & other) const
{
    return m_value > other.m_value;
}

{{ucbinding}}_CONSTEXPR bool Boolean32::operator<=(const Boolean32 & other) const
{
    return m_value <= other.m_value;
}

{{ucbinding}}_CONSTEXPR bool Boolean32::operator>=(const Boolean32 & other) const
{
    return m_value >= other.m_value;
}

{{ucbinding}}_CONSTEXPR bool Boolean32::operator==(const Boolean32 & other) const
{
    return m_value == other.m_value;
}

{{ucbinding}}_CONSTEXPR bool Boolean32::operator!=(const Boolean32 & other) const
{
    return m_value != other.m_value;
}


} // namespace {{binding}}
