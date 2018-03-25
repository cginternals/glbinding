
#pragma once


#include <khrbinding/SharedBitfield.h>


namespace eglbinding 
{


template <typename... Types>
using SharedBitfield = khrbinding::SharedBitfield<Types...>;


} // namespace eglbinding
