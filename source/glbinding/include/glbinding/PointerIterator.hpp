#pragma once

#include <glbinding/PointerIterator.h>

#include <type_traits>

namespace glbinding {

template <typename T, ptrdiff_t step>
PointerIterator<T, step>::PointerIterator(T * _p)
: p(_p)
{
}

template <typename T, ptrdiff_t step>
PointerIterator<T, step>::PointerIterator(const PointerIterator & mit)
: p(mit.p)
{
}

template <typename T, ptrdiff_t step>
PointerIterator<T, step> & PointerIterator<T, step>::operator++()
{
    p = reinterpret_cast<T*>(reinterpret_cast<typename std::conditional<std::is_const<T>::value, const char*, char*>::type>(p)+step);
    return *this;
}

template <typename T, ptrdiff_t step>
PointerIterator<T, step> PointerIterator<T, step>::operator++(int)
{
    PointerIterator tmp(*this);
    operator++();
    return tmp;
}

template <typename T, ptrdiff_t step>
bool PointerIterator<T, step>::operator==(const PointerIterator& rhs)
{
    return p == rhs.p;
}

template <typename T, ptrdiff_t step>
bool PointerIterator<T, step>::operator!=(const PointerIterator& rhs)
{
    return p != rhs.p;
}

template <typename T, ptrdiff_t step>
T * PointerIterator<T, step>::operator*()
{
    return p;
}

} // namespace glbinding
