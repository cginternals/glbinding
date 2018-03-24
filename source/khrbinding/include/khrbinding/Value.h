
#pragma once


#include <vector>

#include <khrbinding/khrbinding_api.h>
#include <khrbinding/khrbinding_features.h>

#include <khrbinding/AbstractValue.h>


namespace khrbinding 
{


/**
*  @brief
*    The Value class represents a printable wrapper around an OpenGL data type
*
*  @tparam T
*    The data type of the wrapped value
*
*  @remarks
*    This class is mainly used when callbacks of OpenGL functions are used
*/
template <typename T>
class KHRBINDING_TEMPLATE_API Value : public AbstractValue
{
public:
    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] value
    *    The value that should be printed later
    */
    KHRBINDING_CONSTEXPR inline Value(const T & value);

    /**
    *  @brief
    *    The deleted assigment operator
    *
    *  @remarks
    *    For this dynamically allocated Value, no contents should be changable
    */
    Value & operator=(const Value &) = delete;

    /**
    *  @brief
    *    Prints the contents of this Value on a stream
    *
    *  @param[in] stream
    *    The stream to print on
    */
    virtual void printOn(std::ostream & stream) const override;


protected:
    const T value; ///< The value that should be printed later
};


/**
*  @brief
*    A wrapper around the type deduction and memory allocation of a specific argument
*
*  @tparam Argument
*    The type of the argument, usually an OpenGL data type.
*  @param[in] argument
*    The argument to wrap into a Value of type Argument.
*/
template <typename Argument>
inline AbstractValue * createValue(const Argument & argument);

/**
*  @brief
*    A wrapper around the creation of a vector of arguments
*
*  @tparam Arguments
*    The types of the arguments, usually OpenGL data types
*  @param[in] arguments
*    The variadic parameter list of all arguments to convert
*
*  @remarks
*    Internally uses the createValue function
*/
template <typename... Arguments>
inline std::vector<AbstractValue*> createValues(Arguments&&... arguments);


} // namespace khrbinding


#include <khrbinding/Value.inl>
