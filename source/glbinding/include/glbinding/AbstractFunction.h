
#pragma once


#include <glbinding/glbinding_api.h>

#include <glbinding/CallbackMask.h>
#include <glbinding/FunctionCall.h>
#include <glbinding/ProcAddress.h>


namespace glbinding
{


class AbstractState;
class Binding;


/**
*  @brief
*    The AbstractFunction represents an OpenGL API function by its name
*    and entry point after dynamic address resolution.
*/
class GLBINDING_API AbstractFunction
{
    friend class Binding;
public:
    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] name
    *    The actual exported OpenGL API function name, including the 'gl' prefix
    */
    AbstractFunction(const char * name);

    /**
    *  @brief
    *    Destructor to guarantee correct memory deallocation of subclasses
    */
    virtual ~AbstractFunction();

    /**
    *  @brief
    *    Get function name
    *
    *  @return
    *    The function name
    */
    const char * name() const;

    /**
    *  @brief
    *    Lookup the function pointer and stores it in the current state
    */
    void resolveAddress();

    /**
    *  @brief
    *    Check for a valid function pointer in the current state
    *
    *  @return
    *    'true' if a valid function pointer is stored in the current state, else 'false'
    */
    bool isResolved() const;

    /**
    *  @brief
    *    Get function pointer
    *
    *  @return
    *    The function pointer
    */
    ProcAddress address() const;

    /**
    *  @brief
    *    Get callback mask
    *
    *  @return
    *    The currently configured callback mask for the current state
    */
    CallbackMask callbackMask() const;

    /**
    *  @brief
    *    Reconfigures the callback mask for the current state
    *
    *  @param[in] mask
    *    The new callback mask
    */
    void setCallbackMask(CallbackMask mask);

    /**
    *  @brief
    *    Reconfigures the callback mask for the current state in means of a bit-wise 'or' operation with the current callback mask
    *
    *  @param[in] mask
    *    The callback mask to include
    */
    void addCallbackMask(CallbackMask mask);

    /**
    *  @brief
    *    Reconfigures the callback mask for the current state in means of a bit-wise 'clear' operation of the current callback mask
    *
    *  @param[in] mask
    *    The callback mask to exclude
    */
    void removeCallbackMask(CallbackMask mask);

    /**
    *  @brief
    *    Check if all bits of the parameter are set in the currently configured callback mask of the current state
    *
    *  @param[in] mask
    *    The mask to check against
    *
    *  @return
    *    'true' if all bits are set, else 'false'
    */
    bool isEnabled(CallbackMask mask) const;

    /**
    *  @brief
    *    Check if any bit of the parameter is set in the currently configured callback mask of the current state
    *
    *  @param[in] mask
    *    The mask to check against
    *
    *  @return
    *    'true' if at least one bit is set, else 'false'
    */
    bool isAnyEnabled(CallbackMask mask) const;

    virtual void resizeStates(int count) = 0;

    static void unresolved(const AbstractFunction * function);
    static void before(const FunctionCall & call);
    static void after(const FunctionCall & call);
    static void log(FunctionCall && call);

    static int currentPos();
    static int maxPos();


protected:
    /**
    *  @brief
    *    Checks for existance of the current configured state
    *
    *  @return
    *    'true' if the current state still exists, else 'false'
    *
    *  @remarks
    *    This method is usually used to detect invalid state clean up
    */
    virtual bool hasState() const = 0;

    /**
    *  @brief
    *    Checks for existance of a state
    *
    *  @param[in] pos
    *    The index of the state to check
    *
    *  @return
    *    'true' if the state exists, else 'false'
    */
    virtual bool hasState(int pos) const = 0;

    /**
    *  @brief
    *    Get current state
    *
    *  @return
    *    The current state
    */
    virtual AbstractState & state() const = 0;

    /**
    *  @brief
    *    Get state
    *
    *  @param[in] pos
    *    The index of the state
    *
    *  @return
    *    The state
    */
    virtual AbstractState & state(int pos) const = 0;

protected:
    const char * m_name;   ///< The OpenGL API function name, including the 'gl' prefix
};


} // namespace glbinding
