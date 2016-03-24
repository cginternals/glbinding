namespace {{api}}
{

GLBINDING_API {{api}}::{{identifier}} operator|(const {{api}}::{{identifier}} & a, const {{api}}::{{identifier}} & b);
GLBINDING_API {{api}}::{{identifier}} & operator|=({{api}}::{{identifier}} & a, const {{api}}::{{identifier}} & b);
GLBINDING_API {{api}}::{{identifier}} operator&(const {{api}}::{{identifier}} & a, const {{api}}::{{identifier}} & b);
GLBINDING_API {{api}}::{{identifier}} & operator&=({{api}}::{{identifier}} & a, const {{api}}::{{identifier}} & b);
GLBINDING_API {{api}}::{{identifier}} operator^(const {{api}}::{{identifier}} & a, const {{api}}::{{identifier}} & b);
GLBINDING_API {{api}}::{{identifier}} & operator^=({{api}}::{{identifier}} & a, const {{api}}::{{identifier}} & b);

} // namespace {{api}}