
#pragma once


namespace
{


template <typename... Arguments>
struct ValueAdder;

template <>
struct ValueAdder<>
{
    inline static void add(std::vector<std::unique_ptr<glbinding::AbstractValue>> &) GLBINDING_NOEXCEPT
    {
    }
};

template <typename Argument, typename... Arguments>
struct ValueAdder<Argument, Arguments...>
{
    inline static void add(std::vector<std::unique_ptr<glbinding::AbstractValue>> & values, Argument value, Arguments&&... rest) GLBINDING_NOEXCEPT
    {
        values.push_back(glbinding::createValue<Argument>(value));
        ValueAdder<Arguments...>::add(values, std::forward<Arguments>(rest)...);
    }
};

template <typename... Arguments>
inline void addValuesTo(std::vector<std::unique_ptr<glbinding::AbstractValue>> & values, Arguments&&... arguments) GLBINDING_NOEXCEPT
{
    ValueAdder<Arguments...>::add(values, std::forward<Arguments>(arguments)...);
}


} // namespace


namespace glbinding
{


template <typename T>
GLBINDING_CONSTEXPR Value<T>::Value(const T & value) GLBINDING_NOEXCEPT
: m_value(value)
{
}

template <typename T>
GLBINDING_CONSTEXPR T Value<T>::value() const GLBINDING_NOEXCEPT
{
    return m_value;
}


template <typename Argument>
std::unique_ptr<AbstractValue> createValue(const Argument & argument) GLBINDING_NOEXCEPT
{
    return std::unique_ptr<Value<Argument>>(new Value<Argument>(argument));
}

template <typename... Arguments>
std::vector<std::unique_ptr<AbstractValue>> createValues(Arguments&&... arguments) GLBINDING_NOEXCEPT
{
    auto values = std::vector<std::unique_ptr<AbstractValue>>{};
    addValuesTo(values, std::forward<Arguments>(arguments)...);
    return values;
}


} // namespace glbinding