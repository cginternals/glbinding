
#include <glesbinding-aux/types_to_string.h>

#include <ostream>

#include <glesbinding/AbstractVersion.h>


namespace glesbinding
{


std::ostream & operator<<(std::ostream & stream, const AbstractVersion & version)
{
    stream << version.toString();

    return stream;
}


} // namespace glesbinding
