#pragma once

#include <type_traits>

namespace glbinding 
{

template <typename... Types>
class SharedBitfield;

// intersection

template<typename T, typename... Types>
struct is_member_of_SharedBitfield
{
	static const bool value = false;
};

template<typename T, typename U, typename... Types>
struct is_member_of_SharedBitfield<T, U, Types...>
{
    static const bool value = std::conditional<std::is_same<T, U>::value, std::true_type, is_member_of_SharedBitfield<T, Types...>>::type::value;
};

template<typename, typename>
struct prepend_to_SharedBitfield
{};

template<typename T, typename... Types>
struct prepend_to_SharedBitfield<T, SharedBitfield<Types...>>
{
    using type = SharedBitfield<T, Types...>;
};

template<typename, typename>
struct intersect_SharedBitfield
{
    using type = SharedBitfield<>;
};

template<typename T, typename... Types, typename... OtherTypes>
struct intersect_SharedBitfield<SharedBitfield<T, Types...>, SharedBitfield<OtherTypes...>>
{
    using type = typename std::conditional<!is_member_of_SharedBitfield<T, OtherTypes...>::value, typename intersect_SharedBitfield<SharedBitfield<Types...>, SharedBitfield<OtherTypes...>>::type, typename prepend_to_SharedBitfield<T, typename intersect_SharedBitfield<SharedBitfield<Types...>, SharedBitfield<OtherTypes...>>::type>::type>::type;
};

// implementation

template <typename T>
class SharedBitfieldBase
{
public:
	SharedBitfieldBase(T value) : m_value(value) {}
		
	explicit operator T() const { return m_value; }
protected:
	T m_value;
};

template <>
class SharedBitfield<>
{};

template <typename Type>
class SharedBitfield<Type> : public SharedBitfieldBase<typename std::underlying_type<Type>::type>
{
public:
	SharedBitfield(Type value) : SharedBitfieldBase<typename std::underlying_type<Type>::type>(static_cast<typename std::underlying_type<Type>::type>(value)) {}
	SharedBitfield(typename std::underlying_type<Type>::type value) : SharedBitfieldBase<typename std::underlying_type<Type>::type>(value) {}
		
	operator Type() const { return static_cast<Type>(this->m_value); };
	
	template <typename... T>
	auto operator|(SharedBitfield<T...> other) const -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield, SharedBitfield<T...>>::type, SharedBitfield<>>::value, typename intersect_SharedBitfield<SharedBitfield, SharedBitfield<T...>>::type>::type
	{
		return typename intersect_SharedBitfield<SharedBitfield, SharedBitfield<T...>>::type(this->m_value | static_cast<decltype(this->m_value)>(other));
	}
	
	template <typename... T>
	auto operator&(SharedBitfield<T...> other) const -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield, SharedBitfield<T...>>::type, SharedBitfield<>>::value, typename intersect_SharedBitfield<SharedBitfield, SharedBitfield<T...>>::type>::type
	{
		return typename intersect_SharedBitfield<SharedBitfield, SharedBitfield<T...>>::type(this->m_value & static_cast<decltype(this->m_value)>(other));
	}
	
	template <typename... T>
	auto operator^(SharedBitfield<T...> other) const -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield, SharedBitfield<T...>>::type, SharedBitfield<>>::value, typename intersect_SharedBitfield<SharedBitfield, SharedBitfield<T...>>::type>::type
	{
		return typename intersect_SharedBitfield<SharedBitfield, SharedBitfield<T...>>::type(this->m_value ^static_cast<decltype(this->m_value)>(other));
	}
}; 

template <typename Type, typename... Types>
class SharedBitfield<Type, Types...> : public SharedBitfield<Types...>
{
public:
	SharedBitfield(Type value) : SharedBitfield<Types...>(static_cast<typename std::underlying_type<Type>::type>(value)) {}
	SharedBitfield(typename std::underlying_type<Type>::type value) : SharedBitfield<Types...>(value) {}
	
	operator Type() const { return static_cast<Type>(this->m_value); };
	
	template <typename... T>
	auto operator|(SharedBitfield<T...> other) const -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield, SharedBitfield<T...>>::type, SharedBitfield<>>::value, typename intersect_SharedBitfield<SharedBitfield, SharedBitfield<T...>>::type>::type
	{
		return typename intersect_SharedBitfield<SharedBitfield, SharedBitfield<T...>>::type(this->m_value | static_cast<decltype(this->m_value)>(other));
	}
	
	template <typename... T>
	auto operator&(SharedBitfield<T...> other) const -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield, SharedBitfield<T...>>::type, SharedBitfield<>>::value, typename intersect_SharedBitfield<SharedBitfield, SharedBitfield<T...>>::type>::type
	{
		return typename intersect_SharedBitfield<SharedBitfield, SharedBitfield<T...>>::type(this->m_value & static_cast<decltype(this->m_value)>(other));
	}
	
	template <typename... T>
	auto operator^(SharedBitfield<T...> other) const -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield, SharedBitfield<T...>>::type, SharedBitfield<>>::value, typename intersect_SharedBitfield<SharedBitfield, SharedBitfield<T...>>::type>::type
	{
		return typename intersect_SharedBitfield<SharedBitfield, SharedBitfield<T...>>::type(this->m_value ^static_cast<decltype(this->m_value)>(other));
	}
};

// operators

template <typename Enum, typename ConvertibleEnum>
typename std::enable_if<std::is_base_of<SharedBitfieldBase<typename std::underlying_type<typename std::enable_if<std::is_enum<Enum>::value, Enum>::type>::type>, ConvertibleEnum>::value, Enum>::type
operator|(Enum a, ConvertibleEnum b)
{
	return a | static_cast<Enum>(b);
}

template <typename ConvertibleEnum, typename Enum>
typename std::enable_if<std::is_base_of<SharedBitfieldBase<typename std::underlying_type<typename std::enable_if<std::is_enum<Enum>::value, Enum>::type>::type>, ConvertibleEnum>::value, Enum>::type
operator|(ConvertibleEnum a, Enum b)
{
	return static_cast<Enum>(a) | b;
}

template <typename Enum, typename ConvertibleEnum>
typename std::enable_if<std::is_base_of<SharedBitfieldBase<typename std::underlying_type<typename std::enable_if<std::is_enum<Enum>::value, Enum>::type>::type>, ConvertibleEnum>::value, Enum>::type
operator&(Enum a, ConvertibleEnum b)
{
	return a & static_cast<Enum>(b);
}

template <typename ConvertibleEnum, typename Enum>
typename std::enable_if<std::is_base_of<SharedBitfieldBase<typename std::underlying_type<typename std::enable_if<std::is_enum<Enum>::value, Enum>::type>::type>, ConvertibleEnum>::value, Enum>::type
operator&(ConvertibleEnum a, Enum b)
{
	return static_cast<Enum>(a) & b;
}

template <typename Enum, typename ConvertibleEnum>
typename std::enable_if<std::is_base_of<SharedBitfieldBase<typename std::underlying_type<typename std::enable_if<std::is_enum<Enum>::value, Enum>::type>::type>, ConvertibleEnum>::value, Enum>::type
operator^(Enum a, ConvertibleEnum b)
{
	return a ^ static_cast<Enum>(b);
}

template <typename ConvertibleEnum, typename Enum>
typename std::enable_if<std::is_base_of<SharedBitfieldBase<typename std::underlying_type<typename std::enable_if<std::is_enum<Enum>::value, Enum>::type>::type>, ConvertibleEnum>::value, Enum>::type
operator^(ConvertibleEnum a, Enum b)
{
	return static_cast<Enum>(a) ^ b;
}

} // namespace glbinding
