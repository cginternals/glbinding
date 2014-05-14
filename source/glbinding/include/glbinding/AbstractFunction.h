#pragma once

#include <glbinding/glbinding_api.h>
#include <glbinding/GetProcAddress.h>
#include <glbinding/Extension.h>
#include <glbinding/Parameter.h>

#include <set>
#include <string>
#include <vector>
#include <functional>

namespace gl {

class GLBINDING_API AbstractFunction
{
public:
    AbstractFunction(const char * name);
    virtual ~AbstractFunction();

    void initialize(int context);
    static void initializeFunctions(int context);

    const char * name() const;
    bool isValid() const;
    bool isValid(int context) const;

    ProcAddress address() const;

    std::set<Extension> extensions() const;

    static const std::set<AbstractFunction*> & functions();

    static void setContext(int context);

    void enableCallbacks();
    void disableCallbacks();

    static void enableCallbacksForAll();
    static void disableCallbacksForAll();
    static void enableCallbacksForAllExcept(const std::set<std::string> & blackList);

    using Callback = std::function<void(const AbstractFunction &)>;
    static void setBeforeCallback(Callback callback);
    static void setAfterCallback(Callback callback);
    static void setInvalidCallback(Callback callback);
protected:
    const char * m_name;
    bool m_callbacksEnabled;
    bool m_sendParameters;
    std::vector<ProcAddress> m_addresses;

    static int s_context;

    static Callback s_beforeCallback;
    static Callback s_afterCallback;
    static Callback s_invalidCallback;

    bool callbacksEnabled() const;
    bool sendParameters() const;

    void before();
    void before(const std::vector<AbstractParameter*> & parameters);
    void after();
    void invalid();
};

} // namespace gl

