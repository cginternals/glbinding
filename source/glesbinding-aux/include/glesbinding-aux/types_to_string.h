
#pragma once


#include <iostream>

#include <glesbinding-aux/glesbinding-aux_api.h>


namespace glesbinding
{


class AbstractVersion;


/**
*  @brief
*    The operator to allow Versions to be printed onto a std::ostream
*/
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const glesbinding::AbstractVersion & version);


} // namespace glesbinding::aux
