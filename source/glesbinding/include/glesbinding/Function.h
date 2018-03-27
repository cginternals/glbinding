
#pragma once


#include <vector>
#include <functional>

#include <glesbinding/State.h>
#include <glesbinding/AbstractFunction.h>


#ifndef WINAPI
#ifdef SYSTEM_WINDOWS
#define WINAPI __stdcall
#else
#define WINAPI
#endif
#endif


namespace glesbinding
{


template <typename ReturnType, typename... Arguments>
struct FunctionHelper;

/**
*  @brief
*    A callback signature with return type and multiple arguments
*
*  @tparam ReturnType
*    The type of the return value
*  @tparam Arguments
*    The types of the arguments
*/
template <typename ReturnType, typename... Arguments>
struct GLESBINDING_TEMPLATE_API CallbackType
{
    using type = std::function<void(ReturnType, Arguments...)>; ///< Propagate the actual callable callback type
};


/**
*  @brief
*    A callback signature with multiple arguments but no return type
*
*  @tparam Arguments
*    The types of the arguments
*/
template <typename... Arguments>
struct GLESBINDING_TEMPLATE_API CallbackType<void, Arguments...>
{
    using type = std::function<void(Arguments...)>; ///< Propagate the actual callable callback type
};


/**
*  @brief
*    The Function represents an OpenGL API function with additional features, including:
*     * callbacks
*     * direct call (omit all callbacks, logging, error checking, ...)
*     * and function pointer resolving
*
*  @tparam ReturnType
*    The return type of the function
*  @tparam Arguments
*    The types of the arguments
*/
template <typename ReturnType, typename... Arguments>
class GLESBINDING_TEMPLATE_API Function : public AbstractFunction
{
public:
    friend struct FunctionHelper<ReturnType, Arguments...>;

    using Signature      = ReturnType(WINAPI *) (Arguments...);                   ///< The c pointer type for a function call
    using BeforeCallback = typename CallbackType<void, Arguments...>::type;       ///< The callback type for the before callback
    using AfterCallback  = typename CallbackType<ReturnType, Arguments...>::type; ///< The callback type for the after callback

public:
    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] name
    *    The actual exported OpenGL API function name, including the 'gl' prefix
    */
    Function(const char * name);

    /**
    *  @brief
    *    Executes a function call on the resolved function pointer and passes the arguments
    *
    *  @param[in] arguments
    *    The arguments for the function call
    *
    *  @return
    *    The return value. (may be void and thus, nothing)
    *
    *  @remarks
    *    This method respect currently activated callbacks and logging
    */
    inline ReturnType operator()(Arguments&... arguments) const;

    /**
    *  @brief
    *    Executes a function call on the resolved function pointer and passes the arguments
    *
    *  @param[in] arguments
    *    The arguments for the function call
    *
    *  @return
    *    The return value. (may be void and thus, nothing)
    *
    *  @remarks
    *    This method respect currently activated callbacks and logging
    */
    inline ReturnType call(Arguments&... arguments) const;

    /**
    *  @brief
    *    Executes a function call on the resolved function pointer and passes the arguments
    *
    *  @param[in] arguments
    *    The arguments for the function call
    *
    *  @return
    *    The return value. (may be void and thus, nothing)
    *
    *  @remarks
    *    This method omits all currently activated callbacks and logging
    */
    inline ReturnType directCall(Arguments... arguments) const;

    /**
    *  @brief
    *    Register a callback that is triggered before a function call to the OpenGL driver
    *
    *  @param[in] callback
    *    The callback to register
    *
    *  @remarks
    *    Keep in mind that in addition to a registered callback, the callback mask of this Function has to include the Before flag to enable the callback
    */
    inline void setBeforeCallback(BeforeCallback callback);

    /**
    *  @brief
    *    Clears any previously registered before callback
    */
    inline void clearBeforeCallback();

    /**
    *  @brief
    *    Register a callback that is triggered after a function call to the OpenGL driver
    *
    *  @param[in] callback
    *    The callback to register
    *
    *  @remarks
    *    Keep in mind that in addition to a registered callback, the callback mask of this Function has to include the After flag to enable the callback
    */
    inline void setAfterCallback(AfterCallback callback);

    /**
    *  @brief
    *    Clears any previously registered after callback
    */
    inline void clearAfterCallback();

    /**
    *  @brief
    *    The accessor for the beforeCallback
    *
    *  @return
    *    The beforeCallback
    */
    inline BeforeCallback beforeCallback() const;

    /**
    *  @brief
    *    The accessor for the afterCallback
    *
    *  @return
    *    The afterCallback
    */
    inline AfterCallback afterCallback() const;

    virtual bool hasState() const override;
    virtual bool hasState(int pos) const override;

    virtual AbstractState & state() const override;
    virtual AbstractState & state(int pos) const override;

    virtual void resizeStates(int count) override;


protected:
    mutable std::vector<State> m_states;

    BeforeCallback m_beforeCallback; ///< The currently registered before callback
    AfterCallback  m_afterCallback;  ///< The currently registered after callback
};


} // namespace glbinding


#include <glesbinding/Function.inl>
