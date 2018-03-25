
#pragma once


#include <functional>

#include <khrbinding/Function.h>


namespace glbinding 
{


template <typename... Types>
using Function = khrbinding::Function<Types...>;


} // namespace glbinding
