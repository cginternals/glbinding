
#pragma once


#include <vector>
#include <memory>

#include <glesbinding/glesbinding_api.h>
#include <glesbinding/glesbinding_features.h>

#include <glesbinding/AbstractValue.h>


namespace glesbinding
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
class GLESBINDING_TEMPLATE_API Value : public AbstractValue
{
public:
    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] value
    *    The value that should be printed later
    */
    GLESBINDING_CONSTEXPR inline Value(const T & value);

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
    *    Get the value
    *
    *  @return
    *    The value
    */
    GLESBINDING_CONSTEXPR inline T value() const;

protected:
    const T m_value; ///< The value
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
inline std::unique_ptr<AbstractValue> createValue(const Argument & argument);

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
inline std::vector<std::unique_ptr<AbstractValue>> createValues(Arguments&&... arguments);


} // namespace glesbinding


#include <glesbinding/Value.inl>
