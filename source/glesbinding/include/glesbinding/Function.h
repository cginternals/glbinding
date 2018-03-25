
#pragma once


#include <functional>

#include <khrbinding/Function.h>


namespace glesbinding 
{


template <typename... Types>
using Function = khrbinding::Function<Types...>;


} // namespace glesbinding
