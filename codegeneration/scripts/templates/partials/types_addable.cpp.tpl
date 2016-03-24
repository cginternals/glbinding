namespace {{api}}
{


{{identifier}} operator+(const {{identifier}} & a, std::underlying_type<{{identifier}}>::type b)
{
    return static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) + b);
}

{{identifier}} operator-(const {{identifier}} & a, std::underlying_type<{{identifier}}>::type b)
{
    return static_cast<{{identifier}}>(static_cast<std::underlying_type<{{identifier}}>::type>(a) - b);
}


} // namespace {{api}}