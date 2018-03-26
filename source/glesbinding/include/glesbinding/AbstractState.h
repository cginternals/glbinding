
#pragma once


#include <glesbinding/glesbinding_api.h>

#include <glesbinding/ProcAddress.h>
#include <glesbinding/CallbackMask.h>


namespace glesbinding
{


/**
*  @brief
*    The State struct represents the configuration of an OpenGL function for one thread.
*    This includes the driver function pointer (is allowed to differ between contexts) and the callback mask
*/
class GLESBINDING_API AbstractState
{
public:
    /**
    *  @brief
    *    Constructor that initializes all values with 0 / invalid
    */
    AbstractState();

    virtual ~AbstractState();

    bool isInitialized() const;

    ProcAddress address() const;

    CallbackMask callbackMask() const;
    void setCallbackMask(CallbackMask mask);

    virtual void resolve(const char * name) = 0;

    bool isResolved() const;

protected:
    ProcAddress  m_address;      ///< The function pointer to the OpenGL function
    bool         m_initialized;  ///< Whether this state is initialized or not
    CallbackMask m_callbackMask; ///< The callback mask that is considered when dispatching function calls
};


} // namespace glesbinding
