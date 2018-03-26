
#include <khrbinding-aux/types_to_string.h>

#include <ostream>

#include <khrbinding/AbstractVersion.h>


namespace khrbinding
{


std::ostream & operator<<(std::ostream & stream, const AbstractVersion & version)
{
    stream << version.toString();

    return stream;
}


} // namespace khrbinding
