#pragma once

#include "Function.h"

#include <cassert>
#include <utility>

#include "ProcedureAddressResolution.h"

namespace {

//template <typename Function, typename... Arguments>
//auto call(Function function, Arguments... arguments);

}

namespace gl {

template <typename ReturnType, typename... Arguments>
Function<ReturnType, Arguments...>::Function(const char * name)
: AbstractFunction(name)
, m_functionPointer(nullptr)
{
}

template <typename ReturnType, typename... Arguments>
void Function<ReturnType, Arguments...>::initializeFunctionPointer(FunctionPointer functionPointer)
{
    m_functionPointer = reinterpret_cast<Signature>(functionPointer);
}

template <typename ReturnType, typename... Arguments>
ReturnType Function<ReturnType, Arguments...>::operator()(Arguments... arguments)
{
    assert(m_valid);

    return m_functionPointer(std::forward<Arguments>(arguments)...);
}


/*template <typename... Arguments>
Function<void, Arguments...>::Function(const char* name)
: m_name(name)
, m_valid(false)
{
}

template <typename... Arguments>
void Function<void, Arguments...>::setFunction(FunctionSignature functionPointer)
{
    m_valid = true;

    m_functionPointer = functionPointer;
}

template <typename... Arguments>
void Function<void, Arguments...>::initialize()
{
    setFunction(reinterpret_cast<FunctionSignature>(getProcAddress(m_name)));
}

template <typename... Arguments>
void Function<void, Arguments...>::operator()(Arguments... arguments)
{
    assert(m_valid);

    m_functionPointer(std::forward<Arguments>(arguments)...);
}*/

} // namespace gl
