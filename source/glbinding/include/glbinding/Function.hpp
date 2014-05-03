#pragma once

#include <glbinding/Function.h>

#include <cassert>
#include <utility>

#include <glbinding/Error.h>

namespace glbinding {

template <typename ReturnType, typename... Arguments>
Function<ReturnType, Arguments...>::Function()
: m_valid(false)
{
}

template <typename ReturnType, typename... Arguments>
Function<ReturnType, Arguments...>::Function(FunctionSignature functionPointer)
: m_functionPointer(functionPointer)
, m_valid(true)
{
}

template <typename ReturnType, typename... Arguments>
void Function<ReturnType, Arguments...>::setFunction(FunctionSignature functionPointer)
{
    m_valid = true;

    m_functionPointer = functionPointer;
}

template <typename ReturnType, typename... Arguments>
ReturnType Function<ReturnType, Arguments...>::operator()(Arguments... arguments)
{
    assert(m_valid);

    ReturnType returnValue = m_functionPointer(std::forward<Arguments>(arguments)...);
    CheckError();

    return returnValue;
}


template <typename... Arguments>
Function<void, Arguments...>::Function()
: m_valid(false)
{
}

template <typename... Arguments>
Function<void, Arguments...>::Function(FunctionSignature functionPointer)
: m_functionPointer(functionPointer)
, m_valid(true)
{
}

template <typename... Arguments>
void Function<void, Arguments...>::setFunction(FunctionSignature functionPointer)
{
    m_valid = true;

    m_functionPointer = functionPointer;
}

template <typename... Arguments>
void Function<void, Arguments...>::operator()(Arguments... arguments)
{
    assert(m_valid);

    m_functionPointer(std::forward<Arguments>(arguments)...);
    CheckError();
}

} // namespace glbinding
