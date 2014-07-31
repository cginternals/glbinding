
#include <glbinding/AbstractFunction.h>

#include <iostream>
#include <memory>
#include <set>
#include <cassert>

#include <glbinding/FunctionObjects.h>
#include <glbinding/Meta.h>

#include "callbacks_private.h"

namespace glbinding 
{

AbstractFunction::AbstractFunction(const char * _name)
: m_name(_name)
, m_address(nullptr)
, m_initialized(false)
, m_callbackMask(CallbackMask::None)
{
}

AbstractFunction::~AbstractFunction()
{
}


void AbstractFunction::resolveAddress()
{
    if (!m_initialized)
    {
        m_address = getProcAddress(m_name);
        m_initialized = true;
    }
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
    return m_address != nullptr;
}

ProcAddress AbstractFunction::address() const
{
    if (!m_initialized)
        const_cast<AbstractFunction*>(this)->resolveAddress();

    return m_address;
}

bool AbstractFunction::isEnabled(CallbackMask mask) const
{
    return (static_cast<unsigned int>(m_callbackMask) & static_cast<unsigned int>(mask)) == static_cast<unsigned int>(mask);
}

bool AbstractFunction::isAnyEnabled(CallbackMask mask) const
{
    return (static_cast<unsigned int>(m_callbackMask) ^ static_cast<unsigned int>(mask)) != 0;
}

void AbstractFunction::setCallbackMask(CallbackMask mask)
{
    m_callbackMask = mask;
}

void AbstractFunction::setCallbackMaskForAll(CallbackMask mask)
{
    for (AbstractFunction * function : FunctionObjects::current().functions())
        function->setCallbackMask(mask);
}

void AbstractFunction::setCallbackMaskForAllExcept(CallbackMask mask, const std::set<std::string> & blackList)
{
    for (AbstractFunction * function : FunctionObjects::current().functions())
        if (blackList.find(function->name()) == blackList.end())
            function->setCallbackMask(mask);
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
