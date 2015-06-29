#pragma once

#include <khrapi/khrapi_api.h>

#include <khrapi/ProcAddress.h>
#include <khrapi/callbacks.h>

namespace khrapi
{

class KHRAPI_API AbstractState
{
public:
    AbstractState();
    virtual ~AbstractState() = default;

    bool isInitialized() const;

    ProcAddress address() const;

    CallbackMask callbackMask() const;
    void setCallbackMask(CallbackMask mask);

    virtual void resolve(const char * name) = 0;

    bool isResolved() const;

protected:
    khrapi::ProcAddress m_address;
    bool m_initialized;

    CallbackMask m_callbackMask;
};

} // namespace khrapi
