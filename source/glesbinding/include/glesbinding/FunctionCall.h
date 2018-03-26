
#pragma once


#include <vector>
#include <string>
#include <chrono>
#include <memory>

#include <glesbinding/glesbinding_api.h>
#include <glesbinding/glesbinding_features.h>


namespace glesbinding
{


class AbstractValue;
class AbstractFunction;


/**
*  @brief
*    A FunctionCall represents a function call of an OpenGL API function, including the parameter and return values
*/
struct GLESBINDING_API FunctionCall
{
public:
    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] _function
    *    The Function of this call
    *
    *  This FunctionCall is initialized with empty parameters and return values with the current time
    */
    FunctionCall(const AbstractFunction * _function);

    /**
    *  @brief
    *    Destructor
    */
    virtual ~FunctionCall();

    /**
    *  @brief
    *    Move Constructor
    *
    *  @param[in] other
    *    The FunctionCall to move the memory from
    */
    FunctionCall(FunctionCall && other);

    /**
    *  @brief
    *    Move assignment
    *
    *  @param[in] other
    *    The other FunctionCall to move memory from
    *
    *  @return
    *    This FunctionCall
    */
    FunctionCall & operator=(FunctionCall && other);


public:
    const AbstractFunction                    * function;    ///< The function of this call
    std::chrono::system_clock::time_point       timestamp;   ///< The time of the call

    std::vector<std::unique_ptr<AbstractValue>> parameters;  ///< The list of parameter values; doesn't have to be filled
    std::unique_ptr<AbstractValue>              returnValue; ///< The return value; doesn't have to be filled
};


} // namespace glesbinding
