namespace {{api}}
{


GLBINDING_CONSTEXPR inline {{identifier}} operator+(const {{identifier}} & a, const std::underlying_type<{{identifier}}>::type b)
{
    return static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) + b);
}

GLBINDING_CONSTEXPR inline {{identifier}} operator-(const {{identifier}} & a, const std::underlying_type<{{identifier}}>::type b)
{
    return static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) - b);
}


} // namespace {{api}}
