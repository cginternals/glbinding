#pragma once

#include "ProcedureAddressResolution.h"

#include <set>

namespace gl {

class AbstractFunction
{
public:
    AbstractFunction(const char * name);
    virtual ~AbstractFunction();

    static void initializeFunctions();
protected:
    const char * m_name;
    bool m_valid;

    void initialize();
    virtual void initializeFunctionPointer(FunctionPointer functionPointer) = 0;
};

} // namespace gl

