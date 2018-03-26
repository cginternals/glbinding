
#pragma once


#include <iostream>

#include <glbinding-aux/glbinding-aux_api.h>


namespace glbinding
{


class AbstractVersion;


/**
*  @brief
*    The operator to allow Versions to be printed onto a std::ostream
*/
KHRBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const khrbinding::AbstractVersion & version);


} // namespace glbinding::aux
