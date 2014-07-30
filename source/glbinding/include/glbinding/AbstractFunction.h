#pragma once

#include <glbinding/glbinding_api.h>

#include <string>
#include <set>
#include <vector>

#include <glbinding/ProcAddress.h>
#include <glbinding/callbacks.h>

#include <glbinding/gl/types.h>


namespace glbinding 
{

class GLBINDING_API AbstractFunction
{
public:
    AbstractFunction(const char * name);
    virtual ~AbstractFunction();

    const char * name() const;

    void resolveAddress();
    bool isResolved() const;
    ProcAddress address() const;

    const std::set<gl::GLextension> & extensions() const;

    void setCallbackLevel(CallbackLevel level);

public:
    static void setCallbackLevelForAll(CallbackLevel level);
    static void setCallbackLevelForAllExcept(CallbackLevel level, const std::set<std::string> & blackList);

protected:
    bool isEnabled(CallbackLevel level) const;

protected:
    void unresolved() const;
    void before(const FunctionCall & call) const;
    void after(const FunctionCall & call) const;

protected:
    const char * m_name;
    ProcAddress m_address;
    bool m_initialized;
    CallbackLevel m_callbackLevel;
};

} // namespace glbinding
