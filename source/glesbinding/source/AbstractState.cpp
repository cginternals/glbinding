
#include <glesbinding/AbstractState.h>

namespace glesbinding
{

AbstractState::AbstractState()
: m_address(nullptr)
, m_initialized(false)
, m_callbackMask(CallbackMask::None)
{
}

AbstractState::~AbstractState()
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

} // namespace glesbinding
