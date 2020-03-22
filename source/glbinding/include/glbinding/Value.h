
#pragma once


#include <vector>
#include <memory>

#include <glbinding/glbinding_api.h>
#include <glbinding/glbinding_features.h>

#include <glbinding/AbstractValue.h>


namespace glbinding
{


/**
*  @brief
*    The Value class represents a printable wrapper around an OpenGL data type
*
*  @tparam T
*    The data type of the wrapped value
*
*  @remark
*    This class is mainly used when callbacks of OpenGL functions are used
*/
template <typename T>
class GLBINDING_TEMPLATE_API Value : public AbstractValue
{
public:
    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] value
    *    The value that should be printed later
    */
    GLBINDING_CONSTEXPR inline Value(const T & value);

    /**
    *  @brief
    *    The deleted assigment operator
    *
    *  @remark
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
    GLBINDING_CONSTEXPR inline T value() const;

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
*  @remark
*    Internally uses the createValue() function
*/
template <typename... Arguments>
inline std::vector<std::unique_ptr<AbstractValue>> createValues(Arguments&&... arguments);


} // namespace glbinding


#include <glbinding/Value.inl>