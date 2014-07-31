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
    friend class Binding;
public:
    AbstractFunction();
    AbstractFunction(const char * name);
    virtual ~AbstractFunction();

    const char * name() const;

    void resolveAddress();
    bool isResolved() const;
    ProcAddress address() const;

    const std::set<gl::GLextension> & extensions() const;

    void setCallbackMask(CallbackMask mask);

public:
    static void setCallbackMaskForAll(CallbackMask mask);
    static void setCallbackMaskForAllExcept(CallbackMask mask, const std::set<std::string> & blackList);

protected:
    void setName(const char * name);

protected:
    bool isEnabled(CallbackMask mask) const;
    bool isAnyEnabled(CallbackMask mask) const;

protected:
    void unresolved() const;
    void before(const FunctionCall & call) const;
    void after(const FunctionCall & call) const;

protected:
    const char * m_name;
    ProcAddress m_address;
    bool m_initialized;
    CallbackMask m_callbackMask;
};

} // namespace glbinding
