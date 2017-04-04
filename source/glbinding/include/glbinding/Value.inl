
#pragma once


#include <ostream>


namespace
{


template <typename... Arguments>
struct ValueAdder;

template <>
struct ValueAdder<>
{
    inline static void add(std::vector<glbinding::AbstractValue*> &)
    {
    }
};

template <typename Argument, typename... Arguments>
struct ValueAdder<Argument, Arguments...>
{
    inline static void add(std::vector<glbinding::AbstractValue*> & values, Argument value, Arguments&&... rest)
    {
        values.push_back(glbinding::createValue<Argument>(value));
        ValueAdder<Arguments...>::add(values, std::forward<Arguments>(rest)...);
    }
};

template <typename... Arguments>
inline void addValuesTo(std::vector<glbinding::AbstractValue*> & values, Arguments&&... arguments)
{
    ValueAdder<Arguments...>::add(values, std::forward<Arguments>(arguments)...);
}


} // namespace


namespace glbinding 
{


template <typename T>
GLBINDING_CONSTEXPR Value<T>::Value(const T & _value)
: value(_value)
{
}

template <typename T>
void Value<T>::printOn(std::ostream & stream) const
{
    stream << value;
}

template <typename Argument>
AbstractValue * createValue(const Argument & argument)
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


} // namespace glbinding
