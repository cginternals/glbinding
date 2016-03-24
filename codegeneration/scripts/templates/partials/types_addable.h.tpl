namespace {{api}}
{


GLBINDING_API {{identifier}} operator+(const {{identifier}} & a, std::underlying_type<{{identifier}}>::type b);
GLBINDING_API {{identifier}} operator-(const {{identifier}} & a, std::underlying_type<{{identifier}}>::type b);


} // namespace {{api}}
