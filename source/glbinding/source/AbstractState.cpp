
#include <glbinding/AbstractState.h>

namespace glbinding
{

AbstractState::AbstractState() GLBINDING_NOEXCEPT
: m_address(nullptr)
, m_initialized(false)
, m_callbackMask(CallbackMask::None)
{
}

AbstractState::~AbstractState() GLBINDING_NOEXCEPT
{
}

ProcAddress AbstractState::address() const GLBINDING_NOEXCEPT
{
    if (!m_initialized)
    {
        return nullptr;
    }

    return m_address;
}

bool AbstractState::isInitialized() const GLBINDING_NOEXCEPT
{
    return m_initialized;
}

bool AbstractState::isResolved() const GLBINDING_NOEXCEPT
{
    return m_address != nullptr;
}

CallbackMask AbstractState::callbackMask() const GLBINDING_NOEXCEPT
{
    return m_callbackMask;
}

void AbstractState::setCallbackMask(CallbackMask mask) GLBINDING_NOEXCEPT
{
    m_callbackMask = mask;
}

} // namespace glbinding