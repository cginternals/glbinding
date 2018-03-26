
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
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const glscbinding::AbstractVersion & version);


} // namespace glscbinding::aux
