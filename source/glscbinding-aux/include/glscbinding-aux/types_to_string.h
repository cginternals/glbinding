
#pragma once


#include <iostream>

#include <glscbinding-aux/glscbinding-aux_api.h>


namespace glscbinding
{


class AbstractVersion;


/**
*  @brief
*    The operator to allow Versions to be printed onto a std::ostream
*/
KHRBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const khrbinding::AbstractVersion & version);


} // namespace glscbinding::aux
