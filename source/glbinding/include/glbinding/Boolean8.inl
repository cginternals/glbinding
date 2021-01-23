
#pragma once


namespace glbinding
{


GLBINDING_CONSTEXPR Boolean8::Boolean8()
: Boolean8(false)
{
}

GLBINDING_CONSTEXPR Boolean8::Boolean8(bool value)
: m_value(static_cast<underlying_type>(value))
{
}

GLBINDING_CONSTEXPR Boolean8::Boolean8(char value)
: m_value(value)
{
}

GLBINDING_CONSTEXPR Boolean8::Boolean8(unsigned char value)
: m_value(static_cast<underlying_type>(value))
{
}

GLBINDING_CONSTEXPR Boolean8::Boolean8(int value)
: m_value(static_cast<underlying_type>(value))
{
}

GLBINDING_CONSTEXPR Boolean8::Boolean8(unsigned int value)
: m_value(static_cast<underlying_type>(value))
{
}

GLBINDING_CONSTEXPR Boolean8::operator bool() const
{
    return m_value != 0;
}

GLBINDING_CONSTEXPR Boolean8::operator char() const
{
    return m_value;
}

GLBINDING_CONSTEXPR Boolean8::operator unsigned char() const
{
    return m_value;
}

GLBINDING_CONSTEXPR Boolean8::operator int() const
{
    return m_value;
}

GLBINDING_CONSTEXPR Boolean8::operator unsigned int() const
{
    return m_value;
}

GLBINDING_CONSTEXPR bool Boolean8::operator<(const Boolean8 & other) const
{
    return m_value < other.m_value;
}

GLBINDING_CONSTEXPR bool Boolean8::operator>(const Boolean8 & other) const
{
    return m_value > other.m_value;
}

GLBINDING_CONSTEXPR bool Boolean8::operator<=(const Boolean8 & other) const
{
    return m_value <= other.m_value;
}

GLBINDING_CONSTEXPR bool Boolean8::operator>=(const Boolean8 & other) const
{
    return m_value >= other.m_value;
}

GLBINDING_CONSTEXPR bool Boolean8::operator==(const Boolean8 & other) const
{
    return m_value == other.m_value;
}

GLBINDING_CONSTEXPR bool Boolean8::operator!=(const Boolean8 & other) const
{
    return m_value != other.m_value;
}


} // namespace glbinding


namespace std
{


template<>
struct hash<glbinding::Boolean8>
{
    std::size_t operator()(const glbinding::Boolean8 & boolean) const
    {
        return hash<glbinding::Boolean8::underlying_type>()(static_cast<glbinding::Boolean8::underlying_type>(boolean));
    }
};


} // namespace std