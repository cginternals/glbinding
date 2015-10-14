#ifdef GL_BY_STRINGS

#include <string>
#include <unordered_map>

#include <glbinding/gl/boolean.h>


using namespace gl; // ToDo: multiple APIs?

namespace glbinding
{

const std::unordered_map<std::string, GLboolean> Meta_BooleanByString 
{
    { "GL_FALSE", GLboolean::GL_FALSE },
    { "GL_TRUE", GLboolean::GL_TRUE }
};
    
} // namespace glbinding

#endif // GL_BY_STRINGS
