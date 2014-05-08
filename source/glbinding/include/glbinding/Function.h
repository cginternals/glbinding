#pragma once

#include <glbinding/AbstractFunction.h>

namespace gl {

template <typename ReturnType, typename... Arguments>
class Function : public AbstractFunction
{
public:
    using Signature = ReturnType (*) (Arguments...);

    Function(const char * name);

    virtual ProcAddress functionPointer() const override;

    ReturnType operator()(Arguments... arguments);
protected:
    Signature m_functionPointer;

    virtual void initializeFunctionPointer(ProcAddress functionPointer) override;
};

} // namespace gl

#include <glbinding/Function.hpp>
