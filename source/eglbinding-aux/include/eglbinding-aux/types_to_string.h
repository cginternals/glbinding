
#pragma once


#include <iostream>

#include <eglbinding-aux/eglbinding-aux_api.h>


namespace eglbinding
{


class AbstractVersion;


/**
*  @brief
*    The operator to allow Versions to be printed onto a std::ostream
*/
KHRBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const khrbinding::AbstractVersion & version);


} // namespace eglbinding::aux
