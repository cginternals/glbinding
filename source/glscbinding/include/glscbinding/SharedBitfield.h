
#pragma once


#include <khrbinding/SharedBitfield.h>


namespace glscbinding 
{


template <typename... Types>
using SharedBitfield = khrbinding::SharedBitfield<Types...>;


} // namespace glscbinding
