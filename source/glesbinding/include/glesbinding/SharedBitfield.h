
#pragma once


#include <khrbinding/SharedBitfield.h>


namespace glesbinding 
{


template <typename... Types>
using SharedBitfield = khrbinding::SharedBitfield<Types...>;


} // namespace glesbinding
