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

AbstractFunction::AbstractFunction(const char * name)
: m_name(name)
, m_valid(false)
{
    functions().insert(this);
}

AbstractFunction::~AbstractFunction()
{
    functions().erase(this);
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

