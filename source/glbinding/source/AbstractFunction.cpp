
#include <glbinding/AbstractFunction.h>

#include <iostream>
#include <memory>
#include <set>
#include <cassert>

#include <glbinding/Binding.h>
#include <glbinding/Meta.h>

#include "callbacks_private.h"
#include "thread_local.h"


namespace glbinding 
{

namespace
{
THREAD_LOCAL int g_pos = -1;
}

int AbstractFunction::s_maxpos = -1;


AbstractFunction::State::State()
: address(nullptr)
, initialized(false)
, callbackMask(CallbackMask::None)
{
}

inline bool AbstractFunction::hasState() const
{
    return hasState(g_pos);
}

inline bool AbstractFunction::hasState(const int pos) const
{
    return pos > -1 && s_maxpos <= pos;
}

inline AbstractFunction::State & AbstractFunction::state() const
{
    return state(g_pos);
}

inline AbstractFunction::State & AbstractFunction::state(const int pos) const
{
    assert(s_maxpos <= pos);
    assert(pos > -1);

    return m_states[pos];
}

void AbstractFunction::provideState(const int pos)
{
    assert(pos > -1);

    // if a state at pos exists, it is assumed to be neglected before
    if (s_maxpos < pos)
    {
        for (AbstractFunction * function : Binding::functions())
            function->m_states.resize(static_cast<std::size_t>(pos + 1));

        s_maxpos = pos;
    }
}

void AbstractFunction::neglectState(const int pos)
{
    assert(pos <= s_maxpos);
    assert(pos > -1);

    if (pos == s_maxpos)
    {
        for (AbstractFunction * function : Binding::functions())
            function->m_states.resize(static_cast<std::size_t>(pos - 1));

        --s_maxpos;
    }
    else
        for (AbstractFunction * function : Binding::functions())
            function->m_states[pos] = State();

    if (pos == g_pos)
        g_pos = -1;
}

void AbstractFunction::setStatePos(const int pos)
{
    g_pos = pos;
}


AbstractFunction::AbstractFunction(const char * _name)
: m_name(_name)
{
}

AbstractFunction::~AbstractFunction()
{
}

void AbstractFunction::resolveAddress()
{
    if (state().initialized)
        return;

    state().address = getProcAddress(m_name);
    state().initialized = true;
}

const std::set<gl::GLextension> & AbstractFunction::extensions() const
{
    return Meta::getExtensionsRequiring(m_name);
}

const char * AbstractFunction::name() const
{
    return m_name;
}

bool AbstractFunction::isResolved() const
{
    return state().address != nullptr;
}

ProcAddress AbstractFunction::address() const
{
    if (!state().initialized)
        const_cast<AbstractFunction*>(this)->resolveAddress();

    return state().address;
}


bool AbstractFunction::isEnabled(CallbackMask mask) const
{
    return (static_cast<unsigned int>(state().callbackMask) 
        & static_cast<unsigned int>(mask)) == static_cast<unsigned int>(mask);
}

bool AbstractFunction::isAnyEnabled(CallbackMask mask) const
{
    return (static_cast<unsigned int>(state().callbackMask) 
        ^ static_cast<unsigned int>(mask)) != 0;
}

void AbstractFunction::setCallbackMask(CallbackMask mask)
{
    state().callbackMask = mask;
}


void AbstractFunction::unresolved() const
{
    glbinding::unresolved(this);
}

void AbstractFunction::before(const FunctionCall & call) const
{
    glbinding::before(call);
}
void AbstractFunction::after(const FunctionCall & call) const
{
    glbinding::after(call);
}

} // namespace glbinding
