#pragma once

#include <glbinding/glbinding_api.h>
#include <glbinding/GetProcAddress.h>

#include <set>
#include <string>
#include <functional>

namespace gl {

class GLBINDING_API AbstractFunction
{
public:
    AbstractFunction(const char * name);
    virtual ~AbstractFunction();

    void initialize();
    static void initializeFunctions();

    const char * name() const;
    bool isValid() const;

    virtual ProcAddress functionPointer() const = 0;

    static const std::set<AbstractFunction*> & functions();

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

    virtual void initializeFunctionPointer(ProcAddress functionPointer) = 0;

    bool callbacksEnabled() const;

    void before();
    void after();
};

} // namespace gl

