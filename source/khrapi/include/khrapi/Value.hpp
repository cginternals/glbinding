#pragma once

#include <khrapi/Value.h>

#include <iostream>

namespace khrapi 
{

template <typename... Arguments>
struct ValueAdder;

template <>
struct ValueAdder<>
{
    static void add(std::vector<AbstractValue*> &)
    {
    }
};

template <typename Argument, typename... Arguments>
struct ValueAdder<Argument, Arguments...>
{
    static void add(std::vector<AbstractValue*> & values, Argument value, Arguments&&... rest)
    {
        values.push_back(createValue<Argument>(value));
        ValueAdder<Arguments...>::add(values, std::forward<Arguments>(rest)...);
    }
};

template <typename... Arguments>
void addValuesTo(std::vector<AbstractValue*> & values, Arguments&&... arguments)
{
    ValueAdder<Arguments...>::add(values, std::forward<Arguments>(arguments)...);
}


template <typename T>
Value<T>::Value(const T & _value)
: value(_value)
{
}

template <typename T>
void Value<T>::printOn(std::ostream & stream) const
{
    stream << value;
}

template <typename Argument>
AbstractValue * createValue(Argument argument)
{
    return new Value<Argument>(argument);
}

template <typename... Arguments>
std::vector<AbstractValue*> createValues(Arguments&&... arguments)
{
    auto values = std::vector<AbstractValue*>{};
    addValuesTo(values, std::forward<Arguments>(arguments)...);
    return values;
}

} // namespace khrapi
