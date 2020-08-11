
#pragma once


#include <glbinding/glbinding_api.h>
#include <glbinding/glbinding_features.h>


namespace glbinding
{


/**
*  @brief
*    The AbstractValue class represents the superclass of a printable wrapper around a data type.
*
*    This class and its subclasses Value<T> are mainly used when callbacks of functions are used.
*/
class GLBINDING_API AbstractValue
{
public:
    /**
    *  @brief
    *    Constructor
    */
    AbstractValue() GLBINDING_NOEXCEPT;

    /**
    *  @brief
    *    Destructor for correct memory deallocation on subclasses
    */
    virtual ~AbstractValue() GLBINDING_NOEXCEPT;
};


} // namespace glbinding