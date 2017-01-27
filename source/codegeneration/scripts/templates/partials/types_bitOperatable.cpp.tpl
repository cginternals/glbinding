namespace {{api}}
{


{{identifier}} operator|(const {{identifier}} & a, const {{identifier}} & b)
{
    return static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) | static_cast<std::underlying_type<{{identifier}}>::type>(b));
}

{{identifier}} & operator|=({{identifier}} & a, const {{identifier}} & b)
{
    a = static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) | static_cast<std::underlying_type<{{identifier}}>::type>(b));

    return a;
}

{{identifier}} operator&(const {{identifier}} & a, const {{identifier}} & b)
{
    return static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) & static_cast<std::underlying_type<{{identifier}}>::type>(b));
}

{{identifier}} & operator&=({{identifier}} & a, const {{identifier}} & b)
{
    a = static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) & static_cast<std::underlying_type<{{identifier}}>::type>(b));

    return a;
}

{{identifier}} operator^(const {{identifier}} & a, const {{identifier}} & b)
{
    return static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) ^ static_cast<std::underlying_type<{{identifier}}>::type>(b));
}

{{identifier}} & operator^=({{identifier}} & a, const {{identifier}} & b)
{
    a = static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) ^ static_cast<std::underlying_type<{{identifier}}>::type>(b));

    return a;
}


} // namespace {{api}}