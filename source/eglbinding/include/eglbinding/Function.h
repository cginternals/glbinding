
#pragma once


#include <functional>

#include <khrbinding/Function.h>


namespace eglbinding 
{


template <typename... Types>
using Function = khrbinding::Function<Types...>;


} // namespace eglbinding
