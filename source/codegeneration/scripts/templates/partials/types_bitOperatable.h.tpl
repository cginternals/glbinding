
namespace {{api}}
{


GLBINDING_CONSTEXPR inline {{identifier}} operator|(const {{identifier}} & a, const {{identifier}} & b)
{
    return static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) | static_cast<std::underlying_type<{{identifier}}>::type>(b));
}

inline {{identifier}} & operator|=({{identifier}} & a, const {{identifier}} & b)
{
    a = static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) | static_cast<std::underlying_type<{{identifier}}>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline {{identifier}} operator&(const {{identifier}} & a, const {{identifier}} & b)
{
    return static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) & static_cast<std::underlying_type<{{identifier}}>::type>(b));
}

inline {{identifier}} & operator&=({{identifier}} & a, const {{identifier}} & b)
{
    a = static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) & static_cast<std::underlying_type<{{identifier}}>::type>(b));

    return a;
}

GLBINDING_CONSTEXPR inline {{identifier}} operator^(const {{identifier}} & a, const {{identifier}} & b)
{
    return static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) ^ static_cast<std::underlying_type<{{identifier}}>::type>(b));
}

inline {{identifier}} & operator^=({{identifier}} & a, const {{identifier}} & b)
{
    a = static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) ^ static_cast<std::underlying_type<{{identifier}}>::type>(b));

    return a;
}


} // namespace {{api}}