
#include <glscbinding-aux/types_to_string.h>

#include <ostream>

#include <glscbinding/AbstractVersion.h>


namespace glscbinding
{


std::ostream & operator<<(std::ostream & stream, const AbstractVersion & version)
{
    stream << version.toString();

    return stream;
}


} // namespace glscbinding
