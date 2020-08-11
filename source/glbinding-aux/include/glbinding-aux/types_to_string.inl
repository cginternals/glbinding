
#pragma once


#include <ostream>


namespace glbinding
{


template <typename T>
std::ostream & operator<<(std::ostream & stream, const Value<T> & value) GLBINDING_NOEXCEPT
{
    stream << value.value();

    return stream;
}

template <typename T>
std::ostream & operator<<(std::ostream & stream, const Value<T *> & value) GLBINDING_NOEXCEPT
{
    stream << std::hex << value.value() << std::dec;

    return stream;
}


} // namespace glbinding