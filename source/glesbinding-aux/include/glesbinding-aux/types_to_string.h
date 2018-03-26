
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
KHRBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const khrbinding::AbstractVersion & version);


} // namespace glesbinding::aux
