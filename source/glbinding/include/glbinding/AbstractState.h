
#pragma once


#include <glbinding/glbinding_api.h>

#include <glbinding/ProcAddress.h>
#include <glbinding/CallbackMask.h>


namespace glbinding
{


/**
*  @brief
*    The State struct represents the configuration of a single OpenGL function for one thread.
*    This includes the driver function pointer (is allowed to differ between contexts) and the callback mask
*/
class GLBINDING_API AbstractState
{
public:
    /**
    *  @brief
    *    Constructor that initializes all values with 0 / invalid
    */
    AbstractState();

    /**
    *  @brief
    *    Destructor
    */
    virtual ~AbstractState();

    /**
    *  @brief
    *    Query if this state has been initialized
    *
    *  @return
    *    `true` if state is initialized, `false` otherwise
    */
    bool isInitialized() const;

    /**
    *  @brief
    *    Query address of OpenGL function
    *
    *  @return
    *    Address of OpenGL function
    */
    ProcAddress address() const;

    /**
    *  @brief
    *    Query callback mask
    *
    *  @return
    *    Callback mask
    */
    CallbackMask callbackMask() const;

    /**
    *  @brief
    *    Set callback mask
    *
    *  @param[in] mask
    *    New callback mask
    */
    void setCallbackMask(CallbackMask mask);

    /**
    *  @brief
    *    Resolve address of OpenGL function
    *
    *  @param[in] name
    *    Name of the function to resolve
    */
    virtual void resolve(const char * name) = 0;

    /**
    *  @brief
    *    Query resolution status
    *
    *  @return
    *    `true` if function has been resolved, `false` otherwise
    */
    bool isResolved() const;

protected:
    ProcAddress  m_address;      ///< The function pointer to the OpenGL function
    bool         m_initialized;  ///< Whether this state is initialized or not
    CallbackMask m_callbackMask; ///< The callback mask that is considered when dispatching function calls
};


} // namespace glbinding