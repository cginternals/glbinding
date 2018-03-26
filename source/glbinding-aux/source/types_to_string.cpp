
#include <glbinding-aux/types_to_string.h>

#include <ostream>

#include <glbinding/AbstractVersion.h>


namespace glbinding
{


std::ostream & operator<<(std::ostream & stream, const AbstractVersion & version)
{
    stream << version.toString();

    return stream;
}


} // namespace glbinding
