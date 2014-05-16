#include <glbinding/AbstractFunction.h>
#include <glbinding/meta.h>

#include <iostream>
#include <memory>
#include <set>
#include <cassert>

#include <iostream>

namespace gl {

namespace {

std::set<AbstractFunction*> & allFunctions()
{
    static std::set<AbstractFunction*> functions;

    return functions;
}

bool contains(const std::set<std::string> & list, const char * name)
{
    return list.find(name) != list.end();
}

}

AbstractFunction::Callback AbstractFunction::s_beforeCallback;
AbstractFunction::Callback AbstractFunction::s_afterCallback;
AbstractFunction::Callback AbstractFunction::s_invalidCallback;

int AbstractFunction::s_context = 0;


AbstractFunction::AbstractFunction(const char * _name)
: m_name(_name)
, m_callbacksEnabled(false)
, m_sendParameters(false)
{
    allFunctions().insert(this);
}

AbstractFunction::~AbstractFunction()
{
    allFunctions().erase(this);
}

const std::set<AbstractFunction*> & AbstractFunction::functions()
{
    return allFunctions();
}

std::set<Extension> AbstractFunction::extensions() const
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
    return m_callbacksEnabled || true;
}

bool AbstractFunction::sendParameters() const
{
    return m_sendParameters || true;
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

void AbstractFunction::setInvalidCallback(Callback callback)
{
    s_invalidCallback = callback;
}

void AbstractFunction::before()
{
    if (s_beforeCallback)
        s_beforeCallback(*this);
}

void AbstractFunction::before(const std::vector<AbstractValue*> & parameters)
{
    std::cout << m_name << "(";
    for (unsigned i = 0; i<parameters.size(); ++i)
    {
        parameters[i]->printOn(std::cout);
        if (i<parameters.size()-1)
            std::cout << ", ";
    }
    std::cout << ")" << std::endl;

    for (gl::AbstractValue * p : parameters)
    {
        delete p;
    }
}

void AbstractFunction::after()
{
    if (s_afterCallback)
        s_afterCallback(*this);
}

void AbstractFunction::after(AbstractValue * returnValue)
{
    std::cout << "returns ";
    if (returnValue)
        returnValue->printOn(std::cout);
    else
        std::cout << "nothing";
    std::cout << std::endl;

    delete returnValue;
}

void AbstractFunction::invalid()
{
    if (s_invalidCallback)
        s_invalidCallback(*this);
}

void AbstractFunction::initializeFunctions(int context)
{
    for (AbstractFunction * function : allFunctions())
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

} // namespace gl

