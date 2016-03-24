namespace {{api}}
{

{{api}}::{{identifier}} operator|(const {{api}}::{{identifier}} & a, const {{api}}::{{identifier}} & b)
{
    return static_cast<{{api}}::{{identifier}}>(static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(a) | static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(b));
}

{{api}}::{{identifier}} & operator|=({{api}}::{{identifier}} & a, const {{api}}::{{identifier}} & b)
{
    a = static_cast<{{api}}::{{identifier}}>(static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(a) | static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(b));

    return a;
}

{{api}}::{{identifier}} operator&(const {{api}}::{{identifier}} & a, const {{api}}::{{identifier}} & b)
{
    return static_cast<{{api}}::{{identifier}}>(static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(a) & static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(b));
}

{{api}}::{{identifier}} & operator&=({{api}}::{{identifier}} & a, const {{api}}::{{identifier}} & b)
{
    a = static_cast<{{api}}::{{identifier}}>(static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(a) & static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(b));

    return a;
}

{{api}}::{{identifier}} operator^(const {{api}}::{{identifier}} & a, const {{api}}::{{identifier}} & b)
{
    return static_cast<{{api}}::{{identifier}}>(static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(a) ^ static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(b));
}

{{api}}::{{identifier}} & operator^=({{api}}::{{identifier}} & a, const {{api}}::{{identifier}} & b)
{
    a = static_cast<{{api}}::{{identifier}}>(static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(a) ^ static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(b));

    return a;
}

} // namespace {{api}}