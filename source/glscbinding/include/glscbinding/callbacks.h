
#pragma once


#include <set>
#include <functional>

#include <glscbinding/glscbinding_api.h>

#include <glscbinding/CallbackMask.h>
#include <glscbinding/FunctionCall.h>


namespace glscbinding
{


/**
*  @brief
*    Updates the callback mask of all registered OpenGL functions in the current state
*
*  @param[in] mask
*    The new CallbackMask
*/
GLSCBINDING_API void setCallbackMask(CallbackMask mask);

/**
*  @brief
*    Updates the callback mask of all registered OpenGL functions in the current state, excluding the blacklisted functions
 *
*  @param[in] mask
*    The new CallbackMask
*  @param[in] blackList
*    The blacklist of functions to exclude in this update
*/
GLSCBINDING_API void setCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);

/**
*  @brief
*    Updates the callback mask of all registered OpenGL functions in the current state to include the passed CallbackMask
*
*  @param[in] mask
*    The CallbackMask to include
*/
GLSCBINDING_API void addCallbackMask(CallbackMask mask);

/**
*  @brief
*    Updates the callback mask of all registered OpenGL functions in the current state to include the passed CallbackMask, excluding the blacklisted functions
*
*  @param[in] mask
*    The CallbackMask to include
*  @param[in] blackList
*    The blacklist of functions to exclude in this update
*/
GLSCBINDING_API void addCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);

/**
*  @brief
*    Updates the callback mask of all registered OpenGL functions in the current state to exclude the passed CallbackMask
*
*  @param[in] mask
*    The CallbackMask to exclude
*/
GLSCBINDING_API void removeCallbackMask(CallbackMask mask);

/**
*  @brief
*    Updates the callback mask of all registered OpenGL functions in the current state to exclude the passed CallbackMask, excluding the blacklisted functions
*
*  @param[in] mask
*    The CallbackMask to exclude
*  @param[in] blackList
*    The blacklist of functions to exclude in this update
*/
GLSCBINDING_API void removeCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);

/**
*  @brief
*    The callback type of a simple function callback without parameters and return value
*/
using SimpleFunctionCallback = std::function<void(const AbstractFunction &)>;

/**
*  @brief
*    The callback type of a function callback with parameters and return value
*/
using FunctionCallback = std::function<void(const FunctionCall &)>;

/**
*  @brief
*    Unresolved callback accessor
*
*  @return
*    The callback to use instead of unresolved function calls
*
*  @remarks
*    Keep in mind that in addition to a registered callback, the callback mask of the current Function has to include the After flag to enable the callback
*/
GLSCBINDING_API SimpleFunctionCallback unresolvedCallback();

/**
*  @brief
*    Updates the unresolved callback that is called upon invocation of an OpenGL function which have no counterpart in the OpenGL driver
*
*  @param[in] callback
*    The callback to use instead of unresolved function calls
*
*  @remarks
*    This callback is registered globally across all states.
*    Keep in mind that in addition to a registered callback, the callback mask of the current Function has to include the Unresolved flag to enable the callback
*/
GLSCBINDING_API void setUnresolvedCallback(SimpleFunctionCallback callback);

/**
*  @brief
*    Before callback accessor
*
*  @return
*    The callback to use before an OpenGL function call
*
*  @remarks
*    Keep in mind that in addition to a registered callback, the callback mask of the current Function has to include the After flag to enable the callback
*/
GLSCBINDING_API FunctionCallback beforeCallback();

/**
*  @brief
*    Updates the before callback that is called before the actual OpenGL function invocation
*
*  @param[in] callback
*    The callback to use before an OpenGL function call
*
*  @remarks
*    This callback is registered globally across all states.
*    Keep in mind that in addition to a registered callback, the callback mask of the current Function has to include the Before flag to enable the callback
*/
GLSCBINDING_API void setBeforeCallback(FunctionCallback callback);

/**
*  @brief
*    After callback accessor
*
*  @return
*    The callback to use after an OpenGL function call
*
*  @remarks
*    Keep in mind that in addition to a registered callback, the callback mask of the current Function has to include the After flag to enable the callback
*/
GLSCBINDING_API FunctionCallback afterCallback();

/**
*  @brief
*    Updates the after callback that is called after the actual OpenGL function invocation
*
*  @param[in] callback
*    The callback to use after an OpenGL function call
*
*  @remarks
*    This callback is registered globally across all states.
*    Keep in mind that in addition to a registered callback, the callback mask of the current Function has to include the After flag to enable the callback
*/
GLSCBINDING_API void setAfterCallback(FunctionCallback callback);


} // namespace glscbinding
