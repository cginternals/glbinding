#include <glbinding/AbstractFunction.h>

#include <iostream>
#include <memory>
#include <set>

namespace gl {

namespace {

std::unique_ptr<std::set<AbstractFunction*>> g_functions;

std::set<AbstractFunction*> & functions()
{
    if (!g_functions)
    {
        g_functions.reset(new std::set<AbstractFunction*>());
    }

    return *g_functions;
}

bool contains(const std::set<std::string> & list, const char * name)
{
    return list.find(name) != list.end();
}

}

AbstractFunction::Callback AbstractFunction::s_beforeCallback;
AbstractFunction::Callback AbstractFunction::s_afterCallback;

AbstractFunction::AbstractFunction(const char * _name)
: m_name(_name)
, m_valid(false)
, m_callbacksEnabled(false)
{
    functions().insert(this);
}

AbstractFunction::~AbstractFunction()
{
    functions().erase(this);
}

const char * AbstractFunction::name() const
{
    return m_name;
}

bool AbstractFunction::isValid() const
{
    return m_valid;
}

bool AbstractFunction::callbacksEnabled() const
{
    return m_callbacksEnabled;
}

void AbstractFunction::enableCallbacks()
{
    m_callbacksEnabled = true;
}

void AbstractFunction::disableCallbacks()
{
    m_callbacksEnabled = false;
}

void AbstractFunction::enableCallbacksForAll()
{
    for (AbstractFunction * function : functions())
    {
        function->enableCallbacks();
    }
}

void AbstractFunction::enableCallbacksForAllExcept(const std::set<std::string> & blackList)
{
    for (AbstractFunction * function : functions())
    {
        if (!contains(blackList, function->name()))
        {
            function->enableCallbacks();
        }
    }
}

void AbstractFunction::disableCallbacksForAll()
{
    for (AbstractFunction * function : functions())
    {
        function->disableCallbacks();
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

void AbstractFunction::initializeFunctions()
{
    for (AbstractFunction * function : functions())
    {
        function->initialize();
    }
}

void AbstractFunction::initialize()
{
    ProcAddress function = GetProcAddress(m_name);

    if (function)
    {
        initializeFunctionPointer(function);
        m_valid = true;
    }
    else
    {
        std::cout << "Could not initialize " << m_name << std::endl;
    }
}

} // namespace gl

