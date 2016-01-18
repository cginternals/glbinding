
GLBINDING_API bool operator==(const {{api}}::{{identifier}} & a, std::underlying_type<{{api}}::{{identifier}}>::type b);
GLBINDING_API bool operator!=(const {{api}}::{{identifier}} & a, std::underlying_type<{{api}}::{{identifier}}>::type b);
GLBINDING_API bool operator< (const {{api}}::{{identifier}} & a, std::underlying_type<{{api}}::{{identifier}}>::type b);
GLBINDING_API bool operator<=(const {{api}}::{{identifier}} & a, std::underlying_type<{{api}}::{{identifier}}>::type b);
GLBINDING_API bool operator> (const {{api}}::{{identifier}} & a, std::underlying_type<{{api}}::{{identifier}}>::type b);
GLBINDING_API bool operator>=(const {{api}}::{{identifier}} & a, std::underlying_type<{{api}}::{{identifier}}>::type b);

GLBINDING_API bool operator==(std::underlying_type<{{api}}::{{identifier}}>::type a, const {{api}}::{{identifier}} & b);
GLBINDING_API bool operator!=(std::underlying_type<{{api}}::{{identifier}}>::type a, const {{api}}::{{identifier}} & b);
GLBINDING_API bool operator< (std::underlying_type<{{api}}::{{identifier}}>::type a, const {{api}}::{{identifier}} & b);
GLBINDING_API bool operator<=(std::underlying_type<{{api}}::{{identifier}}>::type a, const {{api}}::{{identifier}} & b);
GLBINDING_API bool operator> (std::underlying_type<{{api}}::{{identifier}}>::type a, const {{api}}::{{identifier}} & b);
GLBINDING_API bool operator>=(std::underlying_type<{{api}}::{{identifier}}>::type a, const {{api}}::{{identifier}} & b);
