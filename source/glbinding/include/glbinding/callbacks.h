#pragma once

#include <glbinding/glbinding_api.h>
#include <vector>
#include <functional>

namespace glbinding {

class AbstractFunction;
class AbstractValue;

struct FunctionCall
{
    FunctionCall(const AbstractFunction * _function);
    ~FunctionCall();

    const AbstractFunction & function;
    std::vector<AbstractValue *> parameters;
    AbstractValue * returnValue;
};

enum class CallbackMask
{
    None        = 0x0,
    Unresolved  = 0x1,
    Before      = 0x2,
    After       = 0x4,
    Parameters  = 0x8,
    ReturnValue = 0x10,
    ParametersAndReturnValue = Parameters | ReturnValue,
    BeforeAndAfter = Before | After
};

GLBINDING_API CallbackMask operator|(CallbackMask a, CallbackMask b);

using SimpleFunctionCallback = std::function<void(const AbstractFunction &)>;
using FunctionCallback = std::function<void(const FunctionCall &)>;

GLBINDING_API void setUnresolvedCallback(SimpleFunctionCallback callback);

GLBINDING_API void setBeforeCallback(FunctionCallback callback);
GLBINDING_API void setAfterCallback(FunctionCallback callback);

} // namespace glbinding
