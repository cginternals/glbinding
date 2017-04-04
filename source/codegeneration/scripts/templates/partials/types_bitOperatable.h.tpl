
namespace {{api}}
{


GLBINDING_API GLBINDING_CONSTEXPR {{identifier}} operator|(const {{identifier}} & a, const {{identifier}} & b)
{
    return static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) | static_cast<std::underlying_type<{{identifier}}>::type>(b));
}

GLBINDING_API inline {{identifier}} & operator|=({{identifier}} & a, const {{identifier}} & b)
{
    a = static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) | static_cast<std::underlying_type<{{identifier}}>::type>(b));

    return a;
}

GLBINDING_API GLBINDING_CONSTEXPR {{identifier}} operator&(const {{identifier}} & a, const {{identifier}} & b)
{
    return static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) & static_cast<std::underlying_type<{{identifier}}>::type>(b));
}

GLBINDING_API inline {{identifier}} & operator&=({{identifier}} & a, const {{identifier}} & b)
{
    a = static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) & static_cast<std::underlying_type<{{identifier}}>::type>(b));

    return a;
}

GLBINDING_API GLBINDING_CONSTEXPR {{identifier}} operator^(const {{identifier}} & a, const {{identifier}} & b)
{
    return static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) ^ static_cast<std::underlying_type<{{identifier}}>::type>(b));
}

GLBINDING_API inline {{identifier}} & operator^=({{identifier}} & a, const {{identifier}} & b)
{
    a = static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) ^ static_cast<std::underlying_type<{{identifier}}>::type>(b));

    return a;
}


} // namespace {{api}}