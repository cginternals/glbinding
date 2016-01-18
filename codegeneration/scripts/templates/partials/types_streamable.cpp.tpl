
std::ostream & operator<<(std::ostream & stream, const {{api}}::{{identifier}} & value)
{
    stream << glbinding::Meta::getString(value);
    return stream;
}
