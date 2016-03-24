namespace {{api}}
{


GLBINDING_API {{api}}::{{identifier}} operator+(const {{api}}::{{identifier}} & a, std::underlying_type<{{api}}::{{identifier}}>::type b);
GLBINDING_API {{api}}::{{identifier}} operator-(const {{api}}::{{identifier}} & a, std::underlying_type<{{api}}::{{identifier}}>::type b);


} // namespace {{api}}
