
#include <glbinding/AbstractFunction.h>

#include <memory>
#include <set>
#include <cassert>
#include <type_traits>

#include <glbinding/glbinding_features.h>

#include <glbinding/AbstractState.h>

#include <glbinding/Binding.h>


namespace glbinding
{


AbstractFunction::AbstractFunction(const char * _name) GLBINDING_NOEXCEPT
: m_name(_name)
{
}

AbstractFunction::~AbstractFunction() GLBINDING_NOEXCEPT
{
}

void AbstractFunction::resolveAddress() GLBINDING_NOEXCEPT
{
    auto & currentState = state();

    if (currentState.isInitialized())
    {
        return;
    }

    currentState.resolve(m_name);
}

const char * AbstractFunction::name() const GLBINDING_NOEXCEPT
{
    return m_name;
}

bool AbstractFunction::isResolved() const GLBINDING_NOEXCEPT
{
    return state().isResolved();
}

ProcAddress AbstractFunction::address() const GLBINDING_NOEXCEPT
{
    if (!state().isInitialized())
    {
        const_cast<AbstractFunction*>(this)->resolveAddress();
    }

    return state().address();
}

bool AbstractFunction::isEnabled(const CallbackMask mask) const GLBINDING_NOEXCEPT
{
    using callback_mask_t = std::underlying_type<CallbackMask>::type;
    
    return (static_cast<callback_mask_t>(state().callbackMask())
        & static_cast<callback_mask_t>(mask)) == static_cast<callback_mask_t>(mask);
}

bool AbstractFunction::isAnyEnabled(const CallbackMask mask) const GLBINDING_NOEXCEPT
{   
    using callback_mask_t = std::underlying_type<CallbackMask>::type;
    
    return (static_cast<callback_mask_t>(state().callbackMask())
        & static_cast<callback_mask_t>(mask)) != 0;
}

CallbackMask AbstractFunction::callbackMask() const GLBINDING_NOEXCEPT
{
    return state().callbackMask();
}

void AbstractFunction::setCallbackMask(const CallbackMask mask) GLBINDING_NOEXCEPT
{
    state().setCallbackMask(mask);
}

void AbstractFunction::addCallbackMask(const CallbackMask mask) GLBINDING_NOEXCEPT
{
    state().setCallbackMask(state().callbackMask() | mask);
}

void AbstractFunction::removeCallbackMask(const CallbackMask mask) GLBINDING_NOEXCEPT
{
    state().setCallbackMask(state().callbackMask() & ~mask);
}

void AbstractFunction::unresolved(const AbstractFunction * function) GLBINDING_NOEXCEPT
{
    Binding::unresolved(function);
}

void AbstractFunction::before(const FunctionCall & call) GLBINDING_NOEXCEPT
{
    Binding::before(call);
}

void AbstractFunction::after(const FunctionCall & call) GLBINDING_NOEXCEPT
{
    Binding::after(call);
}

void AbstractFunction::log(FunctionCall && call) GLBINDING_NOEXCEPT
{
    Binding::log(std::move(call));
}

int AbstractFunction::currentPos() GLBINDING_NOEXCEPT
{
    return Binding::currentPos();
}

int AbstractFunction::maxPos() GLBINDING_NOEXCEPT
{
    return Binding::maxPos();
}


} // namespace glbinding