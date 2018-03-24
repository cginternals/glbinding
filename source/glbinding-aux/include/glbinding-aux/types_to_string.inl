
#pragma once


#include <ostream>


namespace glbinding
{


template <typename T>
std::ostream & operator<<(std::ostream & stream, const Value<T> & value)
{
    stream << value.value();

    return stream;
}


} // namespace glbinding
