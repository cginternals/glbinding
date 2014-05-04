#pragma once

#include "Function.h"

#include <cassert>
#include <utility>

#include <glbinding/Error.h>

#include "ProcedureAddressResolution.h"

namespace glbinding {

template <typename ReturnType, typename... Arguments>
BasicFunction<ReturnType, Arguments...>::BasicFunction(const char* name)
: m_name(name)
, m_valid(false)
{
}

template <typename ReturnType, typename... Arguments>
void BasicFunction<ReturnType, Arguments...>::setFunction(FunctionSignature functionPointer)
{
    m_valid = true;

    m_functionPointer = functionPointer;
}

template <typename ReturnType, typename... Arguments>
void BasicFunction<ReturnType, Arguments...>::initialize()
{
    setFunction(reinterpret_cast<FunctionSignature>(getProcAddress(m_name)));
}

template <typename ReturnType, typename... Arguments>
ReturnType BasicFunction<ReturnType, Arguments...>::operator()(Arguments... arguments)
{
    assert(m_valid);

    ReturnType returnValue = m_functionPointer(std::forward<Arguments>(arguments)...);

    return returnValue;
}


template <typename... Arguments>
BasicFunction<void, Arguments...>::BasicFunction(const char* name)
: m_name(name)
, m_valid(false)
{
}

template <typename... Arguments>
void BasicFunction<void, Arguments...>::setFunction(FunctionSignature functionPointer)
{
    m_valid = true;

    m_functionPointer = functionPointer;
}

template <typename... Arguments>
void BasicFunction<void, Arguments...>::initialize()
{
    setFunction(reinterpret_cast<FunctionSignature>(getProcAddress(m_name)));
}

template <typename... Arguments>
void BasicFunction<void, Arguments...>::operator()(Arguments... arguments)
{
    assert(m_valid);

    m_functionPointer(std::forward<Arguments>(arguments)...);
}


template <typename ReturnType, typename... Arguments>
Function<ReturnType, Arguments...>::Function(const char* name)
: m_name(name)
, m_valid(false)
{
}

template <typename ReturnType, typename... Arguments>
void Function<ReturnType, Arguments...>::setFunction(FunctionSignature functionPointer)
{
    m_valid = true;

    m_functionPointer = functionPointer;
}

template <typename ReturnType, typename... Arguments>
void Function<ReturnType, Arguments...>::initialize()
{
    setFunction(reinterpret_cast<FunctionSignature>(getProcAddress(m_name)));
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
    CheckError();
}

} // namespace glbinding
