#pragma once

#include <glbinding/AbstractFunction.h>

namespace 
{
    template <typename ReturnType, typename... Arguments> struct FunctionHelper;
}

namespace glbinding 
{

template <typename ReturnType, typename... Arguments>
class Function : public AbstractFunction
{
    friend struct FunctionHelper<ReturnType, Arguments...>;
public:
    using Signature = ReturnType (*) (Arguments...);

    Function(const char * name);

    ReturnType operator()(Arguments... arguments) const;
};

} // namespace glbinding

#include <glbinding/Function.hpp>
