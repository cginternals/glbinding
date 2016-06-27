
#pragma once

#include <functional>

#include <glbinding/AbstractFunction.h>

#ifndef WINAPI
#ifdef SYSTEM_WINDOWS
#define WINAPI __stdcall
#else
#define WINAPI
#endif
#endif


namespace glbinding 
{


/**
 * @brief
 *   A callback signature with return type and multiple arguments.
 *
 * @param ReturnType
 *   The type of the return value
 * @param Arguments
 *   The types of the arguments
 */
template <typename ReturnType, typename... Arguments>
struct CallbackType
{
    using type = std::function<void(ReturnType, Arguments...)>; ///< Propagate the actual callable callback type.
};

/**
 * @brief
 *   A callback signature with multiple arguments but no return type.
 *
 * @param Arguments
 *   The types of the arguments
 */
template <typename... Arguments>
struct CallbackType<void, Arguments...>
{
    using type = std::function<void(Arguments...)>; ///< Propagate the actual callable callback type.
};

/**
 * @brief
 *   The Function represents an OpenGL API function with additional features, including:
 *    * callbacks,
 *    * direct call (omit all callbacks, logging, error checking, ...),
 *    * and function pointer resolving.
 *
 * @param ReturnType
 *   The return type of the function
 * @param Arguments
 *   The types of the arguments
 */
template <typename ReturnType, typename... Arguments>
class Function : public AbstractFunction
{
public:
    using Signature = ReturnType(WINAPI *) (Arguments...); ///< The c pointer type for a function call.

    using BeforeCallback = typename CallbackType<void, Arguments...>::type; ///< The callback type for the before callback.
    using AfterCallback = typename CallbackType<ReturnType, Arguments...>::type; ///< The callback type for the after callback.

public:
    /**
     * @brief
     *   Constructor
     *
     * @param[in] name
     *   The actual exported OpenGL API function name, including the 'gl' prefix.
     */
    Function(const char * name);

    /**
     * @brief
     *   Executes a function call on the resolved function pointer and passes the arguments.
     *
     * @param[in] arguments
     *   The arguments for the function call
     *
     * @return
     *   The return value. (may be void and thus, nothing)
     *
     * This method respect currently activated callbacks and logging.
     */
    ReturnType operator()(Arguments&... arguments) const;

    /**
     * @brief
     *   Executes a function call on the resolved function pointer and passes the arguments.
     *
     * @param[in] arguments
     *   The arguments for the function call
     *
     * @return
     *   The return value. (may be void and thus, nothing)
     *
     * This method respect currently activated callbacks and logging.
     */
    ReturnType call(Arguments&... arguments) const;

    /**
     * @brief
     *   Executes a function call on the resolved function pointer and passes the arguments.
     *
     * @param[in] arguments
     *   The arguments for the function call
     *
     * @return
     *   The return value. (may be void and thus, nothing)
     *
     * This method omits all currently activated callbacks and logging.
     */
    ReturnType directCall(Arguments... arguments) const;

    /**
     * @brief
     *   Register a callback that is triggered before a function call to the OpenGL driver.
     *
     * @param[in] callback
     *   The callback to register
     *
     * Keep in mind that in addition to a registered callback, the callback mask of this Function has to include the Before flag to enable the callback.
     */
    void setBeforeCallback(BeforeCallback callback);

    /**
     * @brief
     *   Clears any previously registered before callback.
     */
    void clearBeforeCallback();

    /**
     * @brief
     *   Register a callback that is triggered after a function call to the OpenGL driver.
     *
     * @param[in] callback
     *   The callback to register
     *
     * Keep in mind that in addition to a registered callback, the callback mask of this Function has to include the After flag to enable the callback.
     */
    void setAfterCallback(AfterCallback callback);

    /**
     * @brief
     *   Clears any previously registered after callback.
     */
    void clearAfterCallback();

    /**
     * @brief
     *   The accessor for the beforeCallback.
     *
     * @return
     *   The beforeCallback.
     */
    BeforeCallback beforeCallback() const;

    /**
     * @brief
     *   The accessor for the afterCallback.
     *
     * @return
     *   The afterCallback.
     */
    AfterCallback afterCallback() const;

protected:
    BeforeCallback m_beforeCallback; ///< The currently registered before callback.
    AfterCallback m_afterCallback; ///< The currently registered after callback.
};


} // namespace glbinding


#include <glbinding/Function.inl>
