#include <glbinding/AbstractFunction.h>
#include <glbinding/meta.h>

#include "declarations.h"

#include <iostream>
#include <memory>
#include <set>
#include <cassert>

#include <iostream>

namespace gl {

AbstractFunction::Callback AbstractFunction::s_beforeCallback;
AbstractFunction::Callback AbstractFunction::s_afterCallback;
AbstractFunction::Callback AbstractFunction::s_invalidCallback;
AbstractFunction::ParametersCallback AbstractFunction::s_parametersCallback;
AbstractFunction::ReturnValueCallback AbstractFunction::s_returnValueCallback;

int AbstractFunction::s_context = 0;


AbstractFunction::AbstractFunction(const char * _name)
: m_name(_name)
, m_callbackLevel(CallbackLevel::None)
{
}

AbstractFunction::~AbstractFunction()
{
}

const std::vector<AbstractFunction*> & AbstractFunction::functions()
{
    return functionList;
}

void AbstractFunction::initializeFunctions(int context)
{
    for (AbstractFunction * function : functions())
    {
        function->initialize(context);
    }
}

void AbstractFunction::initialize(int context)
{
    ProcAddress _address = GetProcAddress(m_name);

    if (m_addresses.size() <= static_cast<unsigned>(context))
        m_addresses.resize(context+1);

    m_addresses[context] = _address;
}

std::vector<Extension> AbstractFunction::extensions() const
{
    return meta::getExtensionsRequiring(m_name);
}

void AbstractFunction::setContext(int context)
{
    s_context = context;
}

const char * AbstractFunction::name() const
{
    return m_name;
}

bool AbstractFunction::isValid() const
{
    return isValid(s_context);
}

bool AbstractFunction::isValid(int context) const
{
    return m_addresses[context] != nullptr;
}

ProcAddress AbstractFunction::address() const
{
    assert(m_addresses.size() >= static_cast<unsigned>(s_context));

    return m_addresses[s_context];
}

bool AbstractFunction::callbacksEnabled() const
{
    return m_callbackLevel != CallbackLevel::None;
}

bool AbstractFunction::isEnabled(CallbackLevel level)
{
    return (static_cast<unsigned char>(m_callbackLevel) & static_cast<unsigned char>(level)) == static_cast<unsigned char>(level);
}

void AbstractFunction::setCallbackLevel(CallbackLevel level)
{
    m_callbackLevel = level;
}

void AbstractFunction::setCallbackLevelForAll(CallbackLevel level)
{
    for (AbstractFunction * function : functions())
    {
        function->setCallbackLevel(level);
    }
}

void AbstractFunction::setCallbackLevelForAllExcept(CallbackLevel level, const std::set<std::string> & blackList)
{
    for (AbstractFunction * function : functions())
    {
        if (blackList.find(function->name()) == blackList.end())
        {
            function->setCallbackLevel(level);
        }
    }
}

void AbstractFunction::setBeforeCallback(Callback callback)
{
    s_beforeCallback = callback;
}

void AbstractFunction::setAfterCallback(Callback callback)
{
    s_afterCallback = callback;
}

void AbstractFunction::setInvalidCallback(Callback callback)
{
    s_invalidCallback = callback;
}

void AbstractFunction::setParametersCallback(ParametersCallback callback)
{
    s_parametersCallback = callback;
}

void AbstractFunction::setReturnValueCallback(ReturnValueCallback callback)
{
    s_returnValueCallback = callback;
}

void AbstractFunction::before()
{
    if (s_beforeCallback)
        s_beforeCallback(*this);
}

void AbstractFunction::after()
{
    if (s_afterCallback)
        s_afterCallback(*this);
}

void AbstractFunction::parameters(const std::vector<AbstractValue*> & values)
{
    if (s_parametersCallback)
        s_parametersCallback(*this, values);

    for (gl::AbstractValue * value : values)
    {
        delete value;
    }
}

void AbstractFunction::returnValue(const AbstractValue * value)
{
    if (s_returnValueCallback)
        s_returnValueCallback(*this, value);

    delete value;
}

void AbstractFunction::invalid()
{
    if (s_invalidCallback)
        s_invalidCallback(*this);
}

} // namespace gl

