#pragma once

#include <khrapi/khrapi_api.h>

#include <set>
#include <vector>
#include <functional>
#include <string>
#include <chrono>

namespace khrapi
{

class AbstractFunction;
class AbstractValue;

struct KHRAPI_API FunctionCall
{
    FunctionCall(const AbstractFunction * _function = nullptr);
    ~FunctionCall();

    FunctionCall(FunctionCall && other);

    FunctionCall & operator=(const FunctionCall &) = delete;

    std::string toString() const;

    const AbstractFunction * function;
    std::chrono::system_clock::time_point timestamp;

    std::vector<AbstractValue *> parameters;
    AbstractValue * returnValue;
};

enum class CallbackMask : unsigned char
{
    None        = 0,
    Unresolved  = 1 << 0,
    Before      = 1 << 1,
    After       = 1 << 2,
    Parameters  = 1 << 3,
    ReturnValue = 1 << 4,
    Logging     = 1 << 5,
    ParametersAndReturnValue = Parameters | ReturnValue,
    BeforeAndAfter = Before | After
};

KHRAPI_API CallbackMask operator|(CallbackMask a, CallbackMask b);
KHRAPI_API CallbackMask operator~(CallbackMask a);
KHRAPI_API CallbackMask operator&(CallbackMask a, CallbackMask b);
KHRAPI_API CallbackMask& operator|=(CallbackMask& a, CallbackMask b);
KHRAPI_API CallbackMask& operator&=(CallbackMask& a, CallbackMask b);

using SimpleFunctionCallback = std::function<void(const AbstractFunction &)>;
using FunctionCallback = std::function<void(const FunctionCall &)>;

KHRAPI_API void setUnresolvedCallback(SimpleFunctionCallback callback);

KHRAPI_API void setBeforeCallback(FunctionCallback callback);
KHRAPI_API void setAfterCallback(FunctionCallback callback);

KHRAPI_API void unresolved(const AbstractFunction * function);
KHRAPI_API void before(const FunctionCall & call);
KHRAPI_API void after(const FunctionCall & call);

} // namespace khrapi
