
namespace {{api}}
{


bool operator==(const {{identifier}} & a, std::underlying_type<{{identifier}}>::type b)
{
    return static_cast<std::underlying_type<{{identifier}}>::type>(a) == b;
}

bool operator!=(const {{identifier}} & a, std::underlying_type<{{identifier}}>::type b)
{
    return static_cast<std::underlying_type<{{identifier}}>::type>(a) != b;
}

bool operator<(const {{identifier}} & a, std::underlying_type<{{identifier}}>::type b)
{
    return static_cast<std::underlying_type<{{identifier}}>::type>(a) < b;
}

bool operator<=(const {{identifier}} & a, std::underlying_type<{{identifier}}>::type b)
{
    return static_cast<std::underlying_type<{{identifier}}>::type>(a) <= b;
}

bool operator>(const {{identifier}} & a, std::underlying_type<{{identifier}}>::type b)
{
    return static_cast<std::underlying_type<{{identifier}}>::type>(a) > b;
}

bool operator>=(const {{identifier}} & a, std::underlying_type<{{identifier}}>::type b)
{
    return static_cast<std::underlying_type<{{identifier}}>::type>(a) >= b;
}

bool operator==(std::underlying_type<{{identifier}}>::type a, const {{identifier}} & b)
{
    return a == static_cast<std::underlying_type<{{identifier}}>::type>(b);
}

bool operator!=(std::underlying_type<{{identifier}}>::type a, const {{identifier}} & b)
{
    return a != static_cast<std::underlying_type<{{identifier}}>::type>(b);
}

bool operator<(std::underlying_type<{{identifier}}>::type a, const {{identifier}} & b)
{
    return a < static_cast<std::underlying_type<{{identifier}}>::type>(b);
}

bool operator<=(std::underlying_type<{{identifier}}>::type a, const {{identifier}} & b)
{
    return a <= static_cast<std::underlying_type<{{identifier}}>::type>(b);
}

bool operator>(std::underlying_type<{{identifier}}>::type a, const {{identifier}} & b)
{
    return a > static_cast<std::underlying_type<{{identifier}}>::type>(b);
}

bool operator>=(std::underlying_type<{{identifier}}>::type a, const {{identifier}} & b)
{
    return a >= static_cast<std::underlying_type<{{identifier}}>::type>(b);
}


} // namespace {{api}}