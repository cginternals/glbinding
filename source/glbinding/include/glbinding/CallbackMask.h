
#pragma once


#include <glbinding/glbinding_api.h>
#include <glbinding/glbinding_features.h>


namespace glbinding
{


/**
*  @brief
*    The CallbackMask is a bitfield to encode the states of callbacks for the OpenGL API function calls
*/
enum class CallbackMask : unsigned char
{
    None        = 0,      ///< All callbacks are disabled
    Unresolved  = 1 << 0, ///< Enables the callback for unresolved function calls
    Before      = 1 << 1, ///< Enables the before callbacks
    After       = 1 << 2, ///< Enables the after callbacks
    Parameters  = 1 << 3, ///< Enables the provision of parameter values in the before and after callbacks
    ReturnValue = 1 << 4, ///< Enables the provision of a return value in the after callback
    Logging     = 1 << 5, ///< Enables logging
    Timestamp   = 1 << 6, ///< Enables the provision of the timestamp
    ParametersAndReturnValue = Parameters | ReturnValue,                                       ///< Shorthand for `Parameters | ReturnValue`
    BeforeAndAfter = Before | After,                                                           ///< Shorthand for `Before | After`
    All         = Unresolved | Before | After | Parameters | ReturnValue | Logging | Timestamp ///< Shorthand for all callbacks
};

/**
*  @brief
*    External operator for bit-wise CallbackMask inverting
*
*  @param[in] a
*    The CallbackMask to invert
*
*  @return
*    The inverted CallbackMask
*/
GLBINDING_CONSTEXPR inline CallbackMask operator~(CallbackMask a);

/**
*  @brief
*    External operator for bit-wise 'or' of CallbackMasks
*
*  @param[in] a
*    The first CallbackMask
*  @param[in] b
*    The second CallbackMask
*
*  @return
*    The compound CallbackMask
*/
GLBINDING_CONSTEXPR inline CallbackMask operator|(CallbackMask a, CallbackMask b);

/**
*  @brief
*    External operator for bit-wise 'and' of CallbackMasks
*
*  @param[in] a
*    The first CallbackMask
*  @param[in] b
*    The second CallbackMask
*
*  @return
*    The compound CallbackMask
*/
GLBINDING_CONSTEXPR inline CallbackMask operator&(CallbackMask a, CallbackMask b);

/**
*  @brief
*    External operator for bit-wise 'xor' of CallbackMasks
*
*  @param[in] a
*    The first CallbackMask
*  @param[in] b
*    The second CallbackMask
*
*  @return
*    The compound CallbackMask
*/
GLBINDING_CONSTEXPR inline CallbackMask operator^(CallbackMask a, CallbackMask b);

/**
*  @brief
*    External operator for bit-wise 'or' assignment of CallbackMasks
*
*  @param[in] a
*    The first CallbackMask
*  @param[in] b
*    The second CallbackMask
*
*  @return
*    The first, now manipulated, CallbackMask
*/
inline CallbackMask& operator|=(CallbackMask& a, CallbackMask b);

/**
*  @brief
*    External operator for bit-wise 'and' assignment of CallbackMasks
*
*  @param[in] a
*    The first CallbackMask
*  @param[in] b
*    The second CallbackMask
*
*  @return
*    The first, now manipulated, CallbackMask
*/
inline CallbackMask& operator&=(CallbackMask& a, CallbackMask b);

/**
*  @brief
*    External operator for bit-wise 'xor' assignment of CallbackMasks
*
*  @param[in] a
*    The first CallbackMask
*  @param[in] b
*    The second CallbackMask
*
*  @return
*    The first, now manipulated, CallbackMask
*/
inline CallbackMask& operator^=(CallbackMask& a, CallbackMask b);


} // namespace glbinding


#include <glbinding/CallbackMask.inl>