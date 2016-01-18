
{{api}}::{{identifier}} operator+(const {{api}}::{{identifier}} & a, std::underlying_type<{{api}}::{{identifier}}>::type b)
{
    return static_cast<{{api}}::{{identifier}}>(static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(a) + b);
}

{{api}}::{{identifier}} operator-(const {{api}}::{{identifier}} & a, std::underlying_type<{{api}}::{{identifier}}>::type b)
{
    return static_cast<{{api}}::{{identifier}}>(static_cast<std::underlying_type<{{api}}::{{identifier}}>::type>(a) - b);
}
