#include "AbstractFunction.h"

#include <iostream>

namespace gl {

namespace {

std::set<AbstractFunction*> * g_functions = nullptr;

std::set<AbstractFunction*> & functions()
{
    if (!g_functions)
        g_functions = new std::set<AbstractFunction*>();

    return *g_functions;
}

}

AbstractFunction::AbstractFunction(const char * _name)
: m_name(_name)
, m_valid(false)
, m_useCallbacks(false)
{
    m_useCallbacks = true;
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

bool AbstractFunction::useCallbacks() const
{
    return m_useCallbacks;
}

void AbstractFunction::before()
{
    //std::cout << "before " << name() << std::endl;
}

void AbstractFunction::after()
{
    std::cout << "after " << name() << std::endl;
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
    FunctionPointer function = getProcAddress(m_name);

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

