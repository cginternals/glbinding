
#include <eglbinding-aux/types_to_string.h>

#include <ostream>

#include <eglbinding/AbstractVersion.h>


namespace eglbinding
{


std::ostream & operator<<(std::ostream & stream, const AbstractVersion & version)
{
    stream << version.toString();

    return stream;
}


} // namespace eglbinding
