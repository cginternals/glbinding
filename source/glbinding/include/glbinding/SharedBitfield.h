
#pragma once


#include <khrbinding/SharedBitfield.h>


namespace glbinding 
{


template <typename... Types>
using SharedBitfield = khrbinding::SharedBitfield<Types...>;


} // namespace glbinding
