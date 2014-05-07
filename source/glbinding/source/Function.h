#pragma once

#include "AbstractFunction.h"

namespace gl {

template <typename ReturnType, typename... Arguments>
class Function : public AbstractFunction
{
public:
    using Signature = ReturnType (*) (Arguments...);

    Function(const char * name);

    ReturnType operator()(Arguments... arguments);
protected:
    Signature m_functionPointer;

    virtual void initializeFunctionPointer(FunctionPointer functionPointer) override;
};

} // namespace gl

#include "Function.hpp"
