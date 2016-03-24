
#pragma once

#include <string>
#include <iosfwd>

#include <glbinding/glbinding_api.h>


namespace glbinding
{


/**
 * @brief
 *   The AbstractValue class represents the superclass of a printable wrapper around an OpenGL data type.
 *
 * This class and its subclasses Value<T> are mainly used when callbacks of OpenGL functions are used.
 */
class GLBINDING_API AbstractValue
{
public:
    /**
     * @brief
     *   Constructor
     */
    AbstractValue();

    /**
     * @brief
     *   Destructor for correct memory deallocation on subclasses
     */
    virtual ~AbstractValue();

    /**
     * @brief
     *   Prints the contents of this AbstractValue on a stream.
     *
     * @param[in] stream
     *   The stream to print on.
     */
    virtual void printOn(std::ostream & stream) const = 0;

    /**
     * @brief
     *   Convert the contents of this AbstractValue to a string.
     *
     * @return
     *   The string.
     */
    std::string asString() const;
};


} // namespace glbinding
