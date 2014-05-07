#pragma once

#include "ProcedureAddressResolution.h"

#include <set>
#include <string>
#include <functional>

namespace gl {

class AbstractFunction
{
public:
    AbstractFunction(const char * name);
    virtual ~AbstractFunction();

    void initialize();
    static void initializeFunctions();

    const char * name() const;
    bool isValid() const;

    void enableCallbacks();
    void disableCallbacks();

    static void enableCallbacksForAll();
    static void disableCallbacksForAll();
    static void enableCallbacksForAllExcept(const std::set<std::string> & blackList);

    using Callback = std::function<void(const AbstractFunction &)>;
    static void setBeforeCallback(Callback callback);
    static void setAfterCallback(Callback callback);
protected:
    const char * m_name;
    bool m_valid;
    bool m_callbacksEnabled;

    static Callback s_beforeCallback;
    static Callback s_afterCallback;

    virtual void initializeFunctionPointer(FunctionPointer functionPointer) = 0;

    bool callbacksEnabled() const;

    void before();
    void after();
};

} // namespace gl

