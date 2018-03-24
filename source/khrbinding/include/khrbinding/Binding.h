
#pragma once


#include <vector>
#include <functional>

#include <khrbinding/khrbinding_api.h>
#include <khrbinding/khrbinding_features.h>

#include <khrbinding/ContextHandle.h>
#include <khrbinding/Function.h>


namespace khrbinding
{


/**
*  @brief
*    The main interface to handle additional features to OpenGL functions besides regular function calls
*
*  Additional features include binding initialization (even for multi-threaded environments), additional function registration,
*  context switches (for multi-context environments) and basic reflection in form of accessors to the full list of functions
*
*  This is a base class using the Curiously Recurring Template Pattern (CRTP).
*/
template <typename ActualBinding>
class KHRBINDING_API Binding<ActualBinding>
{
public:
    using ContextSwitchCallback = std::function<void(ContextHandle)>;   ///< The signature of the context switch callback
    using GetProcAddress        = std::function<void*(const char*)>;    ///< The signature for the getProcAddress function

    /**
    *  @brief
    *    Deleted Constructor as all functions are static
    */
    Binding() = delete;

    /**
    *  @brief
    *    Initializes the binding for the current active OpenGL context
    * 
    *  @param[in] functionPointerResolver
    *    A function pointer to resolve binding functions for this context
    *  @param[in] resolveFunctions (optional)
    *    Whether to resolve function pointers lazy (resolveFunctions = false) or immediately
    * 
    *  @remarks
    *    After this call, the initialized context is already set active for the current thread.
    *    A functionPointerResolver with value 'nullptr' will get initialized with the function
    *    pointer from the initial thread.
    */
    static void initialize(GetProcAddress functionPointerResolver, bool resolveFunctions = true);
    
    /**
    *  @brief
    *    Initializes the binding for the current active OpenGL context
    * 
    *  @param[in] context
    *    The context handle of the context to initialize
    *  @param[in] functionPointerResolver
    *    A function pointer to resolve binding functions for this context
    *  @param[in] useContext
    *    Whether to set the context active (useContext = true) after the initialization
    *  @param[in] resolveFunctions (optional)
    *    Whether to resolve function pointers lazy (resolveFunctions = false) or immediately
    *
    *  @remarks
    *    A functionPointerResolver with value 'nullptr' will get initialized with the function
    *    pointer from the initial thread.
    */
    static void initialize(ContextHandle context, GetProcAddress functionPointerResolver, bool useContext = true, bool resolveFunctions = true);
    
    /**
    *  @brief
    *    Registers an additional function for the additional features
    * 
    *  @param[in] function
    *    The function to register
    * 
    *  @remarks
    *    The additional features are callbacks, and use in multi-context environments
    */
    static void registerAdditionalFunction(AbstractFunction * function);

    /**
    *  @brief
    *    Resolves the funtion pointers of all registered OpenGL functions immediately for the current context
    */
    static void resolveFunctions();
    
    /**
    *  @brief
    *    Update the current context state in khrbinding
    *    This function queries the driver for the current OpenGL context
    */
    static void useCurrentContext();
    
    /**
    *  @brief
    *    Update the current context state in khrbinding
    * 
    *  @param[in] context
    *    The context handle of the context to set current
    */
    static void useContext(ContextHandle context);

    /**
    *  @brief
    *    Removes the current context from the state of khrbinding
    *    This function queries the driver for the current OpenGL context
    */
    static void releaseCurrentContext();
    
    /**
    *  @brief
    *    Removes the current context from the state of khrbinding
    * 
    *  @param[in] context
    *    The context handle of the context to remove
    */
    static void releaseContext(ContextHandle context);
    
    /**
    *  @brief
    *    Registers an additional callback that gets called each time the context is switched using the useContext method
    * 
    *  @remarks
    *    There may be multiple context switch callbacks registered at once
    */
    static void addContextSwitchCallback(ContextSwitchCallback callback);

    /**
    *  @brief
    *    The accessor for the number of all registered functions (build-in and additional)
    * 
    *  @return
    *    The number of all registered functions
    */
    static size_t size();

    /**
    *  @brief
    *    The accessor for all additional functions
    * 
    *  @return
    *    The list of all additional functions
    */
    static const std::vector<AbstractFunction *> & additionalFunctions();


protected:
    static std::vector<AbstractFunction *>    s_additionalFunctions; ///< The list of all additional functions
    static std::vector<ContextSwitchCallback> s_callbacks;           ///< The list of all currently registered context switch callbacks
};


} // namespace khrbinding
