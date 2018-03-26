
#include <{{binding}}-aux/types_to_string.h>

#include <ostream>

#include <{{binding}}/AbstractVersion.h>


namespace {{binding}}
{


std::ostream & operator<<(std::ostream & stream, const AbstractVersion & version)
{
    stream << version.toString();

    return stream;
}


} // namespace {{binding}}
