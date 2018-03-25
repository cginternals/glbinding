
#pragma once


#include <functional>

#include <khrbinding/Function.h>


namespace glscbinding 
{


template <typename... Types>
using Function = khrbinding::Function<Types...>;


} // namespace glscbinding
