
#include <glesbinding/AbstractFunction.h>

#include <memory>
#include <set>
#include <cassert>
#include <type_traits>

#include <glesbinding/glesbinding_features.h>

#include <glesbinding/AbstractState.h>

#include <glesbinding/Binding.h>


namespace glesbinding
{


AbstractFunction::AbstractFunction(const char * _name)
: m_name(_name)
{
}

AbstractFunction::~AbstractFunction()
{
}

void AbstractFunction::resolveAddress()
{
    auto & currentState = state();

    if (currentState.isInitialized())
    {
        return;
    }

    currentState.resolve(m_name);
}

const char * AbstractFunction::name() const
{
    return m_name;
}

bool AbstractFunction::isResolved() const
{
    return state().isResolved();
}

ProcAddress AbstractFunction::address() const
{
    if (!state().isInitialized())
    {
        const_cast<AbstractFunction*>(this)->resolveAddress();
    }

    return state().address();
}

bool AbstractFunction::isEnabled(const CallbackMask mask) const
{
    using callback_mask_t = std::underlying_type<CallbackMask>::type;
    
    return (static_cast<callback_mask_t>(state().callbackMask())
        & static_cast<callback_mask_t>(mask)) == static_cast<callback_mask_t>(mask);
}

bool AbstractFunction::isAnyEnabled(const CallbackMask mask) const
{   
    using callback_mask_t = std::underlying_type<CallbackMask>::type;
    
    return (static_cast<callback_mask_t>(state().callbackMask())
        & static_cast<callback_mask_t>(mask)) != 0;
}

CallbackMask AbstractFunction::callbackMask() const
{
    return state().callbackMask();
}

void AbstractFunction::setCallbackMask(const CallbackMask mask)
{
    state().setCallbackMask(mask);
}

void AbstractFunction::addCallbackMask(const CallbackMask mask)
{
    state().setCallbackMask(state().callbackMask() | mask);
}

void AbstractFunction::removeCallbackMask(const CallbackMask mask)
{
    state().setCallbackMask(state().callbackMask() & ~mask);
}

void AbstractFunction::unresolved(const AbstractFunction * function)
{
    Binding::unresolved(function);
}

void AbstractFunction::before(const FunctionCall & call)
{
    Binding::before(call);
}

void AbstractFunction::after(const FunctionCall & call)
{
    Binding::after(call);
}

void AbstractFunction::log(FunctionCall && call)
{
    Binding::log(std::move(call));
}

int AbstractFunction::currentPos()
{
    return Binding::currentPos();
}

int AbstractFunction::maxPos()
{
    return Binding::maxPos();
}


} // namespace glesbinding
