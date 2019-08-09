
#pragma once


#include <type_traits>


namespace glbinding
{


GLBINDING_CONSTEXPR CallbackMask operator~(const CallbackMask a)
{
    using callback_mask_t = std::underlying_type<CallbackMask>::type;

    return static_cast<CallbackMask>(~static_cast<callback_mask_t>(a));
}

GLBINDING_CONSTEXPR CallbackMask operator|(const CallbackMask a, const CallbackMask b)
{
    using callback_mask_t = std::underlying_type<CallbackMask>::type;

    return static_cast<CallbackMask>(static_cast<callback_mask_t>(a) | static_cast<callback_mask_t>(b));
}

GLBINDING_CONSTEXPR CallbackMask operator&(const CallbackMask a, const CallbackMask b)
{
    using callback_mask_t = std::underlying_type<CallbackMask>::type;

    return static_cast<CallbackMask>(static_cast<callback_mask_t>(a) & static_cast<callback_mask_t>(b));
}

GLBINDING_CONSTEXPR CallbackMask operator^(const CallbackMask a, const CallbackMask b)
{
    using callback_mask_t = std::underlying_type<CallbackMask>::type;

    return static_cast<CallbackMask>(static_cast<callback_mask_t>(a) ^ static_cast<callback_mask_t>(b));
}

CallbackMask& operator|=(CallbackMask& a, const CallbackMask b)
{
    a = a | b;
    return a;
}

CallbackMask& operator&=(CallbackMask& a, const CallbackMask b)
{
    a = a & b;
    return a;
}

CallbackMask& operator^=(CallbackMask& a, const CallbackMask b)
{
    a = a ^ b;
    return a;
}


} // namespace glbinding