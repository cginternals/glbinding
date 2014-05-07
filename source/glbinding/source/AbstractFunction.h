#pragma once

#include "ProcedureAddressResolution.h"

#include <set>
#include <functional>

namespace gl {

class AbstractFunction
{
public:
    using Callback = std::function<void(const AbstractFunction &)>;

    AbstractFunction(const char * name);
    virtual ~AbstractFunction();

    const char * name() const;
    bool isValid() const;

    static void initializeFunctions();

protected:
    const char * m_name;
    bool m_valid;
    bool m_useCallbacks;

    void initialize();
    virtual void initializeFunctionPointer(FunctionPointer functionPointer) = 0;

    bool useCallbacks() const;

    void before();
    void after();
};

} // namespace gl

