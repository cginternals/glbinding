#pragma once

#include <glbinding/glbinding_api.h>

#include <string>
#include <set>
#include <vector>
#include <functional>

#include <glbinding/ProcAddress.h>
#include <glbinding/AbstractValue.h>

#include <glbinding/gl/types.h>


namespace glbinding 
{

class GLBINDING_API AbstractFunction
{
public:
    enum class CallbackLevel : unsigned char
    {
        None        = 0x0,
        Before      = 0x1,
        After       = 0x2,
        Parameters  = 0x4,
        ReturnValue = 0x8,
        Unresolved  = 0x10,
        BeforeAndAfter = Before | After,
        All = Before | After | Parameters | ReturnValue | Unresolved
    };

    AbstractFunction(const char * name);
    virtual ~AbstractFunction();

    void resolveAddress();

    const char * name() const;

    bool isResolved() const;

    ProcAddress address() const;

    const std::set<gl::GLextension> & extensions() const;

    void setCallbackLevel(CallbackLevel level);

public:
    using Callback = std::function<void(const AbstractFunction &)>;

    using ParametersCallback = std::function<void(const AbstractFunction &, const std::vector<AbstractValue *> &)>;
    using ReturnValueCallback = std::function<void(const AbstractFunction &, const AbstractValue *)>;

    static void setBeforeCallback(Callback callback);
    static void setAfterCallback(Callback callback);
    static void setUnresolvedCallback(Callback callback);
    static void setParametersCallback(ParametersCallback callback);
    static void setReturnValueCallback(ReturnValueCallback callback);

    static void setCallbackLevelForAll(CallbackLevel level);
    static void setCallbackLevelForAllExcept(CallbackLevel level, const std::set<std::string> & blackList);

protected:

    bool callbacksEnabled() const;
    bool isEnabled(CallbackLevel level);

    void before();
    void parameters(const std::vector<AbstractValue *> & values);
    void returnValue(const AbstractValue * value);
    void after();
    void unresolved();

protected:
    const char * m_name;
    ProcAddress m_address;
    bool m_initialized;
    CallbackLevel m_callbackLevel;

    static Callback s_beforeCallback;
    static Callback s_afterCallback;
    static Callback s_unresolvedCallback;

    static ParametersCallback s_parametersCallback;
    static ReturnValueCallback s_returnValueCallback;
};

} // namespace glbinding
