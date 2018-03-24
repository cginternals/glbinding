namespace {{api}}
{


std::ostream & operator<<(std::ostream & stream, const {{identifier}} & value)
{
    stream << {{api}}binding::aux::bitfieldString<{{identifier}}>(value);
    return stream;
}


} // namespace {{api}}