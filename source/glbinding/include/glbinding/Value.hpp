#pragma once

namespace 
{

void addValuesTo(std::vector<gl::AbstractValue*> &)
{
}

template <typename Argument, typename... Arguments>
void addValuesTo(std::vector<gl::AbstractValue*> & values, Argument value, Arguments... rest)
{
    values.push_back(gl::createValue<Argument>(value));
    addValuesTo(values, std::forward<Arguments>(rest)...);
}

}

namespace gl 
{

template <typename T>
Value<T>::Value(T _value)
: value(_value)
{
}

template <typename T>
void Value<T>::printOn(std::ostream & stream) const
{
    stream.operator<<(value);
}

template <typename Argument>
AbstractValue * createValue(Argument argument)
{
    return new Value<Argument>(argument);
}

template <typename... Arguments>
std::vector<AbstractValue*> createValues(Arguments... arguments)
{
    std::vector<gl::AbstractValue*> values;
    addValuesTo(values, std::forward<Arguments>(arguments)...);
    return values;
}

} // namespace gl
