
#pragma once


#include <set>
#include <vector>
#include <functional>

#include <glbinding/glbinding_api.h>
#include <glbinding/glbinding_features.h>

#include <glbinding/ContextHandle.h>
#include <glbinding/CallbackMask.h>
#include <glbinding/ProcAddress.h>


namespace glbinding
{


class AbstractFunction;
class FunctionCall;


using SimpleFunctionCallback = std::function<void(const AbstractFunction &)>;
using FunctionCallback = std::function<void(const FunctionCall &)>;
using FunctionLogCallback = std::function<void(FunctionCall *)>;
using ContextSwitchCallback = std::function<void(ContextHandle)>;   ///< The signature of the context switch callback

GLBINDING_API void initialize(glbinding::GetProcAddress functionPointerResolver, bool resolveFunctions = true);
GLBINDING_API void registerAdditionalFunction(AbstractFunction * function);
GLBINDING_API ProcAddress resolveFunction(const char * name);
GLBINDING_API void resolveFunctions();

GLBINDING_API void setCallbackMask(CallbackMask mask);
GLBINDING_API void setCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);
GLBINDING_API void addCallbackMask(CallbackMask mask);
GLBINDING_API void addCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);
GLBINDING_API void removeCallbackMask(CallbackMask mask);
GLBINDING_API void removeCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);
GLBINDING_API SimpleFunctionCallback unresolvedCallback();
GLBINDING_API void setUnresolvedCallback(SimpleFunctionCallback callback);
GLBINDING_API FunctionCallback beforeCallback();
GLBINDING_API void setBeforeCallback(FunctionCallback callback);
GLBINDING_API FunctionCallback afterCallback();
GLBINDING_API void setAfterCallback(FunctionCallback callback);
GLBINDING_API FunctionLogCallback logCallback();
GLBINDING_API void setLogCallback(FunctionLogCallback callback);

GLBINDING_API void addContextSwitchCallback(ContextSwitchCallback callback);
GLBINDING_API void initialize(ContextHandle context, glbinding::GetProcAddress functionPointerResolver, bool useContext = true, bool resolveFunctions = true);
GLBINDING_API void useCurrentContext();
GLBINDING_API void useContext(ContextHandle context);
GLBINDING_API void releaseCurrentContext();
GLBINDING_API void releaseContext(ContextHandle context);


} // namespace glbinding
