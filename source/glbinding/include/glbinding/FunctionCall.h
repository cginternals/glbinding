
#pragma once

#include <vector>
#include <string>
#include <chrono>

#include <glbinding/glbinding_api.h>


namespace glbinding
{


class AbstractFunction;
class AbstractValue;

/**
 * @brief
 *   A FunctionCall represents a function call of an OpenGL API function, including the parameter and return values.
 */
struct GLBINDING_API FunctionCall
{
public:
    /**
     * @brief
     *   Constructor
     *
     * @param[in] _function
     *   The Function of this call.
     *
     * This FunctionCall is initialized with empty parameters and return values with the current time.
     */
    FunctionCall(const AbstractFunction * _function);

    /**
     * @brief
     *   Destructor
     */
    virtual ~FunctionCall();

    /**
     * @brief
     *   Move Constructor
     *
     * @param[in] other
     *   The FunctionCall to move the memory from.
     */
    FunctionCall(FunctionCall && other);

    /**
     * @brief
     *   Deleted assigment operator; no memory management for dynamically allocated memory implemented.
     */
    FunctionCall & operator=(const FunctionCall &) = delete;


    /**
     * @brief
     *   Move assignment
     *
     * @param[in] other
     *   The other FunctionCall to move memory from.
     *
     * @return
     *   This FunctionCall.
     */
    FunctionCall & operator=(FunctionCall && other);

    /**
     * @brief
     *   Converts this FunctionCall to a string usable to put into a log.
     *
     * @return
     *   A string representing the contents of this FunctionCall.
     */
    std::string toString() const;

public:
    const AbstractFunction * function; ///< The function of this call
    std::chrono::system_clock::time_point timestamp; ///< The time of the call

    std::vector<AbstractValue *> parameters; ///< The list of parameter values; doesn't have to be filled.
    AbstractValue * returnValue; ///< The return value; doesn't have to be filled.
};


} // namespace glbinding
