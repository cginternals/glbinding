namespace {{api}}
{

std::ostream & operator<<(std::ostream & stream, const {{api}}::{{identifier}} & value)
{
    stream << bitfieldString<{{api}}::{{identifier}}>(value);
    return stream;
}

} // namespace {{api}}