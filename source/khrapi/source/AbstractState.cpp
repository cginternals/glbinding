#include <khrapi/AbstractState.h>

namespace khrapi
{

AbstractState::AbstractState()
: m_address{nullptr}
, m_initialized{false}
, m_callbackMask{CallbackMask::None}
{
}

ProcAddress AbstractState::address() const
{
    if (!m_initialized)
    {
        return nullptr;
    }

    return m_address;
}

bool AbstractState::isInitialized() const
{
    return m_initialized;
}

bool AbstractState::isResolved() const
{
    return m_address != nullptr;
}

CallbackMask AbstractState::callbackMask() const
{
    return m_callbackMask;
}

void AbstractState::setCallbackMask(CallbackMask mask)
{
    m_callbackMask = mask;
}

} // namespace khrapi
