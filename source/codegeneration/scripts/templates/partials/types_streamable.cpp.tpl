namespace {{api}}
{


std::ostream & operator<<(std::ostream & stream, const {{identifier}} & value)
{
    stream << glbinding::Meta::getString(value);
    return stream;
}


} // namespace {{api}}