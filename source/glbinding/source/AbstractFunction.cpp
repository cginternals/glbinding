
#include <glbinding/AbstractFunction.h>

#include <iostream>
#include <memory>
#include <set>
#include <cassert>

#include <glbinding/Meta.h>

namespace gl 
{

AbstractFunction::Callback AbstractFunction::s_beforeCallback;
AbstractFunction::Callback AbstractFunction::s_afterCallback;
AbstractFunction::Callback AbstractFunction::s_unresolvedCallback;
AbstractFunction::ParametersCallback AbstractFunction::s_parametersCallback;
AbstractFunction::ReturnValueCallback AbstractFunction::s_returnValueCallback;

int AbstractFunction::s_context = 0;


AbstractFunction::AbstractFunction(const char * _name)
: m_name(_name)
, m_callbackLevel(CallbackLevel::None)
{
}

AbstractFunction::State::State()
: address(nullptr)
, initialized(false)
{
}

AbstractFunction::~AbstractFunction()
{
}

const std::vector<AbstractFunction *> & AbstractFunction::functions()
{
    return s_functions;
}

bool AbstractFunction::hasState() const
{
    return hasState(s_context);
}

bool AbstractFunction::hasState(int context) const
{
    return m_states.size() < static_cast<unsigned>(context);
}

AbstractFunction::State & AbstractFunction::getState(int context) const
{
    if (m_states.size() <= static_cast<unsigned>(context))
        m_states.resize(context+1);

    return m_states[context];
}

AbstractFunction::State & AbstractFunction::currentState() const
{
    return getState(s_context);
}

void AbstractFunction::initializeFunctions()
{
    initializeFunctions(s_context);
}

void AbstractFunction::initializeFunctions(int context)
{
    for (AbstractFunction * function : functions())
    {
        function->initialize(context);
    }
}

void AbstractFunction::initialize()
{
    initialize(s_context);
}

void AbstractFunction::initialize(int context)
{
    State & state = getState(context);

    if (!state.initialized)
    {
        state.address = GetProcAddress(m_name);
        state.initialized = true;
    }
}

std::vector<Extension> AbstractFunction::extensions() const
{
    return Meta::getExtensionsRequiring(m_name);
}

void AbstractFunction::setContext(int context)
{
    s_context = context;
}

const char * AbstractFunction::name() const
{
    return m_name;
}

bool AbstractFunction::isResolved() const
{
    return isResolved(s_context);
}

bool AbstractFunction::isResolved(int context) const
{
    if (!hasState(context))
        return false;

    return currentState().address != nullptr;
}

ProcAddress AbstractFunction::address() const
{
    const State & state = currentState();

    if (!state.initialized)
        const_cast<AbstractFunction*>(this)->initialize();

    return state.address;
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

void AbstractFunction::setUnresolvedCallback(Callback callback)
{
    s_unresolvedCallback = callback;
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
    {
        s_beforeCallback(*this);
    }
}

void AbstractFunction::after()
{
    if (s_afterCallback)
    {
        s_afterCallback(*this);
    }
}

void AbstractFunction::parameters(const std::vector<AbstractValue*> & values)
{
    if (s_parametersCallback)
    {
        s_parametersCallback(*this, values);
    }

    for (gl::AbstractValue * value : values)
    {
        delete value;
    }
}

void AbstractFunction::returnValue(const AbstractValue * value)
{
    if (s_returnValueCallback)
    {
        s_returnValueCallback(*this, value);
    }

    delete value;
}

void AbstractFunction::unresolved()
{
    if (s_unresolvedCallback)
    {
        s_unresolvedCallback(*this);
    }
}

} // namespace gl
