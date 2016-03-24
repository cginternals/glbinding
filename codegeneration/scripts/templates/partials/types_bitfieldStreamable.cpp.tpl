namespace {{api}}
{


std::ostream & operator<<(std::ostream & stream, const {{identifier}} & value)
{
    stream << bitfieldString<{{identifier}}>(value);
    return stream;
}


} // namespace {{api}}