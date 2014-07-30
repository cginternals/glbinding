
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
, m_callbackLevel(CallbackLevel::None)
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

bool AbstractFunction::isEnabled(CallbackLevel level) const
{
    return (static_cast<unsigned char>(m_callbackLevel) & static_cast<unsigned char>(level)) == static_cast<unsigned char>(level);
}

void AbstractFunction::setCallbackLevel(CallbackLevel level)
{
    m_callbackLevel = level;
}

void AbstractFunction::setCallbackLevelForAll(CallbackLevel level)
{
    for (AbstractFunction * function : FunctionObjects::current().functions())
        function->setCallbackLevel(level);
}

void AbstractFunction::setCallbackLevelForAllExcept(CallbackLevel level, const std::set<std::string> & blackList)
{
    for (AbstractFunction * function : FunctionObjects::current().functions())
        if (blackList.find(function->name()) == blackList.end())
            function->setCallbackLevel(level);
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
