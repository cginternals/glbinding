
#pragma once


namespace
{


template <typename... Arguments>
struct ValueAdder;

template <>
struct ValueAdder<>
{
    inline static void add(std::vector<std::unique_ptr<eglbinding::AbstractValue>> &)
    {
    }
};

template <typename Argument, typename... Arguments>
struct ValueAdder<Argument, Arguments...>
{
    inline static void add(std::vector<std::unique_ptr<eglbinding::AbstractValue>> & values, Argument value, Arguments&&... rest)
    {
        values.push_back(eglbinding::createValue<Argument>(value));
        ValueAdder<Arguments...>::add(values, std::forward<Arguments>(rest)...);
    }
};

template <typename... Arguments>
inline void addValuesTo(std::vector<std::unique_ptr<eglbinding::AbstractValue>> & values, Arguments&&... arguments)
{
    ValueAdder<Arguments...>::add(values, std::forward<Arguments>(arguments)...);
}


} // namespace


namespace eglbinding
{


template <typename T>
EGLBINDING_CONSTEXPR Value<T>::Value(const T & value)
: m_value(value)
{
}

template <typename T>
EGLBINDING_CONSTEXPR T Value<T>::value() const
{
    return m_value;
}


template <typename Argument>
std::unique_ptr<AbstractValue> createValue(const Argument & argument)
{
    return std::unique_ptr<Value<Argument>>(new Value<Argument>(argument));
}

template <typename... Arguments>
std::vector<std::unique_ptr<AbstractValue>> createValues(Arguments&&... arguments)
{
    auto values = std::vector<std::unique_ptr<AbstractValue>>{};
    addValuesTo(values, std::forward<Arguments>(arguments)...);
    return values;
}


} // namespace eglbinding
