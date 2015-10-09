#pragma once

#include <khrapi/khrapi_api.h>

#include <string>
#include <set>
#include <vector>

#include <khrapi/ProcAddress.h>
#include <khrapi/AbstractState.h>
#include <khrapi/callbacks.h>

namespace khrapi
{

class KHRAPI_API AbstractFunction
{
public:
    AbstractFunction(const char * name);
    virtual ~AbstractFunction();

    const char * name() const;

    void resolveAddress();
    bool isResolved() const;

    ProcAddress address() const;

    virtual void resizeStates(int pos) = 0;

    virtual bool hasState() const = 0;
    virtual bool hasState(int pos) const = 0;

    virtual AbstractState & state() const = 0;
    virtual AbstractState & state(int pos) const = 0;

public:
    CallbackMask callbackMask() const;
    void setCallbackMask(CallbackMask mask);
    void addCallbackMask(CallbackMask mask);
    void removeCallbackMask(CallbackMask mask);

protected:
    bool isEnabled(CallbackMask mask) const;
    bool isAnyEnabled(CallbackMask mask) const;

protected:
    const char * m_name;
};

} // namespace khrapi
