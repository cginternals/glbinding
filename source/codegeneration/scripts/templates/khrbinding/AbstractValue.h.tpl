
#pragma once


#include <{{binding}}/{{binding}}_api.h>


namespace {{binding}}
{


/**
*  @brief
*    The AbstractValue class represents the superclass of a printable wrapper around an OpenGL data type.
*
*    This class and its subclasses Value<T> are mainly used when callbacks of OpenGL functions are used.
*/
class KHRBINDING_API AbstractValue
{
public:
    /**
    *  @brief
    *    Constructor
    */
    AbstractValue();

    /**
    *  @brief
    *    Destructor for correct memory deallocation on subclasses
    */
    virtual ~AbstractValue();
};


} // namespace {{binding}}
