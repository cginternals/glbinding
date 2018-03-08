namespace {{api}}
{


std::ostream & operator<<(std::ostream & stream, const {{identifier}} & value)
{
    stream << {{api}}binding::Meta::getString(value);
    return stream;
}


} // namespace {{api}}