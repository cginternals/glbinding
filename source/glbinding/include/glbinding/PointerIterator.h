#pragma once

#include <glbinding/glbinding_api.h>

#include <iterator>

namespace glbinding {

template <typename T, ptrdiff_t step>
class PointerIterator : public std::iterator<std::forward_iterator_tag, T*>
{
public:

    PointerIterator(T * p);
    PointerIterator(const PointerIterator & mit);

    PointerIterator& operator++();
    PointerIterator operator++(int);

    bool operator==(const PointerIterator& rhs);
    bool operator!=(const PointerIterator& rhs);

    T * operator*();

protected:

    T * p;
};

} // namespace glbinding

#include <glbinding/PointerIterator.hpp>
