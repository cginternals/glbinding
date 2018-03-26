
#pragma once


#include <type_traits>

#include <glesbinding/glesbinding_api.h>
#include <glesbinding/glesbinding_features.h>


namespace glesbinding 
{


/**
*  @brief
*    A representation of a bitfield value that could be member of multiple bitfield types as allowed in OpenGL
*
*  @param Types
*    The valid bitfield types for the given value
*/
template <typename... Types>
class GLESBINDING_TEMPLATE_API SharedBitfield;


// intersection


/**
*  @brief
*    Break condition for the is_member_of_SharedBitfield metaprogramming
*
*  @tparam T
*    The type to test for membership
*  @tparam Types
*    The tail of the list of Types
*
*  @remarks
*    This template is used if the list of Types is empty
*/
template<typename T, typename... Types>
struct GLESBINDING_TEMPLATE_API is_member_of_SharedBitfield
{
    static const bool value = false; ///< result of the inclusion test; always false since the list of types to test against is empty
};


/**
*  @brief
*    Test condition and recursion for the is_member_of_SharedBitfield metaprogramming
*
*  @tparam T
*    The type to test for membership
*  @tparam U
*    The current head of the list of Types
*  @tparam Types
*    The tail of the list of Types
*/
template<typename T, typename U, typename... Types>
struct GLESBINDING_TEMPLATE_API is_member_of_SharedBitfield<T, U, Types...>
{
    static const bool value = std::conditional<std::is_same<T, U>::value, std::true_type, is_member_of_SharedBitfield<T, Types...>>::type::value; ///< result of the inclusion test
};


/**
*  @brief
*    Break condition for the SharedBitfield type concatenation
*/
template<typename, typename>
struct GLESBINDING_TEMPLATE_API prepend_to_SharedBitfield
{
};


/**
*  @brief
*   The SharedBitfield type concatenation
*
*  @tparam T
*   The new head of the list of Types
*  @tparam Types
*   The tail of the list of Types
*/
template<typename T, typename... Types>
struct GLESBINDING_TEMPLATE_API prepend_to_SharedBitfield<T, SharedBitfield<Types...>>
{
    using type = SharedBitfield<T, Types...>; ///< the compound SharedBitfield type
};


/**
*  @brief
*    Break condition for the SharedBitfield intersection
*/
template<typename, typename>
struct GLESBINDING_TEMPLATE_API intersect_SharedBitfield
{
    using type = SharedBitfield<>; ///< Result of the intersection; always empty for non-overlapping SharedBitfield type lists
};


/**
*  @brief
*    The SharedBitfield type list intersection
*
*  @tparam T
*    Head of the first SharedBitfield type list
*  @tparam Types
*    Tail of the first SharedBitfield type list
*  @tparam OtherTypes
*    Head and Tail of the second SharedBitfield type list
*/
template<typename T, typename... Types, typename... OtherTypes>
struct GLESBINDING_TEMPLATE_API intersect_SharedBitfield<SharedBitfield<T, Types...>, SharedBitfield<OtherTypes...>>
{
    using type = typename std::conditional<!is_member_of_SharedBitfield<T, OtherTypes...>::value, typename intersect_SharedBitfield<SharedBitfield<Types...>, SharedBitfield<OtherTypes...>>::type, typename prepend_to_SharedBitfield<T, typename intersect_SharedBitfield<SharedBitfield<Types...>, SharedBitfield<OtherTypes...>>::type>::type>::type; ///< Result of the intersection
};


// implementation


/**
*  @brief
*    The base class of a SharedBitfield, containing the actual (and convertible) bitfield value
*
*  @tparam T
*    The underlying type of the type-safe enum class
*/
template <typename T>
class GLESBINDING_TEMPLATE_API SharedBitfieldBase
{
public:
    using UnderlyingType = T; ///< Propagate underlying type

    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] value
    *    The value encoded in this shared bitfield
    */
    GLESBINDING_CONSTEXPR inline SharedBitfieldBase(T value);

    /**
    *  @brief
    *    Cast operator to the underlying type
    *
    *  @return
    *    The bitfield value
    */
    GLESBINDING_CONSTEXPR inline explicit operator T() const;


protected:
    T m_value; ///< The value of the SharedBitfield
};


/**
*  @brief
*    Invalid SharedBitfield class as it contains no valid bitfield types.
*/
template <>
class GLESBINDING_TEMPLATE_API SharedBitfield<>
{
};


/**
*  @brief
*    A representation of a bitfield value that could be member of multiple bitfield types as allowed in OpenGL.
*    This template is the break condition of a former SharedBitfield that got reduced to just one valid bitfield type through operations.
*
*  @param Type
*    The one valid bitfield type for the given value.
*/
template <typename Type>
class GLESBINDING_TEMPLATE_API SharedBitfield<Type> : public SharedBitfieldBase<typename std::underlying_type<Type>::type>
{
public:
    using UnderlyingType = typename SharedBitfieldBase<typename std::underlying_type<Type>::type>::UnderlyingType; ///< inherit UnderlyingType declaration

    /**
    *  @brief
    *    Constructor
    *
    *  @tparam ConstructionType
    *    The type of the passed value which is implicitly convertible to the UnderlyingType
    *
    *  @param[in] value
    *    The value of this SharedBitfield
    */
    template <typename ConstructionType>
    GLESBINDING_CONSTEXPR inline SharedBitfield(ConstructionType value);

    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] value
    *    The value of this SharedBitfield
    */
    GLESBINDING_CONSTEXPR inline SharedBitfield(typename std::underlying_type<Type>::type value);

    /**
    *  @brief
    *    Cast operator to allow for conversion of the generic value to a specific bitfield type
    *
    *  @return
    *    The bitfield value as type of Type.
    */
    GLESBINDING_CONSTEXPR inline operator Type() const;

    /**
    *  @brief
    *    Performs a bit-wise 'or' operation on the values of this and other while constraining the resulting shared bitfield types to the intersection
    *
    *  @param[in] other
    *    The SharedBitfield instance to operate with
    *
    *  @return
    *    The new SharedBitfield with intersected types list and computed value
    *
    *  @remarks
    *    This method is not visible to the compiler if the operands don't share any bitfield type (the intersection is empty) and thus results in a compiler error
    */
    template <typename... T>
    GLESBINDING_CONSTEXPR inline auto operator|(SharedBitfield<T...> other) const -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield<Type>, SharedBitfield<T...>>::type, SharedBitfield<>>::value, typename intersect_SharedBitfield<SharedBitfield<Type>, SharedBitfield<T...>>::type>::type;

    /**
    *  @brief
    *    Performs a bit-wise 'or' assignment operation on the values of this and other, where type list of the right hand side has to be a superset of the types list of this SharedBitfield
    *
    *  @param[in] other
    *    The SharedBitfield instance to operate with
    *
    *  @remarks
    *    This method is not visible to the compiler if the operands don't share any bitfield type (the intersection is empty) and thus results in a compiler error
    */
    template <typename... T>
    inline auto operator|=(SharedBitfield<T...> other) -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield<Type>, SharedBitfield<T...>>::type, SharedBitfield<>>::value, SharedBitfield &>::type;

    /**
    *  @brief
    *    Performs a bit-wise 'and' operation on the values of this and other while constraining the resulting shared bitfield types to the intersection
    *
    *  @param[in] other
    *    The SharedBitfield instance to operate with
    *
    *  @return
    *    The new SharedBitfield with intersected types list and computed value
    *
    *  @remarks
    *    This method is not visible to the compiler if the operands don't share any bitfield type (the intersection is empty) and thus results in a compiler error
    */
    template <typename... T>
    GLESBINDING_CONSTEXPR inline auto operator&(SharedBitfield<T...> other) const -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield<Type>, SharedBitfield<T...>>::type, SharedBitfield<>>::value, typename intersect_SharedBitfield<SharedBitfield<Type>, SharedBitfield<T...>>::type>::type;

    /**
    *  @brief
    *    Performs a bit-wise 'and' assignment operation on the values of this and other, where type list of the right hand side has to be a superset of the types list of this SharedBitfield
    *
    *  @param[in] other
    *    The SharedBitfield instance to operate with
    *
    *  @remarks
    *    This method is not visible to the compiler if the operands don't share any bitfield type (the intersection is empty) and thus results in a compiler error
    */
    template <typename... T>
    inline auto operator&=(SharedBitfield<T...> other) -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield<Type>, SharedBitfield<T...>>::type, SharedBitfield<>>::value, SharedBitfield &>::type;

    /**
    *  @brief
    *    Performs a bit-wise 'xor' operation on the values of this and other while constraining the resulting shared bitfield types to the intersection
    *
    *  @param[in] other
    *    The SharedBitfield instance to operate with
    *
    *  @return
    *    The new SharedBitfield with intersected types list and computed value
    *
    *  @remarks
    *    This method is not visible to the compiler if the operands don't share any bitfield type (the intersection is empty) and thus results in a compiler error
    */
    template <typename... T>
    GLESBINDING_CONSTEXPR inline auto operator^(SharedBitfield<T...> other) const -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield<Type>, SharedBitfield<T...>>::type, SharedBitfield<>>::value, typename intersect_SharedBitfield<SharedBitfield<Type>, SharedBitfield<T...>>::type>::type;

    /**
    *  @brief
    *    Performs a bit-wise 'xor' assignment operation on the values of this and other, where type list of the right hand side has to be a superset of the types list of this SharedBitfield
    *
    *  @param[in] other
    *    The SharedBitfield instance to operate with
    *
    *  @remarks
    *    This method is not visible to the compiler if the operands don't share any bitfield type (the intersection is empty) and thus results in a compiler error
    */
    template <typename... T>
    inline auto operator^=(SharedBitfield<T...> other) -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield<Type>, SharedBitfield<T...>>::type, SharedBitfield<>>::value, SharedBitfield &>::type;

    /**
    *  @brief
    *    Test for equality of the values of this SharedBitfield and the other SharedBitfield
    *
    *  @param[in] other
    *    The SharedBitfield instance to operate with
    *
    *  @return
    *    'true' if the values equals, else 'false'
    *
    *  @remarks
    *    This method is not visible to the compiler if the operands don't share any bitfield type (the intersection is empty) and thus results in a compiler error
    */
    template <typename... T>
    GLESBINDING_CONSTEXPR inline auto operator==(SharedBitfield<T...> other) const -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield<Type>, SharedBitfield<T...>>::type, SharedBitfield<>>::value, bool>::type;

    /**
    *  @brief
    *    Test for equality of the value of this SharedBitfield and the other bitfield value
    *
    *  @tparam T
    *    The bitfield type of the value to test
    *  @param[in] other
    *    The bitfield value to operate with
    *
    *  @return
    *    'true' if the values equals, else 'false'
    *
    *  @remarks
    *    This method is not visible to the compiler if the this SharedBitfield type list contains the type T
    */
    template <typename T>
    GLESBINDING_CONSTEXPR inline auto operator==(T other) const -> typename std::enable_if<is_member_of_SharedBitfield<T, Type>::value, bool>::type;
};


/**
*  @brief
*    A representation of a bitfield value that could be member of multiple bitfield types as allowed in OpenGL
*
*  @tparam Type
*    The head of valid bitfields type for the given value
*  @tparam Types
*    The tail of valid bitfields type for the given value
*/
template <typename Type, typename... Types>
class GLESBINDING_TEMPLATE_API SharedBitfield<Type, Types...> : public SharedBitfield<Types...>
{
public:
    using UnderlyingType = typename SharedBitfield<Types...>::UnderlyingType; ///< inherit UnderlyingType declaration

    /**
    *  @brief
    *    Constructor
    *
    *  @tparam ConstructionType
    *    The type of the passed value which is implicitly convertible to the UnderlyingType
    *  @param[in] value
    *    The value of this SharedBitfield
    */
    template <typename ConstructionType>
    GLESBINDING_CONSTEXPR inline SharedBitfield(ConstructionType value);

    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] value
    *    The value of this SharedBitfield
    */
    GLESBINDING_CONSTEXPR inline SharedBitfield(typename std::underlying_type<Type>::type value);

    /**
    *  @brief
    *    Cast operator to allow for conversion of the generic value to a specific bitfield type
    *
    *  @return
    *    The bitfield value as type of Type
    */
    GLESBINDING_CONSTEXPR inline operator Type() const;

    /**
    *  @brief
    *    Performs a bit-wise 'or' operation on the values of this and other while constraining the resulting shared bitfield types to the intersection
    *
    *  @param[in] other
    *    The SharedBitfield instance to operate with
    *
    *  @return
    *    The new SharedBitfield with intersected types list and computed value
    *
    *  @remarks
    *    This method is not visible to the compiler if the operands don't share any bitfield type (the intersection is empty) and thus results in a compiler error
    */
    template <typename... T>
    GLESBINDING_CONSTEXPR inline auto operator|(SharedBitfield<T...> other) const -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield<Type, Types...>, SharedBitfield<T...>>::type, SharedBitfield<>>::value, typename intersect_SharedBitfield<SharedBitfield<Type, Types...>, SharedBitfield<T...>>::type>::type;

    /**
    *  @brief
    *    Performs a bit-wise 'or' assignment operation on the values of this and other, where type list of the right hand side has to be a superset of the types list of this SharedBitfield
    *
    *  @param[in] other
    *    The SharedBitfield instance to operate with
    *
    *  @remarks
    *    This method is not visible to the compiler if the operands don't share any bitfield type (the intersection is empty) and thus results in a compiler error
    */
    template <typename... T>
    inline auto operator|=(SharedBitfield<T...> other) -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield<Type, Types...>, SharedBitfield<T...>>::type, SharedBitfield<>>::value, SharedBitfield &>::type;

    /**
    *  @brief
    *    Performs a bit-wise 'and' operation on the values of this and other while constraining the resulting shared bitfield types to the intersection
    *
    *  @param[in] other
    *    The SharedBitfield instance to operate with
    *
    *  @return
    *    The new SharedBitfield with intersected types list and computed value
    *
    *  @remarks
    *    This method is not visible to the compiler if the operands don't share any bitfield type (the intersection is empty) and thus results in a compiler error
    */
    template <typename... T>
    GLESBINDING_CONSTEXPR inline auto operator&(SharedBitfield<T...> other) const -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield<Type, Types...>, SharedBitfield<T...>>::type, SharedBitfield<>>::value, typename intersect_SharedBitfield<SharedBitfield<Type, Types...>, SharedBitfield<T...>>::type>::type;

    /**
    *  @brief
    *    Performs a bit-wise 'and' assignment operation on the values of this and other, where type list of the right hand side has to be a superset of the types list of this SharedBitfield
    *
    *  @param[in] other
    *    The SharedBitfield instance to operate with
    *
    *  @remarks
    *    This method is not visible to the compiler if the operands don't share any bitfield type (the intersection is empty) and thus results in a compiler error
    */
    template <typename... T>
    inline auto operator&=(SharedBitfield<T...> other) -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield<Type, Types...>, SharedBitfield<T...>>::type, SharedBitfield<>>::value, SharedBitfield &>::type;

    /**
    *  @brief
    *    Performs a bit-wise 'xor' operation on the values of this and other while constraining the resulting shared bitfield types to the intersection
    *
    *  @param[in] other
    *    The SharedBitfield instance to operate with
    *
    *  @return
    *    The new SharedBitfield with intersected types list and computed value
    *
    *  @remarks
    *    This method is not visible to the compiler if the operands don't share any bitfield type (the intersection is empty) and thus results in a compiler error
    */
    template <typename... T>
    GLESBINDING_CONSTEXPR inline auto operator^(SharedBitfield<T...> other) const -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield<Type, Types...>, SharedBitfield<T...>>::type, SharedBitfield<>>::value, typename intersect_SharedBitfield<SharedBitfield<Type, Types...>, SharedBitfield<T...>>::type>::type;

    /**
    *  @brief
    *    Performs a bit-wise 'xor' assignment operation on the values of this and other, where type list of the right hand side has to be a superset of the types list of this SharedBitfield
    *
    *  @param[in] other
    *    The SharedBitfield instance to operate with
    *
    *  @remarks
    *    This method is not visible to the compiler if the operands don't share any bitfield type (the intersection is empty) and thus results in a compiler error
    */
    template <typename... T>
    inline auto operator^=(SharedBitfield<T...> other) -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield<Type, Types...>, SharedBitfield<T...>>::type, SharedBitfield<>>::value, SharedBitfield &>::type;

    /**
    *  @brief
    *    Test for equality of the values of this SharedBitfield and the other SharedBitfield
    *
    *  @param[in] other
    *    The SharedBitfield instance to operate with
    *
    *  @return
    *    true iff the values equals
    *
    *  @remarks
    *    This method is not visible to the compiler if the operands don't share any bitfield type (the intersection is empty) and thus results in a compiler error
    */
    template <typename... T>
    GLESBINDING_CONSTEXPR inline auto operator==(SharedBitfield<T...> other) const -> typename std::enable_if<!std::is_same<typename intersect_SharedBitfield<SharedBitfield<Type, Types...>, SharedBitfield<T...>>::type, SharedBitfield<>>::value, bool>::type;

    /**
    *  @brief
    *    Test for equality of the value of this SharedBitfield and the other bitfield value
    *
    *  @tparam T
    *    The bitfield type of the value to test
    *  @param[in] other
    *     The bitfield value to operate with
    *
    *  @return
    *    'true' if the values equals, else 'false'
    *
    *  @remarks
    *    This method is not visible to the compiler if the this SharedBitfield type list contains the type T
    */
    template <typename T>
    GLESBINDING_CONSTEXPR inline auto operator==(T other) const -> typename std::enable_if<is_member_of_SharedBitfield<T, Type, Types...>::value, bool>::type;
};


// operators


/**
*  @brief
*    External bit-wise 'or' operator for bitfield types on the left hand side
*
*  @tparam Enum
*    The type of the bitfield
*  @tparam ConvertibleEnum
*    The SharedBitfield instance
*  @param[in] a
*    The value of the bitfield
*  @param[in] b
*    The value of the SharedBitfield
*
*  @return
*    A SharedBitfield with computed value
*
*  @remarks
*    This method is not visible to the compiler if the bitfield type is not in the list of types of the SharedBitfield and thus results in a compiler error
*/
template <typename Enum, typename ConvertibleEnum>
GLESBINDING_CONSTEXPR inline typename std::enable_if<std::is_base_of<SharedBitfieldBase<typename std::underlying_type<typename std::enable_if<std::is_enum<Enum>::value, Enum>::type>::type>, ConvertibleEnum>::value, Enum>::type
operator|(Enum a, ConvertibleEnum b);

/**
*  @brief
*    External bit-wise 'or' operator for bitfield types on the right hand side
*
*  @tparam ConvertibleEnum
*    The SharedBitfield instance
*  @tparam Enum
*    The type of the bitfield
*  @param[in] a
*    The value of the SharedBitfield
*  @param[in] b
*    The value of the bitfield
*
*  @return
*    A SharedBitfield with computed value
*
*  @remarks
*    This method is not visible to the compiler if the bitfield type is not in the list of types of the SharedBitfield and thus results in a compiler error
*/
template <typename ConvertibleEnum, typename Enum>
GLESBINDING_CONSTEXPR inline typename std::enable_if<std::is_base_of<SharedBitfieldBase<typename std::underlying_type<typename std::enable_if<std::is_enum<Enum>::value, Enum>::type>::type>, ConvertibleEnum>::value, Enum>::type
operator|(ConvertibleEnum a, Enum b);

/**
*  @brief
*    External bit-wise 'or' assignment operator for bitfield types on the left hand side
*
*  @tparam Enum
*    The type of the bitfield
*  @tparam ConvertibleEnum
*    The SharedBitfield instance
*  @param[in] a
*    The value of the bitfield
*  @param[in] b
*    The value of the SharedBitfield
*
*  @return
*    The new value of the bitfield
*
*  @remarks
*    This method is not visible to the compiler if the bitfield type is not in the list of types of the SharedBitfield and thus results in a compiler error
*/
template <typename Enum, typename ConvertibleEnum>
inline typename std::enable_if<std::is_base_of<SharedBitfieldBase<typename std::underlying_type<typename std::enable_if<std::is_enum<Enum>::value, Enum>::type>::type>, ConvertibleEnum>::value, Enum>::type
operator|=(Enum & a, ConvertibleEnum b);

/**
*  @brief
*    External bit-wise 'and' operator for bitfield types on the left hand side
*
*  @tparam Enum
*    The type of the bitfield
*  @tparam ConvertibleEnum
*    The SharedBitfield instance
*  @param[in] a
*    The value of the bitfield
*  @param[in] b
*    The value of the SharedBitfield
*
*  @return
*    A SharedBitfield with computed value
*
*  @remarks
*    This method is not visible to the compiler if the bitfield type is not in the list of types of the SharedBitfield and thus results in a compiler error
*/
template <typename Enum, typename ConvertibleEnum>
GLESBINDING_CONSTEXPR inline typename std::enable_if<std::is_base_of<SharedBitfieldBase<typename std::underlying_type<typename std::enable_if<std::is_enum<Enum>::value, Enum>::type>::type>, ConvertibleEnum>::value, Enum>::type
operator&(Enum a, ConvertibleEnum b);

/**
*  @brief
*    External bit-wise 'and' operator for bitfield types on the right hand side
*
*  @tparam ConvertibleEnum
*    The SharedBitfield instance
*  @tparam Enum
*    The type of the bitfield
*  @param[in] a
*    The value of the SharedBitfield
*  @param[in] b
*    The value of the bitfield
*
*  @return
*    A SharedBitfield with computed value
*
*  @remarks
*    This method is not visible to the compiler if the bitfield type is not in the list of types of the SharedBitfield and thus results in a compiler error
*/
template <typename ConvertibleEnum, typename Enum>
GLESBINDING_CONSTEXPR inline typename std::enable_if<std::is_base_of<SharedBitfieldBase<typename std::underlying_type<typename std::enable_if<std::is_enum<Enum>::value, Enum>::type>::type>, ConvertibleEnum>::value, Enum>::type
operator&(ConvertibleEnum a, Enum b);

/**
*  @brief
*    External bit-wise 'and' assignment operator for bitfield types on the left hand side
*
*  @tparam Enum
*    The type of the bitfield
*  @tparam ConvertibleEnum
*    The SharedBitfield instance
*  @param[in] a
*    The value of the bitfield
*  @param[in] b
*    The value of the SharedBitfield
*
*  @return
*    The new value of the bitfield
*
*  @remarks
*    This method is not visible to the compiler if the bitfield type is not in the list of types of the SharedBitfield and thus results in a compiler error
*/
template <typename Enum, typename ConvertibleEnum>
inline typename std::enable_if<std::is_base_of<SharedBitfieldBase<typename std::underlying_type<typename std::enable_if<std::is_enum<Enum>::value, Enum>::type>::type>, ConvertibleEnum>::value, Enum>::type
operator&=(Enum & a, ConvertibleEnum b);

/**
*  @brief
*    External bit-wise 'xor' operator for bitfield types on the left hand side
*
*  @tparam Enum
*    The type of the bitfield
*  @tparam ConvertibleEnum
*    The SharedBitfield instance
*  @param[in] a
*    The value of the bitfield
*  @param[in] b
*    The value of the SharedBitfield
*
*  @return
*    A SharedBitfield with computed value
*
*  @remarks
*    This method is not visible to the compiler if the bitfield type is not in the list of types of the SharedBitfield and thus results in a compiler error
*/
template <typename Enum, typename ConvertibleEnum>
GLESBINDING_CONSTEXPR inline typename std::enable_if<std::is_base_of<SharedBitfieldBase<typename std::underlying_type<typename std::enable_if<std::is_enum<Enum>::value, Enum>::type>::type>, ConvertibleEnum>::value, Enum>::type
operator^(Enum a, ConvertibleEnum b);

/**
*  @brief
*    External bit-wise 'xor' operator for bitfield types on the right hand side
*
*  @tparam ConvertibleEnum
*    The SharedBitfield instance
*  @tparam Enum
*    The type of the bitfield
*  @param[in] a
*    The value of the SharedBitfield
*  @param[in] b
*    The value of the bitfield
*
*  @return
*    A SharedBitfield with computed value
*
*  @remarks
*    This method is not visible to the compiler if the bitfield type is not in the list of types of the SharedBitfield and thus results in a compiler error
*/
template <typename ConvertibleEnum, typename Enum>
GLESBINDING_CONSTEXPR inline typename std::enable_if<std::is_base_of<SharedBitfieldBase<typename std::underlying_type<typename std::enable_if<std::is_enum<Enum>::value, Enum>::type>::type>, ConvertibleEnum>::value, Enum>::type
operator^(ConvertibleEnum a, Enum b);

/**
*  @brief
*    External bit-wise 'xpyor' assignment operator for bitfield types on the left hand side
*
*  @tparam Enum
*    The type of the bitfield
*  @tparam ConvertibleEnum
*    The SharedBitfield instance
*  @param[in] a
*    The value of the bitfield
*  @param[in] b
*    The value of the SharedBitfield
*
*  @return
*    The new value of the bitfield
*
*  @remarks
*    This method is not visible to the compiler if the bitfield type is not in the list of types of the SharedBitfield and thus results in a compiler error
*/
template <typename Enum, typename ConvertibleEnum>
inline typename std::enable_if<std::is_base_of<SharedBitfieldBase<typename std::underlying_type<typename std::enable_if<std::is_enum<Enum>::value, Enum>::type>::type>, ConvertibleEnum>::value, Enum>::type
operator^=(Enum & a, ConvertibleEnum b);


} // namespace glesbinding


#include <glesbinding/SharedBitfield.inl>
