
namespace {{api}}
{


GLBINDING_API {{identifier}} operator|(const {{identifier}} & a, const {{identifier}} & b);
GLBINDING_API {{identifier}} & operator|=({{identifier}} & a, const {{identifier}} & b);
GLBINDING_API {{identifier}} operator&(const {{identifier}} & a, const {{identifier}} & b);
GLBINDING_API {{identifier}} & operator&=({{identifier}} & a, const {{identifier}} & b);
GLBINDING_API {{identifier}} operator^(const {{identifier}} & a, const {{identifier}} & b);
GLBINDING_API {{identifier}} & operator^=({{identifier}} & a, const {{identifier}} & b);


} // namespace {{api}}