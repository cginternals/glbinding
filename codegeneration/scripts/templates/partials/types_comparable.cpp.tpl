namespace gl
{


bool operator==(const {{api}}::{{identifier}} & a, std::underlying_type<{{api}}::{{identifier}}>::type b)
{
    return static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(a) == b;
}

bool operator!=(const {{api}}::{{identifier}} & a, std::underlying_type<{{api}}::{{identifier}}>::type b)
{
    return static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(a) != b;
}

bool operator<(const {{api}}::{{identifier}} & a, std::underlying_type<{{api}}::{{identifier}}>::type b)
{
    return static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(a) < b;
}

bool operator<=(const {{api}}::{{identifier}} & a, std::underlying_type<{{api}}::{{identifier}}>::type b)
{
    return static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(a) <= b;
}

bool operator>(const {{api}}::{{identifier}} & a, std::underlying_type<{{api}}::{{identifier}}>::type b)
{
    return static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(a) > b;
}

bool operator>=(const {{api}}::{{identifier}} & a, std::underlying_type<{{api}}::{{identifier}}>::type b)
{
    return static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(a) >= b;
}

bool operator==(std::underlying_type<{{api}}::{{identifier}}>::type a, const {{api}}::{{identifier}} & b)
{
    return a == static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(b);
}

bool operator!=(std::underlying_type<{{api}}::{{identifier}}>::type a, const {{api}}::{{identifier}} & b)
{
    return a != static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(b);
}

bool operator<(std::underlying_type<{{api}}::{{identifier}}>::type a, const {{api}}::{{identifier}} & b)
{
    return a < static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(b);
}

bool operator<=(std::underlying_type<{{api}}::{{identifier}}>::type a, const {{api}}::{{identifier}} & b)
{
    return a <= static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(b);
}

bool operator>(std::underlying_type<{{api}}::{{identifier}}>::type a, const {{api}}::{{identifier}} & b)
{
    return a > static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(b);
}

bool operator>=(std::underlying_type<{{api}}::{{identifier}}>::type a, const {{api}}::{{identifier}} & b)
{
    return a >= static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(b);
}


} // namespace gl